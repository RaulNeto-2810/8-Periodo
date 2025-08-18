const express = require('express')
const http = require('http')
const { Server } = require('socket.io')

const app = express()
const server = http.createServer(app)
const io = new Server(server)

// Criar um Middleware para arquivos estaticos
app.use(express.static('public'))

// Socket.io
io.on('connection', (socket) => {
    console.log(`Novo cliente conectado: ${socket.id}`)

    //Entrar na sala
    socket.on('entrarSala', (nomeSala) => {
        socket.join(nomeSala)
        console.log(`Cliente ${socket.id} entrou na sala: ${nomeSala}`)

        // Notificar os outros clientes na sala
        socket.to(nomeSala).emit('mensagem', `O cliente ${socket.id} entrou na sala ${nomeSala}`)
    })

    // Receber mensagens da sala
    socket.on('mensagemSala', ({ sala, msg }) => {
        io.to(sala).emit('mensagem', `Mensagem de ${socket.id}: ${msg}`)
    })
    
    //Desconexão
    socket.on('disconnect', () => {
        console.log(`Cliente desconectado: ${socket.id}`)
    })

})

//Subir o servidor
server.listen(3000, () => {
    console.log('Servidor rodando na porta 3000')
})