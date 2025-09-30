const API_URL = 'http://localhost:3000/alunos';
const alunosList = document.getElementById('aluno-list')
const form = document.getElementById('aluno-form')
const nomeInput = document.getElementById('nome')
const idadeInput = document.getElementById('idade')
const cursoInput = document.getElementById('curso')
const alunoIdInput = document.getElementById('aluno-id')
const submitBtn = document.getElementById('submit-btn')
const cancelBtn = document.getElementById('cancel-btn')
let isEditMode = false

// Função para criar ou atualizar um registro de aluno
form.addEventListener('submit', async (e) => {
    e.preventDefault()

    const dadosAluno = {
        nome: nomeInput.value,
        idade: parseInt(idadeInput.value),
        curso: cursoInput.value
    }

    try {
        if (isEditMode) {
            // Modo edição - atualizar aluno existente
            await fetch(`${API_URL}/${alunoIdInput.value}`, {
                method: 'PUT',
                headers: { "Content-Type": "application/json" },
                body: JSON.stringify(dadosAluno)
            })
            sairModoEdicao()
        } else {
            // Modo criação - criar novo aluno
            await fetch(API_URL, {
                method: 'POST',
                headers: { "Content-Type": "application/json" },
                body: JSON.stringify(dadosAluno)
            })
        }

        limparFormulario()
        carregarAlunos()
    } catch (error) {
        console.error('Erro ao salvar aluno:', error)
        alert('Erro ao salvar aluno. Tente novamente.')
    }
})

// Função para listar os registros já criados
async function carregarAlunos() {
    try {
        const res = await fetch(API_URL)
        const alunos = await res.json()

        alunosList.innerHTML = ''

        if (alunos.length === 0) {
            alunosList.innerHTML = '<div class="empty-state">Nenhum aluno cadastrado</div>'
            return
        }

        alunos.forEach(aluno => {
            const li = document.createElement('li')
            li.innerHTML = `
                <div class="student-info">
                    <div class="student-name">${aluno.nome}</div>
                    <div class="student-details">
                        ${aluno.idade} anos • <span class="curso">${aluno.curso}</span>
                    </div>
                </div>
                <div class="actions">
                    <button class="editar" onclick="atualizarAluno('${aluno._id}')">Editar</button>
                    <button class="excluir" onclick="deletarAluno('${aluno._id}')">Excluir</button>
                </div>
            `
            alunosList.appendChild(li)
        })
    } catch (error) {
        console.error('Erro ao carregar alunos:', error)
        alunosList.innerHTML = '<div class="empty-state">Erro ao carregar dados</div>'
    }
}

// Função para apagar um registro existente
async function deletarAluno(id) {
    const confirmacao = confirm('Tem certeza que deseja excluir este aluno?')

    if (confirmacao) {
        try {
            await fetch(`${API_URL}/${id}`, {
                method: "DELETE"
            })
            carregarAlunos()
        } catch (error) {
            console.error('Erro ao excluir aluno:', error)
            alert('Erro ao excluir aluno. Tente novamente.')
        }
    }
}

// Função para atualizar um registro existente
async function atualizarAluno(id) {
    try {
        const res = await fetch(`${API_URL}/${id}`)
        const aluno = await res.json()

        nomeInput.value = aluno.nome
        idadeInput.value = aluno.idade
        cursoInput.value = aluno.curso
        alunoIdInput.value = id

        entrarModoEdicao()

        // Scroll para o formulário
        form.scrollIntoView({ behavior: 'smooth' })
        nomeInput.focus()

    } catch (error) {
        console.error('Erro ao carregar dados do aluno:', error)
        alert('Erro ao carregar dados do aluno para edição')
    }
}

// Função para entrar no modo de edição
function entrarModoEdicao() {
    isEditMode = true
    submitBtn.textContent = 'Atualizar'
    cancelBtn.style.display = 'inline-flex'
    form.classList.add('editing')
}

// Função para sair do modo de edição
function sairModoEdicao() {
    isEditMode = false
    submitBtn.textContent = 'Adicionar'
    cancelBtn.style.display = 'none'
    form.classList.remove('editing')
    alunoIdInput.value = ''
}

// Função para limpar o formulário
function limparFormulario() {
    nomeInput.value = ''
    idadeInput.value = ''
    cursoInput.value = ''
}

// Event listener para o botão cancelar
cancelBtn.addEventListener('click', () => {
    sairModoEdicao()
    limparFormulario()
})

carregarAlunos()