# Dashboard de Vendas PetShop

Sistema completo de gerenciamento de vendas com dashboard automatizado para PetShop, desenvolvido com Django (backend) e React (frontend), utilizando MongoDB para armazenamento de dados.

## Funcionalidades

### Tela de Cadastro
- Cadastro de Produtos (nome, descrição, preço, estoque)
- Cadastro de Clientes (nome, email, telefone, endereço)
- Registro de Vendas com múltiplos itens

### Dashboard Automatizado
- Estatísticas semanais (total de vendas e faturamento)
- Gráfico de faturamento por período (7, 15, 30, 60 ou 90 dias)
- Gráfico de vendas diárias
- Gráfico de produtos mais vendidos (pizza/donut)
- Tabela dos top 10 produtos mais vendidos
- Atualização automática dos dados

## Tecnologias Utilizadas

### Backend
- Python 3.13
- Django 5.2.7
- Django REST Framework 3.16.1
- Django CORS Headers 4.9.0
- PyMongo 3.11.4
- Python Decouple 3.8

### Frontend
- React 19.1.1
- React Router DOM 7.9.5
- Axios 1.13.1
- Chart.js 4.5.1
- React-ChartJS-2 5.3.1
- Vite (Rolldown)

### Banco de Dados
- MongoDB Atlas

### Design
- CSS3 com Grid e Flexbox
- Design totalmente responsivo (mobile, tablet e desktop)
- Gradientes e animações CSS

## Instalação

### 1. Backend (Django)

```bash
# Navegar para a pasta do backend
cd backend

# Criar ambiente virtual
python -m venv venv

# Ativar ambiente virtual
# Windows:
venv\Scripts\activate
# Linux/Mac:
source venv/bin/activate

# Instalar dependências
pip install django djangorestframework django-cors-headers pymongo python-decouple setuptools

# Navegar para a pasta do projeto
cd petshop

# Executar migrações
python manage.py migrate

# Criar superusuário (opcional)
python manage.py createsuperuser

# Executar servidor
python manage.py runserver
```

O backend estará disponível em: `http://localhost:8000`

### 2. Frontend (React)

```bash
# Navegar para a pasta do frontend
cd frontend/petshop

# Instalar dependências
npm install

# Executar em modo desenvolvimento
npm run dev
```

O frontend estará disponível em: `http://localhost:5173`

## Configuração do MongoDB

O arquivo `.env` na pasta `backend` já está configurado com as credenciais do MongoDB Atlas:

```env
MONGODB_URI=mongodb+srv://raultorres_db_user:***@cluster0.ys0nzsd.mongodb.net/?appName=Cluster0
MONGODB_NAME=petshop_db
```

## Estrutura do Projeto

```
automatizacao/
├── backend/
│   ├── petshop/
│   │   ├── petshop/          # Configurações do projeto
│   │   │   ├── settings.py
│   │   │   ├── urls.py
│   │   │   └── ...
│   │   ├── vendas/           # App de vendas
│   │   │   ├── mongodb.py    # Serviços MongoDB
│   │   │   ├── views.py      # API Views
│   │   │   ├── urls.py       # URLs da API
│   │   │   └── ...
│   │   └── manage.py
│   ├── .env                  # Variáveis de ambiente
│   └── venv/                 # Ambiente virtual
├── frontend/
│   └── petshop/
│       ├── src/
│       │   ├── pages/
│       │   │   ├── CadastroVendas.jsx
│       │   │   ├── CadastroVendas.css
│       │   │   ├── Dashboard.jsx
│       │   │   └── Dashboard.css
│       │   ├── services/
│       │   │   └── api.js
│       │   ├── App.jsx
│       │   ├── App.css
│       │   └── main.jsx
│       ├── package.json
│       └── ...
└── README.md
```

## API Endpoints

### Produtos
- `GET /api/produtos/` - Listar todos os produtos
- `POST /api/produtos/` - Criar novo produto
- `GET /api/produtos/{id}/` - Buscar produto por ID
- `PUT /api/produtos/{id}/` - Atualizar produto
- `DELETE /api/produtos/{id}/` - Deletar produto

### Clientes
- `GET /api/clientes/` - Listar todos os clientes
- `POST /api/clientes/` - Criar novo cliente
- `GET /api/clientes/{id}/` - Buscar cliente por ID
- `PUT /api/clientes/{id}/` - Atualizar cliente
- `DELETE /api/clientes/{id}/` - Deletar cliente

### Vendas
- `GET /api/vendas/` - Listar todas as vendas
- `POST /api/vendas/` - Criar nova venda
- `GET /api/vendas/{id}/` - Buscar venda por ID

### Estatísticas
- `GET /api/estatisticas/semanais/` - Estatísticas dos últimos 7 dias
- `GET /api/estatisticas/produtos-mais-vendidos/?limite=10` - Top produtos
- `GET /api/estatisticas/faturamento/?dias=30` - Faturamento por período

## Uso do Sistema

### Cadastro de Vendas

1. **Cadastrar Produtos**: Acesse a aba "Cadastrar Produto" e preencha as informações
2. **Cadastrar Clientes**: Acesse a aba "Cadastrar Cliente" e preencha os dados
3. **Registrar Venda**:
   - Selecione um cliente
   - Adicione produtos com quantidades
   - Finalize a venda

### Dashboard

- Visualize estatísticas em tempo real
- Selecione diferentes períodos de análise
- Veja gráficos interativos de faturamento, vendas e produtos
- Consulte a tabela de produtos mais vendidos

## Automação

O dashboard coleta automaticamente os dados do MongoDB e gera:
- Gráficos de linha para faturamento
- Gráficos de barra para vendas diárias
- Gráficos de pizza para distribuição de produtos vendidos
- Estatísticas agregadas em tempo real

Os dados são atualizados automaticamente sempre que a página é recarregada ou quando o período de análise é alterado.

## Observações

- Certifique-se de que o backend está rodando antes de iniciar o frontend
- As portas padrão são 8000 (backend) e 5173 (frontend)
- O CORS está configurado para aceitar requisições dessas portas
- O arquivo `.gitignore` está configurado para não versionar arquivos sensíveis

## Autor

Sistema desenvolvido para o PetShop como solução de automação de análise de vendas.
