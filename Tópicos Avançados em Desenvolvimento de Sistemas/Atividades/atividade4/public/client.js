const socket = io();

const elements = {
  loginScreen: document.getElementById("login-screen"),
  gameScreen: document.getElementById("game-screen"),
  usernameInput: document.getElementById("username"),
  startGameBtn: document.getElementById("start-game"),
  logoImg: document.getElementById("escudo"),
  answerInput: document.getElementById("resposta"),
  submitBtn: document.getElementById("enviar-resposta"),
  rankingList: document.getElementById("ranking-list"),
  gameOverButtons: document.getElementById("game-over-buttons"),
  playAgainBtn: document.getElementById("play-again-btn"),
  backToMenuBtn: document.getElementById("back-to-menu-btn"),
  timerText: document.getElementById("timer-text"),
  timerCircle: document.querySelector(".timer-circle")
};

const gameState = {
  currentUsername: "",
  timer: null,
  timeRemaining: 60,
  isGameEnded: false
};

function initializeEventListeners() {
  elements.startGameBtn.addEventListener("click", handleStartGame);
  elements.usernameInput.addEventListener("keypress", handleUsernameKeypress);
  elements.submitBtn.addEventListener("click", handleSubmitAnswer);
  elements.answerInput.addEventListener("keypress", handleAnswerKeypress);
  elements.playAgainBtn.addEventListener("click", handlePlayAgain);
  elements.backToMenuBtn.addEventListener("click", handleBackToMenu);
}

function handleStartGame() {
  const username = elements.usernameInput.value.trim();
  if (!username) return;

  gameState.currentUsername = username;
  socket.emit("set-username", username);
  showGameScreen();
}

function handleUsernameKeypress(event) {
  if (event.key === "Enter") {
    elements.startGameBtn.click();
  }
}

function handleSubmitAnswer() {
  if (gameState.isGameEnded) return;

  const answer = elements.answerInput.value.trim();
  if (!answer) return;

  socket.emit("resposta", answer);
  elements.answerInput.value = "";
  showSubmitFeedback();
}

function handleAnswerKeypress(event) {
  if (event.key === "Enter") {
    handleSubmitAnswer();
  }
}

function handlePlayAgain() {
  resetGameState();
  socket.emit("request-new-game");
}

function handleBackToMenu() {
  resetGameState();
  elements.rankingList.innerHTML = "";
  socket.emit("leave-game");
  showLoginScreen();
  clearUserData();
}

function showGameScreen() {
  elements.loginScreen.classList.add("hidden");
  elements.gameScreen.classList.remove("hidden");
}

function showLoginScreen() {
  elements.gameScreen.classList.add("hidden");
  elements.loginScreen.classList.remove("hidden");
}

function clearUserData() {
  elements.usernameInput.value = "";
  gameState.currentUsername = "";
}

function startGameTimer() {
  gameState.timeRemaining = 60;
  gameState.isGameEnded = false;
  updateTimerDisplay();

  gameState.timer = setInterval(() => {
    gameState.timeRemaining--;
    updateTimerDisplay();

    if (gameState.timeRemaining <= 0) {
      endGame();
    }
  }, 1000);
}

function updateTimerDisplay() {
  elements.timerText.textContent = gameState.timeRemaining;
  elements.timerCircle.classList.remove("warning", "danger");

  if (gameState.timeRemaining <= 10) {
    elements.timerCircle.classList.add("danger");
  } else if (gameState.timeRemaining <= 20) {
    elements.timerCircle.classList.add("warning");
  }
}

function endGame() {
  if (gameState.isGameEnded) return;

  gameState.isGameEnded = true;
  clearInterval(gameState.timer);
  disableGameControls();
  socket.emit("game-ended");

  setTimeout(() => {
    showFinalScore();
    showGameOverButtons();
  }, 1000);
}

function disableGameControls() {
  elements.answerInput.disabled = true;
  elements.submitBtn.disabled = true;
  elements.submitBtn.textContent = "Tempo Esgotado!";
  elements.submitBtn.style.background = "#cbd5e0";
}

function enableGameControls() {
  elements.answerInput.disabled = false;
  elements.answerInput.value = "";
  elements.submitBtn.disabled = false;
  elements.submitBtn.textContent = "Enviar";
  elements.submitBtn.style.background = "#48bb78";
}

function showFinalScore() {
  const playerData = findCurrentPlayerInRanking();
  const message = `🏁 Tempo esgotado!\n\n👤 Jogador: ${gameState.currentUsername}\n🏆 Posição: ${playerData.position}\n⚽ Pontuação final: ${playerData.score}\n\nObrigado por jogar!`;
  alert(message);
}

function findCurrentPlayerInRanking() {
  const playerItems = document.querySelectorAll('.player-item');
  let score = "0 pts";
  let position = "N/A";

  playerItems.forEach((item, index) => {
    const playerName = item.querySelector('.player-name').textContent;
    if (playerName === gameState.currentUsername) {
      score = item.querySelector('.player-points').textContent;
      position = `#${index + 1}`;
    }
  });

  return { score, position };
}

function showGameOverButtons() {
  elements.gameOverButtons.classList.remove('hidden');
}

function hideGameOverButtons() {
  elements.gameOverButtons.classList.add('hidden');
}

function resetGameState() {
  if (gameState.timer) {
    clearInterval(gameState.timer);
  }

  gameState.timeRemaining = 60;
  gameState.isGameEnded = false;
  gameState.timer = null;

  enableGameControls();
  hideGameOverButtons();
  updateTimerDisplay();
  elements.logoImg.src = "";
}

function showSubmitFeedback() {
  elements.submitBtn.style.background = "#38a169";
  elements.submitBtn.textContent = "Enviado!";

  setTimeout(() => {
    if (!gameState.isGameEnded) {
      elements.submitBtn.style.background = "#48bb78";
      elements.submitBtn.textContent = "Enviar";
    }
  }, 1000);
}

function animateLogoChange(logoUrl) {
  elements.logoImg.style.opacity = "0";
  setTimeout(() => {
    elements.logoImg.src = logoUrl;
    elements.logoImg.style.opacity = "1";
  }, 100);
}

function renderRanking(rankingData) {
  elements.rankingList.innerHTML = "";

  rankingData.forEach((player, index) => {
    const playerElement = createPlayerElement(player, index);
    elements.rankingList.appendChild(playerElement);
  });
}

function createPlayerElement(player, index) {
  const playerDiv = document.createElement("div");
  playerDiv.className = "player-item";

  if (index === 0) playerDiv.classList.add("first");
  else if (index === 1) playerDiv.classList.add("second");
  else if (index === 2) playerDiv.classList.add("third");

  const rankSpan = createSpanElement("player-rank", `#${index + 1}`);
  const nameSpan = createSpanElement("player-name", getPlayerDisplayName(player));
  const pointsSpan = createSpanElement("player-points", `${player.pontos} pts`);

  playerDiv.appendChild(rankSpan);
  playerDiv.appendChild(nameSpan);
  playerDiv.appendChild(pointsSpan);

  return playerDiv;
}

function createSpanElement(className, textContent) {
  const span = document.createElement("span");
  span.className = className;
  span.textContent = textContent;
  return span;
}

function getPlayerDisplayName(player) {
  return player.nome || `Jogador ${player.jogador.substring(0, 8)}...`;
}

socket.on("escudo", (logoData) => {
  animateLogoChange(logoData.url);
  if (!gameState.timer) {
    startGameTimer();
  }
});

socket.on("novo-escudo", (logoData) => {
  animateLogoChange(logoData.url);
});

socket.on("ranking", (rankingData) => {
  renderRanking(rankingData);
});

initializeEventListeners();
