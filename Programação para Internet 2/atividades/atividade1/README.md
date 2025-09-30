# API de Produtos - CRUD

Esta é uma API REST simples para gerenciamento de produtos, implementada com Node.js e Express.js. A API realiza operações CRUD (Create, Read, Update, Delete) em produtos com estrutura `{id, nome, preco}`.

## 📋 Rotas Implementadas

### 1. **POST /produtos**

Cria um novo produto.

**Corpo da requisição:**

```json
{
  "nome": "Nome do produto",
  "preco": 99.99
}
```

**Resposta de sucesso:**

- **Status Code:** `201 Created`
- **Corpo da resposta:**

```json
{
  "id": 1,
  "nome": "Nome do produto",
  "preco": 99.99
}
```

---

### 2. **GET /produtos**

Lista todos os produtos cadastrados.

**Resposta de sucesso:**

- **Status Code:** `200 OK`
- **Corpo da resposta:**

```json
[
  {
    "id": 1,
    "nome": "Produto 1",
    "preco": 99.99
  },
  {
    "id": 2,
    "nome": "Produto 2",
    "preco": 149.9
  }
]
```

---

### 3. **GET /produtos/:id**

Retorna um único produto pelo ID.

**Parâmetros da URL:**

- `id` (número): ID do produto a ser buscado

**Respostas:**

- **Status Code:** `200 OK` (produto encontrado)
- **Status Code:** `404 Not Found` (produto não encontrado)

**Corpo da resposta (sucesso):**

```json
{
  "id": 1,
  "nome": "Produto 1",
  "preco": 99.99
}
```

**Corpo da resposta (erro):**

```json
{
  "error": "Produto com o 1 não encontrado"
}
```

---

### 4. **PUT /produtos/:id**

Atualiza completamente um produto existente (substitui todos os campos).

**Parâmetros da URL:**

- `id` (número): ID do produto a ser atualizado

**Corpo da requisição:**

```json
{
  "nome": "Novo nome do produto",
  "preco": 199.99
}
```

**Respostas:**

- **Status Code:** `200 OK` (produto atualizado com sucesso)
- **Status Code:** `404 Not Found` (produto não encontrado)

**Corpo da resposta (sucesso):**

```json
{
  "id": 1,
  "nome": "Novo nome do produto",
  "preco": 199.99
}
```

**Corpo da resposta (erro):**

```json
{
  "error": "Produto com o 1 não encontrado"
}
```

---

### 5. **PATCH /produtos/:id**

Atualiza parcialmente um produto existente (atualiza apenas os campos enviados).

**Parâmetros da URL:**

- `id` (número): ID do produto a ser atualizado

**Corpo da requisição (exemplo - pode conter apenas `nome` ou apenas `preco`):**

```json
{
  "nome": "Novo nome do produto"
}
```

**Respostas:**

- **Status Code:** `200 OK` (produto atualizado com sucesso)
- **Status Code:** `404 Not Found` (produto não encontrado)

**Corpo da resposta (sucesso):**

```json
{
  "id": 1,
  "nome": "Novo nome do produto",
  "preco": 99.99
}
```

---

### 6. **DELETE /produtos/:id**

Remove um produto do sistema.

**Parâmetros da URL:**

- `id` (número): ID do produto a ser removido

**Respostas:**

- **Status Code:** `204 No Content` (produto removido com sucesso - sem corpo de resposta)

---

## 📊 Status Codes Utilizados

| Status Code      | Descrição              | Quando é usado                                                           |
| ---------------- | ---------------------- | ------------------------------------------------------------------------ |
| `200 OK`         | Sucesso                | GET /produtos, GET /produtos/:id, PUT /produtos/:id, PATCH /produtos/:id |
| `201 Created`    | Criado com sucesso     | POST /produtos                                                           |
| `204 No Content` | Removido com sucesso   | DELETE /produtos/:id                                                     |
| `404 Not Found`  | Recurso não encontrado | GET /produtos/:id, PUT, PATCH, DELETE quando produto não existe          |

## 🚀 Como rodar o projeto

### Pré-requisitos

- Node.js instalado na máquina
- npm (vem junto com o Node.js)

### Passos para execução

1. **Clone ou baixe o projeto**

   ```bash
   # Se estiver usando git
   git clone <url-do-repositorio>
   cd atividade1
   ```

2. **Instale as dependências**

   ```bash
   npm install
   ```

3. **Execute o servidor**

   ```bash
   node main.js
   ```

4. **Acesse a API**
   - O servidor estará rodando em: `http://localhost:3000`
   - Use um cliente REST como Postman para testar as rotas

## 💾 Armazenamento

⚠️ **Importante**: Os dados são armazenados em memória. Quando o servidor for reiniciado, todos os produtos cadastrados serão perdidos.

## 🛠️ Tecnologias utilizadas

- **Node.js**: Runtime JavaScript
- **Express.js**: Framework web para Node.js
- **JavaScript**: Linguagem de programação
