const express = require("express");
const http = require("http");
const { Server } = require("socket.io");

const app = express();
const server = http.createServer(app);
const io = new Server(server);

// Criar um Middleware para arquivos estaticos
app.use(express.static("public"));

//Criar o simulador de dados de telemetria
let combustivel = 100;
function gerarDados() {
  combustivel -= 1;
  if (combustivel < 0) combustivel = 0;

  return {
    temperatura: (20 + Math.random() * 15).toFixed(1),
    umidade: (40 + Math.random() * 50).toFixed(1),
    velocidade: (Math.random() * 120).toFixed(1),
    combustivel: combustivel.toFixed(1),
  };
}

//Enviar os dados da telemetria a cada 2 segundos
setInterval(() => {
  const dados = gerarDados();
  io.emit("dadosSensor", dados);
}, 2000);

server.listen(3000, () => {
  console.log("Servidor rodando na porta 3000");
});
