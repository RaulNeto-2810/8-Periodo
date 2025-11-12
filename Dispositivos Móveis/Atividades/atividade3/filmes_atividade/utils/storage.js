import AsyncStorage from '@react-native-async-storage/async-storage';

/**
 * Salva dados no AsyncStorage
 */
export async function storeData(key, value) {
    try {
        if (typeof value !== "string") {
            value = JSON.stringify(value)
        }
        await AsyncStorage.setItem(key, value)
        console.log(`✅ Salvou ${key}:`, value)
    } catch (err) {
        console.error("❌ Erro ao salvar:", err)
    }
}

/**
 * Recupera dados do AsyncStorage
 */
export async function getData(key) {
    try {
        let value = await AsyncStorage.getItem(key)
        if (value != null) {
            const parsed = JSON.parse(value)
            return Array.isArray(parsed) ? parsed : []
        }
        return []
    } catch (err) {
        console.error("❌ Erro ao recuperar:", err)
        return []
    }
}

/**
 * Limpa dados corrompidos do AsyncStorage
 */
export async function clearFavorites() {
    try {
        await AsyncStorage.removeItem('favorites')
        console.log('✅ Favoritos limpos com sucesso')
    } catch (err) {
        console.error("❌ Erro ao limpar favoritos:", err)
    }
}

/**
 * Adiciona ou remove um filme dos favoritos
 */
export async function toggleFavorite(movie) {
    try {
        const favs = await getData("favorites")
        const movieId = movie.id

        // Verifica se já existe
        const index = favs.findIndex(fav => fav.id === movieId)

        if (index !== -1) {
            // Remove dos favoritos
            favs.splice(index, 1)
            console.log(`🗑️ Filme ${movieId} removido dos favoritos`)
        } else {
            // Adiciona aos favoritos
            const favoriteData = {
                id: movie.id,
                title: movie.title,
                vote_average: movie.vote_average,
                poster_path: movie.poster_path
            }
            favs.push(favoriteData)
            console.log(`❤️ Filme ${movieId} adicionado aos favoritos`)
        }

        await storeData("favorites", favs)
        return favs
    } catch (err) {
        console.error("❌ Erro ao alternar favorito:", err)
        return []
    }
}

/**
 * Verifica se um filme está nos favoritos
 */
export async function isFavorite(movieId) {
    try {
        const favs = await getData("favorites")
        return favs.some(fav => fav.id === movieId)
    } catch (err) {
        console.error("❌ Erro ao verificar favorito:", err)
        return false
    }
}
