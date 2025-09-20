// Importando módulos necessários
const express = require("express");
const http = require("http");
const { Server } = require("socket.io");
const fs = require("fs");

// Criando app Express e servidor HTTP
const app = express();
const server = http.createServer(app);
const io = new Server(server);

// Lendo o arquivo escudos.json (array de objetos com { url })
const escudos = JSON.parse(fs.readFileSync("data/escudos.json"));

// Servindo a pasta "public" (onde ficam os arquivos do cliente)
app.use(express.static("public"));

// Ranking dos jogadores e escudos individuais
const ranking = {};
const jogadorEscudos = {}; // Armazena o escudo atual de cada jogador
let escudoGlobal = null; // Timer global de 30 segundos

// Timer global para resetar escudos não respondidos
let timerGlobal = null;

// Quando um cliente se conecta via socket
io.on("connection", (socket) => {
    console.log("Novo cliente conectado!");

    // Enviar escudo inicial para este jogador
    const escudoInicial = escudos[Math.floor(Math.random() * escudos.length)];
    jogadorEscudos[socket.id] = escudoInicial;
    socket.emit("escudo", escudoInicial);

    // Inicializa pontuação do jogador
    ranking[socket.id] = { pontos: 0, nome: null };
    io.emit("ranking", getRankingArray());

    // Recebe nome do usuário
    socket.on("set-username", (username) => {
        ranking[socket.id].nome = username;
        io.emit("ranking", getRankingArray());
    });

    // Recebe resposta do jogador
    socket.on("resposta", (resposta) => {
        const escudoJogador = jogadorEscudos[socket.id];
        if (!escudoJogador) return;

        if (isRespostaCorreta(resposta, escudoJogador)) {
            ranking[socket.id].pontos += 1;
            io.emit("ranking", getRankingArray());

            // Enviar novo escudo apenas para este jogador
            const novoEscudo = escudos[Math.floor(Math.random() * escudos.length)];
            jogadorEscudos[socket.id] = novoEscudo;
            socket.emit("novo-escudo", novoEscudo);
        }
    });

    // Remove jogador do ranking ao desconectar
    socket.on("disconnect", () => {
        delete ranking[socket.id];
        delete jogadorEscudos[socket.id];
        io.emit("ranking", getRankingArray());
    });
});

// Timer global - a cada 30 segundos troca escudo para quem não respondeu
function iniciarTimerGlobal() {
    if (timerGlobal) clearInterval(timerGlobal);

    timerGlobal = setInterval(() => {
        // Trocar escudo para todos os jogadores conectados
        Object.keys(jogadorEscudos).forEach(socketId => {
            const novoEscudo = escudos[Math.floor(Math.random() * escudos.length)];
            jogadorEscudos[socketId] = novoEscudo;
            io.to(socketId).emit("novo-escudo", novoEscudo);
        });

        // Emitir evento para reiniciar timer no cliente
        io.emit("reiniciar-timer");
    }, 30000);
}

// Iniciar timer global quando servidor iniciar
iniciarTimerGlobal();

// Iniciando servidor

// Função para normalizar string
function normalizar(str) {
    return str
        .toLowerCase()
        .normalize("NFD")
        .replace(/\p{Diacritic}/gu, "")
        .trim();
}

// Função para verificar se resposta está correta
function isRespostaCorreta(resposta, escudo) {
    const respostaNorm = normalizar(resposta);
    const nomeNorm = normalizar(escudo.nome);
    if (respostaNorm === nomeNorm) return true;
    if (escudo.alternativas) {
        return escudo.alternativas.some(alt => respostaNorm === normalizar(alt));
    }
    return false;
}

// Função para transformar ranking em array ordenado
function getRankingArray() {
    return Object.entries(ranking)
        .map(([id, obj]) => ({
            jogador: id,
            pontos: obj.pontos,
            nome: obj.nome
        }))
        .sort((a, b) => b.pontos - a.pontos);
}

server.listen(3000, () => {
    console.log("Servidor rodando em http://localhost:3000");
});
