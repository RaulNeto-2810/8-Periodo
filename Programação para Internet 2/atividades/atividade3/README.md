# 📚 CRUD de Alunos

Uma aplicação web simples e moderna para gerenciamento de alunos.

## 🚀 Funcionalidades Implementadas

### ✨ Operações CRUD Completas

- **CREATE (Criar)**: Cadastro de novos alunos com validação de dados
- **READ (Ler)**: Listagem de todos os alunos cadastrados
- **UPDATE (Atualizar)**: Edição de informações de alunos existentes
- **DELETE (Excluir)**: Remoção de alunos com confirmação

### 📋 Campos de Dados

- **Nome**: Campo de texto obrigatório
- **Idade**: Campo numérico (1-120 anos)
- **Curso**: Campo de texto obrigatório

### 🎨 Interface e Experiência do Usuário

- Design moderno e responsivo
- Formulário intuitivo com validação
- Modo de edição destacado visualmente
- Confirmação antes de excluir registros
- Estados vazios tratados adequadamente
- Tratamento de erros com feedback ao usuário
- Foco automático no campo nome durante edição

### 🔧 Funcionalidades Técnicas

- Comunicação com API REST em `http://localhost:3000/alunos`
- Requisições HTTP assíncronas (GET, POST, PUT, DELETE)
- Manipulação dinâmica do DOM
- Estados de loading e error handling
- Interface reativa sem recarregamento de página

## 🎯 Explicação da Arquitetura

### Frontend

O projeto utiliza uma arquitetura frontend simples e eficiente:

- **HTML5 Semântico**: Estrutura bem definida com formulários e listas
- **CSS3 Moderno**: Estilização com Flexbox, Grid e design responsivo
- **JavaScript Vanilla**: Lógica de interação sem dependências externas

### Comunicação com Backend

A aplicação se comunica com uma API REST através de:

- **Fetch API**: Para requisições HTTP modernas
- **JSON**: Formato de troca de dados
- **Async/Await**: Para programação assíncrona limpa

### Estrutura de Arquivos

```
crud_alunos-PI2-2025/
├── index.html      # Estrutura HTML da aplicação
├── script.js       # Lógica JavaScript e comunicação com API
├── style.css       # Estilos e design responsivo
└── README.md       # Documentação do projeto
```

## 🛠️ Como Rodar o Projeto

### Pré-requisitos

- Visual Studio Code
- Extensão **Live Server** instalada no VS Code
- Servidor backend rodando em `http://localhost:3000` (não incluído neste repositório)

### Instruções Passo a Passo

#### 1. Preparar o Ambiente

```bash
# Clone ou baixe o projeto para seu computador
# Abra a pasta do projeto no VS Code
```

#### 2. Instalar a Extensão Live Server

1. Abra o VS Code
2. Vá para a aba de Extensões (Ctrl+Shift+X)
3. Pesquise por "Live Server"
4. Instale a extensão do **Ritwick Dey**

#### 3. Configurar o Backend (Necessário)

⚠️ **Importante**: Este projeto frontend precisa de um servidor backend rodando em `http://localhost:3000/alunos`

O backend deve fornecer os seguintes endpoints:

- `GET /alunos` - Listar todos os alunos
- `POST /alunos` - Criar novo aluno
- `PUT /alunos/:id` - Atualizar aluno existente
- `DELETE /alunos/:id` - Excluir aluno

#### 4. Iniciar o Servidor de Desenvolvimento

1. Abra o arquivo `index.html` no VS Code
2. Clique com o botão direito no arquivo
3. Selecione **"Open with Live Server"**
4. Ou use o atalho: **Alt+L Alt+O**

#### 5. Acessar a Aplicação

- O navegador abrirá automaticamente
- URL padrão: `http://127.0.0.1:5500` ou `http://localhost:5500`
- A aplicação estará pronta para uso!

## 📱 Uso da Aplicação

### Adicionar Aluno

1. Preencha os campos: Nome, Idade e Curso
2. Clique em "Adicionar"
3. O aluno aparecerá na lista automaticamente

### Editar Aluno

1. Clique no botão "Editar" ao lado do aluno desejado
2. Os dados serão carregados no formulário
3. Modifique os campos necessários
4. Clique em "Atualizar" ou "Cancelar"

### Excluir Aluno

1. Clique no botão "Excluir" ao lado do aluno
2. Confirme a exclusão no diálogo que aparecer
3. O aluno será removido da lista
