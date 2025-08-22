//.models/Aluno.js

//Criar um schema para Alunos

const mongoose = require('mongoose')

const alunoSchema = new mongoose.Schema(
    {
        nome: {
            type: String,
            required: [true, 'O nome é obrigatório'],
            minlength: [2, 'O nome deve ter pelo menos 2 caracteres'],
            maxlength: [100, 'O nome deve ter no máximo 100 caracteres']
        },
        idade: {
            type: Number,
            required: [true, 'A idade é obrigatória'],
            min: [0, 'A idade deve ser um número positivo'],
            max: [150, 'A idade deve ser um número menor que 150']
        },
        curso: {
            type: String,
            required: [true, 'O curso é obrigatório'],
            maxlength: [120, 'Curso muito longo']
        },
        createdAt: {
            type: Date,
            default: Date.now
        }
    },
    { versionKey: false }
)

const Aluno = mongoose.model('Aluno', alunoSchema)
module.exports = Aluno