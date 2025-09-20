const API_URL = 'http://localhost:3000/alunos'; //verificar se está correto
//Selecionando elementos do frontend
const alunosList = document.getElementById('aluno-list')
const form = document.getElementById('aluno-form')
const nomeInput = document.getElementById('nome')
const idadeInput = document.getElementById('idade')
const cursoInput = document.getElementById('curso')

// Funções
// Função para criar um novo registro de aluno
form.addEventListener('submit', async (e) => {
    e.preventDefault()
    const novoAluno = {
        nome: nomeInput.value,
        idade: parseInt(idadeInput.value),
        curso: cursoInput.value
    }

    await fetch(API_URL, {
        method: 'POST',
        headers: { "Content-Type": "application/json" },
        body: JSON.stringify(novoAluno)
    })

    nomeInput.value = ''
    idadeInput.value = ''
    cursoInput.value = ''
    
    carregarAlunos()
})

// Função para listar os registros já criados
async function carregarAlunos(){
    const res = await fetch(API_URL) // Estender a sintaxe do fetch api
    const alunos = await res.json()
    
    alunosList.innerHTML = '' // Limpar a lista antes de adicionar os alunos

    alunos.forEach(aluno => {
        const li = document.createElement('li')
        li.innerHTML = `
        <span>${aluno.nome} (${aluno.idade} anos)<br><span class='curso'> ${aluno.curso}</span></span>
        <div class="actions">
            <button class="editar" onclick="atualizarAluno('${aluno._id}')">Editar</button>
            <button class="excluir" onclick="deletarAluno('${aluno._id}')">Apagar</button>
        </div>
        `
        alunosList.appendChild(li)
    })
}

carregarAlunos()

// Função para apagar um registro existente
async function deletarAluno(id){
    let text = 'Deseja realmente apagar este aluno?'

    if (confirm(text) == true){
        await fetch(`${API_URL}/${id}`, {
            method: "DELETE"
        })
        carregarAlunos()
    } else {
        
    }
}

// Função para atualizar um registro existente
async function atualizarAluno(id){
    const res = await fetch(`${API_URL}/${id}`) // Estender a sintaxe do fetch api
    const aluno = await res.json()
    nomeInput.value = `${aluno.nome}`
    idadeInput.value = `${aluno.idade}`
    cursoInput.value = `${aluno.curso}`
}

// Chamar a função para listar os alunos
carregarAlunos()