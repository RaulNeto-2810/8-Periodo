from pymongo import MongoClient
from django.conf import settings
from datetime import datetime
from bson import ObjectId

class MongoDB:
    _instance = None
    _initialized = False

    def __new__(cls):
        if cls._instance is None:
            cls._instance = super(MongoDB, cls).__new__(cls)
        return cls._instance

    def __init__(self):
        if not MongoDB._initialized:
            self.client = MongoClient(settings.MONGODB_URI)
            self.db = self.client[settings.MONGODB_NAME]
            MongoDB._initialized = True

    def get_collection(self, collection_name):
        return self.db[collection_name]


class ProdutoService:
    def __init__(self):
        self.collection = MongoDB().get_collection('produtos')

    def criar(self, dados):
        dados['criado_em'] = datetime.now()
        dados['atualizado_em'] = datetime.now()
        result = self.collection.insert_one(dados)
        return str(result.inserted_id)

    def listar(self):
        produtos = list(self.collection.find())
        for p in produtos:
            p['_id'] = str(p['_id'])
        return produtos

    def buscar(self, produto_id):
        produto = self.collection.find_one({'_id': ObjectId(produto_id)})
        if produto:
            produto['_id'] = str(produto['_id'])
        return produto

    def atualizar(self, produto_id, dados):
        dados['atualizado_em'] = datetime.now()
        result = self.collection.update_one(
            {'_id': ObjectId(produto_id)},
            {'$set': dados}
        )
        return result.modified_count > 0

    def deletar(self, produto_id):
        result = self.collection.delete_one({'_id': ObjectId(produto_id)})
        return result.deleted_count > 0


class VendaService:
    def __init__(self):
        self.collection = MongoDB().get_collection('vendas')

    def criar(self, dados):
        # Se a data foi fornecida como string ISO, converte para datetime
        if 'data' in dados:
            if isinstance(dados['data'], str):
                from dateutil import parser
                dados['data_venda'] = parser.parse(dados['data'])
                del dados['data']
            else:
                dados['data_venda'] = dados['data']
                del dados['data']
        # Se não foi fornecida, usa a data atual
        elif 'data_venda' not in dados:
            dados['data_venda'] = datetime.now()

        # Garantir que valor_total existe
        if 'total' in dados and 'valor_total' not in dados:
            dados['valor_total'] = dados['total']

        result = self.collection.insert_one(dados)
        return str(result.inserted_id)

    def listar(self, filtros=None):
        query = filtros if filtros else {}
        vendas = list(self.collection.find(query).sort('data_venda', -1))
        for v in vendas:
            v['_id'] = str(v['_id'])
            if 'data_venda' in v and isinstance(v['data_venda'], datetime):
                v['data_venda'] = v['data_venda'].isoformat()
        return vendas

    def buscar(self, venda_id):
        venda = self.collection.find_one({'_id': ObjectId(venda_id)})
        if venda:
            venda['_id'] = str(venda['_id'])
            if 'data_venda' in venda and isinstance(venda['data_venda'], datetime):
                venda['data_venda'] = venda['data_venda'].isoformat()
        return venda

    def estatisticas_semanais(self):
        from datetime import timedelta
        hoje = datetime.now()
        semana_atras = hoje - timedelta(days=7)

        vendas = list(self.collection.find({
            'data_venda': {'$gte': semana_atras}
        }))

        total_vendas = len(vendas)
        faturamento = sum(v.get('valor_total', 0) for v in vendas)

        return {
            'total_vendas': total_vendas,
            'faturamento': faturamento,
            'periodo': 'ultimos_7_dias'
        }

    def produtos_mais_vendidos(self, limite=10):
        pipeline = [
            {'$unwind': '$itens'},
            {
                '$group': {
                    '_id': '$itens.produto_id',
                    'produto_nome': {'$first': '$itens.produto_nome'},
                    'quantidade_total': {'$sum': '$itens.quantidade'},
                    'valor_total': {'$sum': '$itens.subtotal'}
                }
            },
            {'$sort': {'quantidade_total': -1}},
            {'$limit': limite}
        ]

        resultado = list(self.collection.aggregate(pipeline))
        for r in resultado:
            r['produto_id'] = str(r['_id'])
            del r['_id']

        return resultado

    def faturamento_por_periodo(self, dias=30):
        from datetime import timedelta
        hoje = datetime.now()
        data_inicio = hoje - timedelta(days=dias)

        pipeline = [
            {
                '$match': {
                    'data_venda': {'$gte': data_inicio}
                }
            },
            {
                '$group': {
                    '_id': {
                        '$dateToString': {
                            'format': '%Y-%m-%d',
                            'date': '$data_venda'
                        }
                    },
                    'faturamento': {'$sum': '$valor_total'},
                    'quantidade_vendas': {'$sum': 1}
                }
            },
            {'$sort': {'_id': 1}}
        ]

        resultado = list(self.collection.aggregate(pipeline))
        return [
            {
                'data': r['_id'],
                'faturamento': r['faturamento'],
                'quantidade_vendas': r['quantidade_vendas']
            }
            for r in resultado
        ]


class ClienteService:
    def __init__(self):
        self.collection = MongoDB().get_collection('clientes')

    def criar(self, dados):
        dados['criado_em'] = datetime.now()
        result = self.collection.insert_one(dados)
        return str(result.inserted_id)

    def listar(self):
        clientes = list(self.collection.find())
        for c in clientes:
            c['_id'] = str(c['_id'])
        return clientes

    def buscar(self, cliente_id):
        cliente = self.collection.find_one({'_id': ObjectId(cliente_id)})
        if cliente:
            cliente['_id'] = str(cliente['_id'])
        return cliente

    def atualizar(self, cliente_id, dados):
        result = self.collection.update_one(
            {'_id': ObjectId(cliente_id)},
            {'$set': dados}
        )
        return result.modified_count > 0

    def deletar(self, cliente_id):
        result = self.collection.delete_one({'_id': ObjectId(cliente_id)})
        return result.deleted_count > 0
# reload
