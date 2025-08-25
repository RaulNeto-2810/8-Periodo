const { Socket } = require('dgram');
const express = require('express');
const http = require('http');
const { Server } = require('socket.io');

const app = express();
const server = http.createServer(app);
const io = new Server(server);

app.use(express.static("public"));

//Armazena os jogadores conectados
let players = {};

//Iniciar o socket
io.on('connection', (socket) => {
    console.log(`Novo jogador conectado: ${socket.id}`);

    //Criar o jogador na posicao inicial
    players[socket.id] = {
        x: 50,
        y: 50,
        color: getRandomColor()
    }

    //Enviar para o novo usuario o estado atual do jogo
    socket.emit('currentPlayers', players);

    //Notificar os outros jogadores sobre o novo jogador
    socket.broadcast.emit('newPlayer', {id: socket.id, ...players[socket.id]});

    // Movimento do jogador
    socket.on('move', (direction) => {
        const player = players[socket.id];
        if(!player) return;

        const speed = 5;
        if(direction === 'left') player.x -= speed;
        if(direction === 'right') player.x += speed;
        if(direction === 'up') player.y -= speed;
        if(direction === 'down') player.y += speed;

        io.emit('playerMoved', {id: socket.id,  x: player.x, y: player.y});
    })

    //Desconexão
    socket.on('disconnect', () => {
        console.log(`Jogador desconectado: ${socket.id}`);
        delete players[socket.id];
        io.emit('playerDisconnected', socket.id);
    });
});

function getRandomColor(){
    const letters = '0123456789ABCDEF';
    let color = '#';
    for (let i = 0; i < 6; i++) {
        color += letters[Math.floor(Math.random() * 16)];
    }
    return color;
}

server.listen(3000, () => {
    console.log("Server is running on http://localhost:3000");
})