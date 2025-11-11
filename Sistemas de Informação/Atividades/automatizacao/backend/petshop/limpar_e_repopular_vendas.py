import os
import sys
import django

# Configurar Django
sys.path.append(os.path.dirname(os.path.abspath(__file__)))
os.environ.setdefault('DJANGO_SETTINGS_MODULE', 'petshop.settings')
django.setup()

from vendas.mongodb import MongoDB

def limpar_vendas():
    """Remove todas as vendas do banco de dados"""
    print("\n" + "="*60)
    print("LIMPANDO VENDAS EXISTENTES")
    print("="*60 + "\n")

    mongodb = MongoDB()
    db = mongodb.db

    resultado = db.vendas.delete_many({})
    print(f"[OK] {resultado.deleted_count} vendas removidas\n")

if __name__ == '__main__':
    limpar_vendas()
    print("Agora execute: python popular_vendas.py")
