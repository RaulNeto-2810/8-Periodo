const socket = io();
const canvas = document.getElementById("gameCanvas");
const ctx = canvas.getContext("2d");

// Armazena os jogadores conectados
let players = {};

//Recebe todos os jogadores ao se conectar
socket.on("currentPlayers", (currentPlayers) => {
    players = currentPlayers;
    render();
});

//Entrada de novo jogador
socket.on("newPlayer", (player) => {
    players[players.id] = player;
    render();
});

//Movimento do jogadores
socket.on("playerMoved", (data) => {
    if (players[data.id]) {
        players[data.id].x = data.x;
        players[data.id].y = data.y;
        render();
    }
});

//Disconexão de jogador
socket.on("playerDisconnected", (playerId) => {
    delete players[playerId];
    render();
});

// Teclas de Movimento
document.addEventListener("keydown", (event) => {
    if (event.key === "ArrowLeft") socket.emit("move", "left");
    if (event.key === "ArrowRight") socket.emit("move", "right");
    if (event.key === "ArrowUp") socket.emit("move", "up");
    if (event.key === "ArrowDown") socket.emit("move", "down");
});

//Renderização
function render() {
    ctx.clearRect(0, 0, canvas.width, canvas.height);
    Object.values(players).forEach((player) => {
        ctx.fillStyle = player.color;
        ctx.fillRect(player.x, player.y, 30, 30);
    });
}
