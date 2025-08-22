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

app.listen(port, () => {
    console.log(`Server is running on http://localhost:${port}`)
})
