const express = require('express')
const app = express()

const port = 3000

app.get('/', (req, res) => {
    res.json({ message: 'Hello World' })
})

// Rota para receber um parâmetro na URL. Exemplo: /hello/João
app.get('/hello/:nome', (req, res) => {
    const nome = req.params.nome
    res.json({message: `Hello ${nome}`})
})

// Rota com parâmetros na query string. Exemplo: /hello?nome=João
app.get('/pesquisa', (req, res) => {
    const nome = req.query.nome
    const sobrenome = req.query.sobrenome
    const message = `Pesquisa realizada para ${nome} ${sobrenome ? sobrenome : ''}`
    res.json({ message: `Hello ${message}` })
    // Exemplo de rota: http://localhost:3000/pesquisa?nome=João&sobrenome=Silva
})

app.listen(port, () => {
    console.log(`Server running at http://localhost:${port}/`)
})
