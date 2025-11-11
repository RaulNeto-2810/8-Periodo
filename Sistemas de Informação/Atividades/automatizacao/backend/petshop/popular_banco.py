"""
Script para popular o banco de dados MongoDB com dados de exemplo
Execute: python popular_banco.py
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
    """Adiciona 100 produtos variados de petshop"""
    produto_service = ProdutoService()

    produtos = [
        # Rações para Cães (20 produtos)
        {'nome': 'Ração Premium Cães Adultos 15kg', 'descricao': 'Ração premium para cães adultos de todas as raças', 'preco': 189.90, 'estoque': 50},
        {'nome': 'Ração Super Premium Filhotes 10kg', 'descricao': 'Ração super premium para filhotes', 'preco': 215.90, 'estoque': 40},
        {'nome': 'Ração Cães Raças Pequenas 3kg', 'descricao': 'Ração específica para raças pequenas', 'preco': 89.90, 'estoque': 60},
        {'nome': 'Ração Cães Raças Grandes 20kg', 'descricao': 'Ração para cães de raças grandes', 'preco': 245.90, 'estoque': 30},
        {'nome': 'Ração Light Cães Obesos 12kg', 'descricao': 'Ração light para controle de peso', 'preco': 195.90, 'estoque': 35},
        {'nome': 'Ração Senior Cães Idosos 10kg', 'descricao': 'Ração para cães idosos acima de 7 anos', 'preco': 205.90, 'estoque': 25},
        {'nome': 'Ração Hipoalergênica Cães 8kg', 'descricao': 'Ração hipoalergênica para cães sensíveis', 'preco': 235.90, 'estoque': 20},
        {'nome': 'Ração Vegetariana Cães 5kg', 'descricao': 'Ração vegetariana balanceada', 'preco': 165.90, 'estoque': 15},
        {'nome': 'Ração Cardíaca Cães 7kg', 'descricao': 'Ração para cães com problemas cardíacos', 'preco': 225.90, 'estoque': 18},
        {'nome': 'Ração Renal Cães 6kg', 'descricao': 'Ração para cães com problemas renais', 'preco': 245.90, 'estoque': 12},
        {'nome': 'Ração Premium Plus Cães 15kg', 'descricao': 'Ração premium com probióticos', 'preco': 198.90, 'estoque': 45},
        {'nome': 'Ração Natural Cães 10kg', 'descricao': 'Ração natural sem conservantes', 'preco': 185.90, 'estoque': 50},
        {'nome': 'Ração Grain Free Cães 12kg', 'descricao': 'Ração sem grãos', 'preco': 265.90, 'estoque': 22},
        {'nome': 'Ração Atletas Cães 15kg', 'descricao': 'Ração para cães atletas e ativos', 'preco': 210.90, 'estoque': 28},
        {'nome': 'Ração Dermatológica 8kg', 'descricao': 'Ração para problemas de pele', 'preco': 235.90, 'estoque': 16},
        {'nome': 'Ração Gastro Cães 7kg', 'descricao': 'Ração para problemas gastrointestinais', 'preco': 228.90, 'estoque': 14},
        {'nome': 'Ração Castrados Cães 10kg', 'descricao': 'Ração para cães castrados', 'preco': 175.90, 'estoque': 40},
        {'nome': 'Ração Filhotes Mini 5kg', 'descricao': 'Ração para filhotes de raças pequenas', 'preco': 125.90, 'estoque': 35},
        {'nome': 'Ração Adultos Mini 3kg', 'descricao': 'Ração para adultos de raças mini', 'preco': 95.90, 'estoque': 55},
        {'nome': 'Ração Premium Mix 15kg', 'descricao': 'Ração premium sabores variados', 'preco': 192.90, 'estoque': 42},

        # Rações para Gatos (20 produtos)
        {'nome': 'Ração Premium Gatos Adultos 10kg', 'descricao': 'Ração premium para gatos adultos', 'preco': 149.90, 'estoque': 45},
        {'nome': 'Ração Filhotes Gatos 3kg', 'descricao': 'Ração para gatinhos filhotes', 'preco': 89.90, 'estoque': 50},
        {'nome': 'Ração Castrados Gatos 7kg', 'descricao': 'Ração para gatos castrados', 'preco': 135.90, 'estoque': 40},
        {'nome': 'Ração Senior Gatos 5kg', 'descricao': 'Ração para gatos idosos', 'preco': 125.90, 'estoque': 30},
        {'nome': 'Ração Urinary Gatos 6kg', 'descricao': 'Ração para saúde urinária', 'preco': 165.90, 'estoque': 25},
        {'nome': 'Ração Hairball Gatos 4kg', 'descricao': 'Ração para eliminação de bolas de pelo', 'preco': 115.90, 'estoque': 35},
        {'nome': 'Ração Indoor Gatos 7kg', 'descricao': 'Ração para gatos de apartamento', 'preco': 138.90, 'estoque': 38},
        {'nome': 'Ração Outdoor Gatos 8kg', 'descricao': 'Ração para gatos com acesso externo', 'preco': 142.90, 'estoque': 32},
        {'nome': 'Ração Hipoalergênica Gatos 5kg', 'descricao': 'Ração hipoalergênica', 'preco': 175.90, 'estoque': 20},
        {'nome': 'Ração Grain Free Gatos 6kg', 'descricao': 'Ração sem grãos para gatos', 'preco': 185.90, 'estoque': 18},
        {'nome': 'Ração Light Gatos 5kg', 'descricao': 'Ração para controle de peso', 'preco': 128.90, 'estoque': 28},
        {'nome': 'Ração Dental Gatos 4kg', 'descricao': 'Ração para saúde dental', 'preco': 118.90, 'estoque': 30},
        {'nome': 'Ração Renal Gatos 4kg', 'descricao': 'Ração para problemas renais', 'preco': 185.90, 'estoque': 15},
        {'nome': 'Ração Cardíaca Gatos 5kg', 'descricao': 'Ração para saúde cardíaca', 'preco': 175.90, 'estoque': 12},
        {'nome': 'Ração Persa Gatos 6kg', 'descricao': 'Ração específica para gatos persas', 'preco': 155.90, 'estoque': 22},
        {'nome': 'Ração Siamês Gatos 5kg', 'descricao': 'Ração para gatos siameses', 'preco': 145.90, 'estoque': 24},
        {'nome': 'Ração Natural Gatos 7kg', 'descricao': 'Ração natural sem conservantes', 'preco': 158.90, 'estoque': 35},
        {'nome': 'Ração Premium Plus Gatos 8kg', 'descricao': 'Ração super premium', 'preco': 168.90, 'estoque': 28},
        {'nome': 'Ração Sachê Mix Gatos 24un', 'descricao': 'Ração úmida sachê sabores variados', 'preco': 78.90, 'estoque': 60},
        {'nome': 'Ração Lata Premium 12un', 'descricao': 'Ração úmida em lata premium', 'preco': 95.90, 'estoque': 45},

        # Acessórios e Higiene (30 produtos)
        {'nome': 'Areia Sanitária Perfumada 4kg', 'descricao': 'Areia sanitária com perfume lavanda', 'preco': 25.90, 'estoque': 100},
        {'nome': 'Areia Sanitária Biodegradável 5kg', 'descricao': 'Areia ecológica biodegradável', 'preco': 32.90, 'estoque': 80},
        {'nome': 'Shampoo Neutro Pets 500ml', 'descricao': 'Shampoo neutro para cães e gatos', 'preco': 32.90, 'estoque': 75},
        {'nome': 'Shampoo Antipulgas 500ml', 'descricao': 'Shampoo com ação antipulgas', 'preco': 42.90, 'estoque': 60},
        {'nome': 'Condicionador Pet 500ml', 'descricao': 'Condicionador hidratante', 'preco': 35.90, 'estoque': 50},
        {'nome': 'Coleira Ajustável Pequena', 'descricao': 'Coleira ajustável nylon', 'preco': 29.90, 'estoque': 90},
        {'nome': 'Coleira Ajustável Média', 'descricao': 'Coleira ajustável tamanho médio', 'preco': 35.90, 'estoque': 85},
        {'nome': 'Coleira Ajustável Grande', 'descricao': 'Coleira ajustável para cães grandes', 'preco': 42.90, 'estoque': 70},
        {'nome': 'Guia Retrátil 5m', 'descricao': 'Guia retrátil automática', 'preco': 65.90, 'estoque': 45},
        {'nome': 'Peitoral Anatômico P', 'descricao': 'Peitoral confortável tamanho P', 'preco': 48.90, 'estoque': 55},
        {'nome': 'Peitoral Anatômico M', 'descricao': 'Peitoral confortável tamanho M', 'preco': 55.90, 'estoque': 50},
        {'nome': 'Peitoral Anatômico G', 'descricao': 'Peitoral confortável tamanho G', 'preco': 62.90, 'estoque': 40},
        {'nome': 'Caixa Transporte Pequena', 'descricao': 'Caixa de transporte para pets pequenos', 'preco': 89.90, 'estoque': 30},
        {'nome': 'Caixa Transporte Média', 'descricao': 'Caixa de transporte tamanho médio', 'preco': 125.90, 'estoque': 25},
        {'nome': 'Caixa Transporte Grande', 'descricao': 'Caixa de transporte para pets grandes', 'preco': 185.90, 'estoque': 15},
        {'nome': 'Cama Pet Pequena', 'descricao': 'Cama confortável para pets pequenos', 'preco': 79.90, 'estoque': 40},
        {'nome': 'Cama Pet Média', 'descricao': 'Cama confortável tamanho médio', 'preco': 125.90, 'estoque': 35},
        {'nome': 'Cama Pet Grande', 'descricao': 'Cama confortável para pets grandes', 'preco': 185.90, 'estoque': 25},
        {'nome': 'Casinha Plástica Média', 'descricao': 'Casinha plástica resistente', 'preco': 245.90, 'estoque': 20},
        {'nome': 'Casinha Plástica Grande', 'descricao': 'Casinha para cães grandes', 'preco': 325.90, 'estoque': 15},
        {'nome': 'Bebedouro Automático 2L', 'descricao': 'Bebedouro com reservatório', 'preco': 45.90, 'estoque': 50},
        {'nome': 'Bebedouro Fonte 3L', 'descricao': 'Bebedouro fonte com filtro', 'preco': 125.90, 'estoque': 30},
        {'nome': 'Comedouro Duplo Inox P', 'descricao': 'Comedouro duplo inox pequeno', 'preco': 42.90, 'estoque': 60},
        {'nome': 'Comedouro Duplo Inox M', 'descricao': 'Comedouro duplo inox médio', 'preco': 52.90, 'estoque': 55},
        {'nome': 'Comedouro Duplo Inox G', 'descricao': 'Comedouro duplo inox grande', 'preco': 65.90, 'estoque': 45},
        {'nome': 'Escova Tira Pelos', 'descricao': 'Escova removedora de pelos', 'preco': 38.90, 'estoque': 70},
        {'nome': 'Cortador de Unhas Pet', 'descricao': 'Cortador de unhas profissional', 'preco': 28.90, 'estoque': 65},
        {'nome': 'Tapete Higiênico 30un', 'descricao': 'Tapete higiênico absorvente', 'preco': 45.90, 'estoque': 80},
        {'nome': 'Graninha Sanitária 6kg', 'descricao': 'Graninha sanitária para cães', 'preco': 35.90, 'estoque': 55},
        {'nome': 'Lenços Umedecidos Pet 100un', 'descricao': 'Lenços umedecidos para higiene', 'preco': 18.90, 'estoque': 90},

        # Brinquedos e Petiscos (30 produtos)
        {'nome': 'Brinquedo Mordedor Corda', 'descricao': 'Brinquedo corda resistente', 'preco': 19.90, 'estoque': 100},
        {'nome': 'Brinquedo Bola Maciça', 'descricao': 'Bola maciça resistente', 'preco': 15.90, 'estoque': 95},
        {'nome': 'Brinquedo Kong Classic', 'descricao': 'Kong recheável resistente', 'preco': 65.90, 'estoque': 40},
        {'nome': 'Brinquedo Pelúcia Pato', 'descricao': 'Brinquedo pelúcia com apito', 'preco': 28.90, 'estoque': 75},
        {'nome': 'Brinquedo Frisbee', 'descricao': 'Frisbee para cães', 'preco': 22.90, 'estoque': 60},
        {'nome': 'Arranhador Torre Gatos', 'descricao': 'Arranhador torre com plataformas', 'preco': 185.90, 'estoque': 20},
        {'nome': 'Arranhador Horizontal', 'descricao': 'Arranhador horizontal sisal', 'preco': 52.90, 'estoque': 35},
        {'nome': 'Varinhas Gatos 3un', 'descricao': 'Kit varinhas com penas', 'preco': 25.90, 'estoque': 65},
        {'nome': 'Brinquedo Ratinho Gatos 5un', 'descricao': 'Kit ratinhos de pelúcia', 'preco': 18.90, 'estoque': 80},
        {'nome': 'Bola Com Guizo Gatos', 'descricao': 'Bola com guizo interno', 'preco': 12.90, 'estoque': 90},
        {'nome': 'Petiscos Naturais Cães 200g', 'descricao': 'Petiscos 100% naturais', 'preco': 18.90, 'estoque': 100},
        {'nome': 'Osso Dental Cães 3un', 'descricao': 'Osso para higiene dental', 'preco': 22.90, 'estoque': 85},
        {'nome': 'Bifinho Carne 500g', 'descricao': 'Bifinho sabor carne', 'preco': 28.90, 'estoque': 90},
        {'nome': 'Bifinho Frango 500g', 'descricao': 'Bifinho sabor frango', 'preco': 28.90, 'estoque': 88},
        {'nome': 'Palito Dental 7un', 'descricao': 'Palito dental para cães', 'preco': 15.90, 'estoque': 95},
        {'nome': 'Snacks Gatos Salmão 40g', 'descricao': 'Snacks sabor salmão', 'preco': 12.90, 'estoque': 100},
        {'nome': 'Snacks Gatos Frango 40g', 'descricao': 'Snacks sabor frango', 'preco': 12.90, 'estoque': 98},
        {'nome': 'Petiscos Treino 150g', 'descricao': 'Petiscos para treinamento', 'preco': 16.90, 'estoque': 75},
        {'nome': 'Osso Natural 3un', 'descricao': 'Osso bovino natural', 'preco': 25.90, 'estoque': 60},
        {'nome': 'Orelha de Porco 5un', 'descricao': 'Orelha de porco desidratada', 'preco': 32.90, 'estoque': 55},
        {'nome': 'Antipulgas Cães 3 Pipetas', 'descricao': 'Antipulgas e carrapatos líquido', 'preco': 52.90, 'estoque': 70},
        {'nome': 'Antipulgas Gatos 3 Pipetas', 'descricao': 'Antipulgas para gatos', 'preco': 48.90, 'estoque': 65},
        {'nome': 'Vermífugo Cães 4 Comprimidos', 'descricao': 'Vermífugo sabor carne', 'preco': 35.90, 'estoque': 60},
        {'nome': 'Vermífugo Gatos 2 Comprimidos', 'descricao': 'Vermífugo para gatos', 'preco': 28.90, 'estoque': 55},
        {'nome': 'Antipulgas Coleira Cães', 'descricao': 'Coleira antipulgas 8 meses', 'preco': 58.90, 'estoque': 45},
        {'nome': 'Antipulgas Coleira Gatos', 'descricao': 'Coleira antipulgas para gatos', 'preco': 52.90, 'estoque': 42},
        {'nome': 'Suplemento Vitamínico 120ml', 'descricao': 'Complexo vitamínico pet', 'preco': 42.90, 'estoque': 50},
        {'nome': 'Ômega 3 Pet 60 Cápsulas', 'descricao': 'Suplemento ômega 3', 'preco': 55.90, 'estoque': 40},
        {'nome': 'Probiótico Pet 30 Sachês', 'descricao': 'Probiótico para pets', 'preco': 68.90, 'estoque': 35},
        {'nome': 'Suplemento Articular 60 Comp', 'descricao': 'Condroitina e glucosamina', 'preco': 125.90, 'estoque': 30},
    ]

    produtos_ids = []
    print("=" * 60)
    print("POPULANDO PRODUTOS")
    print("=" * 60)

    for i, produto in enumerate(produtos, 1):
        try:
            produto_id = produto_service.criar(produto)
            produtos_ids.append(produto_id)
            print(f"{i:3d}. [OK] {produto['nome']}")
        except Exception as e:
            print(f"{i:3d}. [ERRO] Erro ao criar {produto['nome']}: {str(e)}")

    return produtos_ids

def popular_clientes():
    """Adiciona 10 clientes de exemplo"""
    cliente_service = ClienteService()

    clientes = [
        {'nome': 'João Silva', 'email': 'joao.silva@email.com', 'telefone': '(11) 98765-4321', 'endereco': 'Rua das Flores, 123 - Centro'},
        {'nome': 'Maria Santos', 'email': 'maria.santos@email.com', 'telefone': '(11) 98765-4322', 'endereco': 'Av. Principal, 456 - Jardim das Acácias'},
        {'nome': 'Pedro Oliveira', 'email': 'pedro.oliveira@email.com', 'telefone': '(11) 98765-4323', 'endereco': 'Rua do Comércio, 789 - Vila Nova'},
        {'nome': 'Ana Costa', 'email': 'ana.costa@email.com', 'telefone': '(11) 98765-4324', 'endereco': 'Rua Central, 321 - Bairro Alto'},
        {'nome': 'Carlos Souza', 'email': 'carlos.souza@email.com', 'telefone': '(11) 98765-4325', 'endereco': 'Av. Brasil, 654 - Centro'},
        {'nome': 'Juliana Mendes', 'email': 'juliana.mendes@email.com', 'telefone': '(11) 98765-4326', 'endereco': 'Rua das Palmeiras, 987 - Jardim Europa'},
        {'nome': 'Roberto Alves', 'email': 'roberto.alves@email.com', 'telefone': '(11) 98765-4327', 'endereco': 'Av. Paulista, 1500 - Bela Vista'},
        {'nome': 'Fernanda Lima', 'email': 'fernanda.lima@email.com', 'telefone': '(11) 98765-4328', 'endereco': 'Rua das Orquídeas, 258 - Vila Mariana'},
        {'nome': 'Ricardo Pereira', 'email': 'ricardo.pereira@email.com', 'telefone': '(11) 98765-4329', 'endereco': 'Av. Independência, 741 - Centro'},
        {'nome': 'Patricia Rodrigues', 'email': 'patricia.rodrigues@email.com', 'telefone': '(11) 98765-4330', 'endereco': 'Rua dos Jasmins, 852 - Jardim Primavera'},
    ]

    clientes_ids = []
    print("\n" + "=" * 60)
    print("POPULANDO CLIENTES")
    print("=" * 60)

    for i, cliente in enumerate(clientes, 1):
        try:
            cliente_id = cliente_service.criar(cliente)
            clientes_ids.append(cliente_id)
            print(f"{i:2d}. [OK] {cliente['nome']} - {cliente['email']}")
        except Exception as e:
            print(f"{i:2d}. [ERRO] Erro ao criar {cliente['nome']}: {str(e)}")

    return clientes_ids

def main():
    print("\n")
    print("+" + "=" * 58 + "+")
    print("|" + " " * 10 + "POPULAR BANCO DE DADOS - PETSHOP" + " " * 16 + "|")
    print("+" + "=" * 58 + "+")
    print()

    try:
        # Popular produtos
        produtos_ids = popular_produtos()

        # Popular clientes
        clientes_ids = popular_clientes()

        # Resumo
        print("\n" + "=" * 60)
        print("RESUMO FINAL")
        print("=" * 60)
        print(f"  [OK] {len(produtos_ids)} produtos cadastrados")
        print(f"  [OK] {len(clientes_ids)} clientes cadastrados")
        print("=" * 60)
        print("\n[SUCESSO] Banco de dados populado com sucesso!")
        print()

    except Exception as e:
        print(f"\n[ERRO] Erro ao popular banco de dados: {e}")
        import traceback
        traceback.print_exc()

if __name__ == '__main__':
    main()
