const mongoose = require('mongoose')

const gameSchema = new mongoose.Schema(
    {
        titulo: {
            type: String,
            required: [true, 'O título é obrigatório'],
            minlength: [2, 'O título deve ter pelo menos 2 caracteres'],
            maxlength: [100, 'O título deve ter no máximo 100 caracteres']
        },
        genero: {
            type: String,
            required: [true, 'O gênero é obrigatório'],
            minlength: [2, 'O gênero deve ter pelo menos 2 caracteres'],
            maxlength: [100, 'O gênero deve ter no máximo 100 caracteres']
        },
        plataforma: {
            type: String,
            required: [true, 'A plataforma é obrigatória'],
            maxlength: [120, 'A plataforma é muito longa']
        },
        lancamento: {
            type: Number,
            required: [true, 'O lançamento é obrigatório'],
            min: [0, 'O lançamento deve ser um número positivo'],
            max: [150, 'O lançamento deve ser um número menor que 150']
        },
    },
    { versionKey: false }
)

const Game = mongoose.model('Game', gameSchema)
module.exports = Game