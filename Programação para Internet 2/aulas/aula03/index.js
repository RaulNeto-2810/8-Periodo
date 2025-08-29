const express = require('express')
const mongoose = require('mongoose')
const dotenv = require('dotenv')
const connectDB = require('./db')
const alunosRouter = require('./routes/alunos.routes')

const app = express()

const port = 3000

app.use(express.json())

dotenv.config()

connectDB() //Fazendo a conexão com o MongoDB

app.get('/', (req, res) => {
    res.send('Hello World!')
})

//Rotas
app.use('/alunos', alunosRouter)

//Handler de erros
app.use((err, req, res, next) => {
    console.error(err)
    //CastError
    if (err.name === 'CastError'){
        return res.status(400).json({ erro: 'ID inválido' })
    }

    // Erro de Validação
    if (err.name === 'ValidationError'){
        return res.status(400).json({ erro: "Validação falhou", detalhes: err.errors })
    }

    res.status(500).json({ erro: "Erro interno do servidor" })
})

app.listen(port, () => {
    console.log(`Server is running on http://localhost:${port}`)
})
