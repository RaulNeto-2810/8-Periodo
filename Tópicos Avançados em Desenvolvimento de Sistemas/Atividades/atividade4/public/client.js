// Conectar ao servidor via Socket.IO
const socket = io();

// Elementos da tela de login
const loginScreen = document.getElementById("login-screen");
const gameScreen = document.getElementById("game-screen");
const usernameInput = document.getElementById("username");
const startGameBtn = document.getElementById("start-game");

// Elementos do jogo
const img = document.getElementById("escudo");
const respostaInput = document.getElementById("resposta");
const enviarBtn = document.getElementById("enviar-resposta");
const rankingList = document.getElementById("ranking-list");

let currentUsername = "";

// Iniciar jogo
startGameBtn.addEventListener("click", () => {
  const username = usernameInput.value.trim();
  if (username) {
    currentUsername = username;

    // Enviar nome do usuário ao servidor
    socket.emit("set-username", username);

    // Trocar para tela do jogo
    loginScreen.classList.add("hidden");
    gameScreen.classList.remove("hidden");
  }
});

// Permitir iniciar com Enter no campo de username
usernameInput.addEventListener("keypress", (e) => {
  if (e.key === "Enter") {
    startGameBtn.click();
  }
});

// Quando receber um objeto "escudo", atualizar a imagem (primeira vez)
socket.on("escudo", (data) => {
  console.log("Escudo inicial recebido:", data);
  img.src = data.url;

  // Animação suave na troca de escudo
  img.style.opacity = "0";
  setTimeout(() => {
    img.style.opacity = "1";
  }, 100);
});

// Quando receber um novo escudo (após acertar ou timeout)
socket.on("novo-escudo", (data) => {
  console.log("Novo escudo recebido:", data);
  img.src = data.url;

  // Animação suave na troca de escudo
  img.style.opacity = "0";
  setTimeout(() => {
    img.style.opacity = "1";
  }, 100);
});

// Enviar resposta ao servidor
function enviarResposta() {
  const resposta = respostaInput.value.trim();
  if (resposta) {
    socket.emit("resposta", resposta);
    respostaInput.value = "";

    // Feedback visual
    enviarBtn.style.background = "#38a169";
    enviarBtn.textContent = "Enviado!";
    setTimeout(() => {
      enviarBtn.style.background = "#48bb78";
      enviarBtn.textContent = "Enviar";
    }, 1000);
  }
}

enviarBtn.addEventListener("click", enviarResposta);

// Permitir envio com Enter
respostaInput.addEventListener("keypress", (e) => {
  if (e.key === "Enter") {
    enviarResposta();
  }
});

// Exibir ranking atualizado
socket.on("ranking", (ranking) => {
  rankingList.innerHTML = "";
  ranking.forEach((item, idx) => {
    const playerDiv = document.createElement("div");
    playerDiv.className = "player-item";

    // Adicionar classes especiais para o pódio
    if (idx === 0) playerDiv.classList.add("first");
    else if (idx === 1) playerDiv.classList.add("second");
    else if (idx === 2) playerDiv.classList.add("third");

    const rankSpan = document.createElement("span");
    rankSpan.className = "player-rank";
    rankSpan.textContent = `#${idx + 1}`;

    const nameSpan = document.createElement("span");
    nameSpan.className = "player-name";
    nameSpan.textContent = item.nome || `Jogador ${item.jogador.substring(0, 8)}...`;

    const pointsSpan = document.createElement("span");
    pointsSpan.className = "player-points";
    pointsSpan.textContent = `${item.pontos} pts`;

    playerDiv.appendChild(rankSpan);
    playerDiv.appendChild(nameSpan);
    playerDiv.appendChild(pointsSpan);

    rankingList.appendChild(playerDiv);
  });
});
