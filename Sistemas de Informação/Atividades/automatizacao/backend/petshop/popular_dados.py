"""
Script para popular o banco de dados MongoDB com dados de exemplo
Execute: python popular_dados.py
"""

import os
import sys
import django
from datetime import datetime, timedelta
import random

# Configurar Django
sys.path.append(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
os.environ.setdefault('DJANGO_SETTINGS_MODULE', 'petshop.settings')
django.setup()

from vendas.mongodb import ProdutoService, ClienteService, VendaService

def popular_produtos():
    """Adiciona produtos de exemplo"""
    produto_service = ProdutoService()

    produtos = [
        {'nome': 'Ração Premium Cães', 'descricao': 'Ração premium para cães adultos 15kg', 'preco': 189.90, 'estoque': 50},
        {'nome': 'Ração Gatos Filhotes', 'descricao': 'Ração para gatos filhotes 10kg', 'preco': 149.90, 'estoque': 30},
        {'nome': 'Areia Sanitária', 'descricao': 'Areia sanitária perfumada 4kg', 'preco': 25.90, 'estoque': 100},
        {'nome': 'Shampoo Pet', 'descricao': 'Shampoo neutro para pets 500ml', 'preco': 32.90, 'estoque': 45},
        {'nome': 'Coleira Ajustável', 'descricao': 'Coleira ajustável tamanho M', 'preco': 29.90, 'estoque': 60},
        {'nome': 'Brinquedo Mordedor', 'descricao': 'Brinquedo mordedor resistente', 'preco': 19.90, 'estoque': 80},
        {'nome': 'Cama Pet Pequena', 'descricao': 'Cama confortável para pets pequenos', 'preco': 79.90, 'estoque': 25},
        {'nome': 'Comedouro Duplo', 'descricao': 'Comedouro duplo inox', 'preco': 45.90, 'estoque': 40},
        {'nome': 'Antipulgas', 'descricao': 'Antipulgas e carrapatos', 'preco': 52.90, 'estoque': 35},
        {'nome': 'Petiscos Naturais', 'descricao': 'Petiscos naturais para cães 200g', 'preco': 15.90, 'estoque': 90},
    ]

    produtos_ids = []
    print("Adicionando produtos...")
    for produto in produtos:
        produto_id = produto_service.criar(produto)
        produtos_ids.append(produto_id)
        print(f"  ✓ {produto['nome']}")

    return produtos_ids

def popular_clientes():
    """Adiciona clientes de exemplo"""
    cliente_service = ClienteService()

    clientes = [
        {'nome': 'João Silva', 'email': 'joao.silva@email.com', 'telefone': '(11) 98765-4321', 'endereco': 'Rua das Flores, 123'},
        {'nome': 'Maria Santos', 'email': 'maria.santos@email.com', 'telefone': '(11) 98765-4322', 'endereco': 'Av. Principal, 456'},
        {'nome': 'Pedro Oliveira', 'email': 'pedro.oliveira@email.com', 'telefone': '(11) 98765-4323', 'endereco': 'Rua do Comércio, 789'},
        {'nome': 'Ana Costa', 'email': 'ana.costa@email.com', 'telefone': '(11) 98765-4324', 'endereco': 'Rua Central, 321'},
        {'nome': 'Carlos Souza', 'email': 'carlos.souza@email.com', 'telefone': '(11) 98765-4325', 'endereco': 'Av. Brasil, 654'},
    ]

    clientes_ids = []
    print("\nAdicionando clientes...")
    for cliente in clientes:
        cliente_id = cliente_service.criar(cliente)
        clientes_ids.append(cliente_id)
        print(f"  ✓ {cliente['nome']}")

    return clientes_ids

def popular_vendas(produtos_ids, clientes_ids):
    """Adiciona vendas de exemplo dos últimos 30 dias"""
    venda_service = VendaService()
    produto_service = ProdutoService()
    cliente_service = ClienteService()

    # Buscar produtos e clientes
    produtos = [produto_service.buscar(pid) for pid in produtos_ids]
    clientes = [cliente_service.buscar(cid) for cid in clientes_ids]

    print("\nAdicionando vendas dos últimos 30 dias...")

    # Gerar vendas para os últimos 30 dias
    hoje = datetime.now()
    for i in range(30):
        # 2-5 vendas por dia
        num_vendas = random.randint(2, 5)
        data_venda = hoje - timedelta(days=i)

        for _ in range(num_vendas):
            cliente = random.choice(clientes)
            num_itens = random.randint(1, 4)

            itens = []
            valor_total = 0

            produtos_selecionados = random.sample(produtos, num_itens)
            for produto in produtos_selecionados:
                quantidade = random.randint(1, 3)
                preco = produto['preco']
                subtotal = preco * quantidade

                itens.append({
                    'produto_id': produto['_id'],
                    'produto_nome': produto['nome'],
                    'quantidade': quantidade,
                    'preco_unitario': preco,
                    'subtotal': subtotal
                })

                valor_total += subtotal

            venda = {
                'cliente_id': cliente['_id'],
                'cliente_nome': cliente['nome'],
                'itens': itens,
                'valor_total': valor_total,
                'data_venda': data_venda
            }

            # Inserir diretamente com data customizada
            venda_service.collection.insert_one(venda)

        print(f"  ✓ Dia {i+1}/30: {num_vendas} vendas")

    print("\n✓ Dados populados com sucesso!")

def main():
    print("=" * 50)
    print("POPULAR BANCO DE DADOS - PETSHOP")
    print("=" * 50)

    try:
        produtos_ids = popular_produtos()
        clientes_ids = popular_clientes()
        popular_vendas(produtos_ids, clientes_ids)

        print("\n" + "=" * 50)
        print("RESUMO:")
        print(f"  • {len(produtos_ids)} produtos cadastrados")
        print(f"  • {len(clientes_ids)} clientes cadastrados")
        print(f"  • Vendas dos últimos 30 dias geradas")
        print("=" * 50)

    except Exception as e:
        print(f"\n❌ Erro ao popular banco de dados: {e}")
        import traceback
        traceback.print_exc()

if __name__ == '__main__':
    main()
