const express = require("express");
const http = require("http");
const { Server } = require("socket.io");
const fs = require("fs");

const app = express();
const server = http.createServer(app);
const io = new Server(server);

const teamLogos = JSON.parse(fs.readFileSync("data/escudos.json"));
const playerScores = {};
const playerCurrentLogos = {};

app.use(express.static("public"));

io.on("connection", (socket) => {
    console.log("Jogador conectado:", socket.id);

    initializePlayer(socket);

    socket.on("set-username", (username) => handleSetUsername(socket, username));
    socket.on("resposta", (answer) => handlePlayerAnswer(socket, answer));
    socket.on("game-ended", () => handleGameEnded(socket));
    socket.on("request-new-game", () => handleNewGameRequest(socket));
    socket.on("leave-game", () => handlePlayerLeave(socket));
    socket.on("disconnect", () => handlePlayerDisconnect(socket));
});

function initializePlayer(socket) {
    const randomLogo = getRandomLogo();

    playerCurrentLogos[socket.id] = randomLogo;
    playerScores[socket.id] = { points: 0, name: null };

    socket.emit("escudo", randomLogo);
    broadcastRanking();
}

function handleSetUsername(socket, username) {
    playerScores[socket.id].name = username;
    broadcastRanking();
}

function handlePlayerAnswer(socket, answer) {
    const currentLogo = playerCurrentLogos[socket.id];
    if (!currentLogo) return;

    if (isAnswerCorrect(answer, currentLogo)) {
        playerScores[socket.id].points += 1;
        broadcastRanking();
        sendNewLogo(socket);
    }
}

function handleGameEnded(socket) {
    const playerName = playerScores[socket.id]?.name || socket.id;
    console.log("Jogo finalizado:", playerName);
}

function handleNewGameRequest(socket) {
    const playerName = playerScores[socket.id]?.name || socket.id;
    console.log("Novo jogo solicitado:", playerName);

    playerScores[socket.id].points = 0;
    sendNewLogo(socket);
    broadcastRanking();
}

function handlePlayerLeave(socket) {
    const playerName = playerScores[socket.id]?.name || socket.id;
    console.log("Jogador saiu:", playerName);

    delete playerCurrentLogos[socket.id];
    playerScores[socket.id] = { points: 0, name: null };
    broadcastRanking();
}

function handlePlayerDisconnect(socket) {
    console.log("Jogador desconectado:", socket.id);
    delete playerScores[socket.id];
    delete playerCurrentLogos[socket.id];
    broadcastRanking();
}

function getRandomLogo() {
    return teamLogos[Math.floor(Math.random() * teamLogos.length)];
}

function sendNewLogo(socket) {
    const newLogo = getRandomLogo();
    playerCurrentLogos[socket.id] = newLogo;
    socket.emit("novo-escudo", newLogo);
}

function normalizeText(text) {
    return text
        .toLowerCase()
        .normalize("NFD")
        .replace(/\p{Diacritic}/gu, "")
        .trim();
}

function isAnswerCorrect(answer, logo) {
    const normalizedAnswer = normalizeText(answer);
    const normalizedTeamName = normalizeText(logo.nome);

    if (normalizedAnswer === normalizedTeamName) return true;

    if (logo.alternativas) {
        return logo.alternativas.some(alternative =>
            normalizedAnswer === normalizeText(alternative)
        );
    }

    return false;
}

function getRankingData() {
    return Object.entries(playerScores)
        .map(([playerId, playerData]) => ({
            jogador: playerId,
            pontos: playerData.points,
            nome: playerData.name
        }))
        .sort((a, b) => b.pontos - a.pontos);
}

function broadcastRanking() {
    io.emit("ranking", getRankingData());
}

server.listen(3000, () => {
    console.log("🚀 Servidor rodando em http://localhost:3000");
});
