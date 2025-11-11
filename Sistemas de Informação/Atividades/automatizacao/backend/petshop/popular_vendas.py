import os
import sys
import django
from datetime import datetime, timedelta
import random

# Configurar Django
sys.path.append(os.path.dirname(os.path.abspath(__file__)))
os.environ.setdefault('DJANGO_SETTINGS_MODULE', 'petshop.settings')
django.setup()

from vendas.mongodb import VendaService, ProdutoService, ClienteService

def popular_vendas():
    """Adiciona vendas distribuídas pelos últimos 90 dias"""
    venda_service = VendaService()
    produto_service = ProdutoService()
    cliente_service = ClienteService()

    print("\n" + "="*60)
    print("PREPARANDO DADOS PARA VENDAS")
    print("="*60 + "\n")

    # Buscar produtos e clientes
    print("Buscando produtos e clientes cadastrados...")
    produtos = produto_service.listar()
    clientes = cliente_service.listar()

    if not produtos or not clientes:
        print("[ERRO] Nao ha produtos ou clientes cadastrados!")
        print("Execute primeiro: python popular_banco.py")
        return []

    print(f"[OK] {len(produtos)} produtos encontrados")
    print(f"[OK] {len(clientes)} clientes encontrados\n")

    # Preparar produtos (converter ObjectId para string)
    produtos_list = []
    for p in produtos:
        produtos_list.append({
            '_id': str(p['_id']),
            'nome': p['nome'],
            'preco': p['preco']
        })

    clientes_list = []
    for c in clientes:
        clientes_list.append({
            '_id': str(c['_id']),
            'nome': c['nome']
        })

    print("="*60)
    print("GERANDO VENDAS PARA OS ULTIMOS 90 DIAS")
    print("="*60 + "\n")

    vendas_criadas = []
    data_atual = datetime.now()

    # Distribuir vendas pelos períodos:
    # - Últimos 7 dias: 15-20 vendas (mais recentes)
    # - 8-15 dias: 10-15 vendas
    # - 16-30 dias: 15-20 vendas
    # - 31-60 dias: 20-25 vendas
    # - 61-90 dias: 15-20 vendas
    # Total: ~75-100 vendas

    periodos = [
        {"inicio": 0, "fim": 7, "quantidade": random.randint(15, 20), "nome": "Ultimos 7 dias"},
        {"inicio": 8, "fim": 15, "quantidade": random.randint(10, 15), "nome": "8-15 dias atras"},
        {"inicio": 16, "fim": 30, "quantidade": random.randint(15, 20), "nome": "16-30 dias atras"},
        {"inicio": 31, "fim": 60, "quantidade": random.randint(20, 25), "nome": "31-60 dias atras"},
        {"inicio": 61, "fim": 90, "quantidade": random.randint(15, 20), "nome": "61-90 dias atras"},
    ]

    contador_geral = 0

    for periodo in periodos:
        print(f"\n[PERIODO] {periodo['nome']} - Gerando {periodo['quantidade']} vendas")
        print("-" * 60)

        for i in range(periodo['quantidade']):
            try:
                # Data aleatória dentro do período
                dias_atras = random.randint(periodo['inicio'], periodo['fim'])
                data_venda = data_atual - timedelta(days=dias_atras)

                # Selecionar cliente aleatório
                cliente = random.choice(clientes_list)

                # Gerar 1-5 itens por venda
                num_itens = random.randint(1, 5)
                itens = []
                total = 0

                # Selecionar produtos aleatórios sem repetição
                produtos_selecionados = random.sample(produtos_list, min(num_itens, len(produtos_list)))

                for produto in produtos_selecionados:
                    quantidade = random.randint(1, 3)
                    subtotal = produto['preco'] * quantidade
                    total += subtotal

                    itens.append({
                        'produto_id': produto['_id'],
                        'produto_nome': produto['nome'],
                        'quantidade': quantidade,
                        'preco_unitario': produto['preco'],
                        'subtotal': subtotal
                    })

                # Criar venda
                venda_data = {
                    'cliente_id': cliente['_id'],
                    'cliente_nome': cliente['nome'],
                    'itens': itens,
                    'total': total,
                    'data': data_venda.isoformat()
                }

                venda_id = venda_service.criar(venda_data)
                vendas_criadas.append(venda_id)
                contador_geral += 1

                # Formatar data para exibição
                data_formatada = data_venda.strftime("%d/%m/%Y")
                print(f"  {contador_geral:3d}. [OK] Venda em {data_formatada} - {cliente['nome']} - R$ {total:.2f} ({len(itens)} itens)")

            except Exception as e:
                print(f"  {contador_geral:3d}. [ERRO] Falha ao criar venda: {str(e)}")

    return vendas_criadas

def main():
    print("\n")
    print("+" + "=" * 58 + "+")
    print("|" + " " * 10 + "POPULAR VENDAS - PETSHOP" + " " * 23 + "|")
    print("+" + "=" * 58 + "+")
    print()

    try:
        vendas_ids = popular_vendas()

        # Resumo
        print("\n" + "=" * 60)
        print("RESUMO FINAL")
        print("=" * 60)
        print(f"  [OK] {len(vendas_ids)} vendas cadastradas")
        print(f"  [OK] Distribuidas pelos ultimos 90 dias")
        print("=" * 60)
        print("\n[SUCESSO] Vendas populadas com sucesso!")
        print("\nAgora acesse o Dashboard para visualizar os graficos!")
        print("URL: http://localhost:5173/dashboard")
        print()

    except Exception as e:
        print(f"\n[ERRO] Erro ao popular vendas: {e}")
        import traceback
        traceback.print_exc()

if __name__ == '__main__':
    main()
