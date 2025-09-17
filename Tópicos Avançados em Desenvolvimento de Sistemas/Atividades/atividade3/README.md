# Atividade Prática 03 - Painel em Tempo Real com Socket.IO

Este projeto implementa um painel em tempo real (dashboard) que monitora usuários conectados e a popularidade de salas de bate-papo, utilizando Node.js, Express e Socket.IO.

## 🎯 Objetivo

Desenvolver um painel que exiba em tempo real o número total de usuários conectados e a sala (room) com mais usuários ativos, com atualizações automáticas a cada segundo.

## 🚀 Funcionalidades

### Requisitos Básicos
- **Contagem de Usuários Online**: Exibe o número total de clientes conectados ao servidor.
- **Sala Mais Popular**: Identifica e exibe qual sala contém o maior número de usuários.
- **Atualização em Tempo Real**: Os dados no painel são atualizados a cada 1 segundo sem a necessidade de recarregar a página.

### 🌟 Funcionalidades Extras
- **Ranking de Salas**: Exibe uma lista ordenada de todas as salas ativas, da mais populosa para a menos populosa.
- **Gráfico em Tempo Real**: Um gráfico de barras (utilizando Chart.js) mostra visualmente a quantidade de usuários em cada sala.
- **Alerta de Lotação**: Um alerta visual é exibido na tela quando uma sala ultrapassa 5 usuários.

## 📦 Tecnologias Utilizadas

- **Backend**: Node.js, Express, Socket.IO
- **Frontend**: HTML5, CSS3, JavaScript (Vanilla)
- **Gráficos**: Chart.js

## ⚙️ Como Executar o Projeto

1.  **Clone o repositório:**
    ```bash
    git clone [https://github.com/SEU-USUARIO/SEU-REPOSITORIO.git](https://github.com/SEU-USUARIO/SEU-REPOSITORIO.git)
    cd SEU-REPOSITORIO
    ```

2.  **Instale as dependências:**
    ```bash
    npm install
    ```

3.  **Inicie o servidor:**
    ```bash
    npm start
    ```
    Ou
    ```bash
    node server.js
    ```

4.  **Acesse a aplicação:**
    Abra seu navegador e visite `http://localhost:3000`.

5.  **Para testar:**
    Abra a página em múltiplas abas ou navegadores. Use o campo de texto para entrar em diferentes salas e observe o painel, o ranking e o gráfico se atualizarem em tempo real.