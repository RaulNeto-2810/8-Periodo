const express = require('express')
const app = express()
const port = 3000

// Middleware
app.use(express.json())

// SImular percistencia na memoria do servidor
let usuarios = []
let idCounter = 1

// Criar a rota POST (para inserir)
app.post('/usuarios', (req, res) => {
    const {nome, idade} = req.body 
    const novoUsuario = {id: idCounter++, nome, idade}
    usuarios.push(novoUsuario)
    res.status(201).json(novoUsuario)
})

// Criar a rota para listar (GET)
app.get('/usuarios', (req, res) => {
    res.json(usuarios)
})

// Criar a rota de atualização/update (PUT)
app.put('/usuarios/:id', (req, res) => {
    const id = parseInt(req.params.id)
    const {nome, idade} = req.body
    const usuario = usuarios.find(u => u.id === id)
    if (!usuario) return res.status(404).json({error: `Usuário com o ${id} não encontrado`})
    usuario.nome = nome
    usuario.idade = idade
    res.json(usuario)
})

// Criar a rota de atualização/update (PATCH)
app.patch('/usuarios/:id', (req, res) => {
    const id = parseInt(req.params.id)
    const {nome, idade} = req.body
    const usuario = usuarios.find(u => u.id === id)
    if (!usuario) return res.status(404).json({error: `Usuário com o ${id} não encontrado`})
    if (nome) usuario.nome = nome
    if (idade) usuario.idade = idade
    res.json(usuario)
})

// Criar a rota de remoção (DELETE)
app.delete('/usuarios/:id', (req, res) => {
    const id = parseInt(req.params.id)
    usuarios = usuarios.filter(u => u.id !== id)
    res.status(204).send()
})

// Subir o servidor
app.listen(port, () => {
    console.log(`Servidor rodando em http://localhost:${port}`)
})


  git config --global user.email "you@example.com"
  git config --global user.name "Your Name"