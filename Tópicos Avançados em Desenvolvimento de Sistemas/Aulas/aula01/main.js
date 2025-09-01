// Backend - Servidor

const express = require('express');
const http = require('http');
const { Server } = require('socket.io'); // Importa a biblioteca para cuidar do Websockets
const port = 3000; // Define a porta do servidor

const app = express();
const server = http.createServer(app);
const io = new Server(server, { cors: { origin: "*" } }); // Cria uma instância do servidor de Websockets

app.get('/', (req, res) => {
    res.sendFile(__dirname + '/index.html'); // Envia o arquivo HTML quando a raiz é acessada
});

// Identifica quando um usuário se conecta ao servidor
io.on('connection', (socket) => {
    console.log(`Usuário conectado: ${socket.id}`);

    // Identifica quando o usuário envia uma 'mensagem'
    socket.on('mensagem', (msg) => {
        console.log(`Mensagem recebida: ${msg}`);
        io.emit('mensagem', msg); // Emite a mensagem recebida para todos os usuários conectados
    });
});

server.listen(port, () => {
    console.log(`Servidor rodando na porta ${port}`);
})