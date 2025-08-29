// Atividade Prática #01

// Criar um CRUD para "produtos" com {id, nome, preço}

// Implementar as rotas:
// a. POST /produtos
// b. GET /produtos (todos)
// c. GET /produtos/:id (único)
// d. PUT /produtos/:id
// e. PATCH /produtos/:id
// f. DELETE /produtos/:id

// Testar as rotas no POSTMAN

// Garantir que os ids sejam numéricos e que os retornos tenham os status code adequados (201, 204, 404)

const express = require('express')
const app = express()
const port = 3000

app.use(express.json())

// SImular percistencia na memoria do servidor
let produtos = []
let idCounter = 1

// Criar a rota POST (para inserir)
app.post('/produtos', (req, res) => {
    const {nome, preco} = req.body
    const novoProduto = {id: idCounter++, nome, preco}
    produtos.push(novoProduto)
    res.status(201).json(novoProduto)
})

// Criar a rota para listar (GET)
app.get('/produtos', (req, res) => {
    res.json(produtos)
})

// Criar a rota de atualização/update (PUT)
app.put('/produtos/:id', (req, res) => {
    const id = parseInt(req.params.id)
    const {nome, preco} = req.body
    const produto = produtos.find(p => p.id === id)
    if (!produto) return res.status(404).json({error: `Produto com o ${id} não encontrado`})
    produto.nome = nome
    produto.preco = preco
    res.json(produto)
})

// Criar a rota para listar (GET)
app.get('/produtos', (req, res) => {
    res.json(produtos)
})

// Criar a rota de atualização/update (PUT)
app.put('/produtos/:id', (req, res) => {
    const id = parseInt(req.params.id)
    const {nome, preco} = req.body
    const produto = produtos.find(p => p.id === id)
    if (!produto) return res.status(404).json({error: `Produto com o ${id} não encontrado`})
    produto.nome = nome
    produto.preco = preco
    res.json(produto)
})

// Criar a rota de atualização/update (PATCH)
app.patch('/produtos/:id', (req, res) => {
    const id = parseInt(req.params.id)
    const {nome, preco} = req.body
    const produto = produtos.find(p => p.id === id)
    if (!produto) return res.status(404).json({error: `Produto com o ${id} não encontrado`})
    if (nome) produto.nome = nome
    if (preco) produto.preco = preco
    res.json(produto)
})

// Criar a rota de remoção (DELETE)
app.delete('/produtos/:id', (req, res) => {
    const id = parseInt(req.params.id)
    produtos = produtos.filter(p => p.id !== id)
    if (!produto) return res.status(204).json({error: `Produto com o ${id} não encontrado`})
})

// Subir o servidor
app.listen(port, () => {
    console.log(`Servidor rodando em http://localhost:${port}`)
})