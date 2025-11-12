// npx expo install @react-native-async-storage/async-storage
import { Image } from 'expo-image';
import { useLocalSearchParams } from 'expo-router';
import { useEffect, useState } from 'react';
import { ActivityIndicator, Dimensions, ScrollView, StyleSheet, Text, View } from "react-native";
import Favorite from '../components/favorite';
import { getData, storeData } from '../utils/storage';
import Ionicons from '@expo/vector-icons/Ionicons';

const screenWidth = Dimensions.get("window").width

export default function MovieScreen() {
    const [favorites, setFavorites] = useState([])
    const [movie, setMovie] = useState(null)
    const [loading, setLoading] = useState(true)

    // Pegar os parâmetros enviados por outra tela
    const params = useLocalSearchParams()
    const movieId = params.id

    useEffect(() => {
        async function fetchMovieData() {
            try {
                let api_key = process.env.EXPO_PUBLIC_TMDB_API
                let endpoint = `https://api.themoviedb.org/3/movie/${movieId}?append_to_response=credits&language=pt-BR`

                let resp = await fetch(endpoint, {
                    method: "GET",
                    headers: {
                        accept: "application/json",
                        Authorization: `Bearer ${api_key}`
                    }
                })

                if (resp.status === 200) {
                    let movieData = await resp.json()
                    console.log(movieData)
                    setMovie(movieData)
                }
            } catch (err) {
                console.log("Erro ao buscar filme: " + err)
            } finally {
                setLoading(false)
            }
        }

        async function verificaFavoritos() {
            console.log("FILMES FAVORITADOS:")
            let favs = await getData("favorites")
            setFavorites(favs)
        }

        fetchMovieData()
        verificaFavoritos()
    }, [movieId])

    async function onFavorite(movieFavorited) {
        let movieId = movieFavorited.id

        // Pegar os favoritos existentes
        let favs = await getData("favorites")
        console.log("Favoritos atuais:", favs)

        let newFavs = []
        let exists = false
        for (let fav of favs) {
            if (fav.id === movieId) { // Se existir
                exists = true
            } else { // Se não existir
                newFavs.push(fav)
            }
        }

        if (exists === false) {
            // Armazena os dados
            const favoriteData = {
                id: movieFavorited.id,
                title: movieFavorited.title,
                vote_average: movieFavorited.vote_average,
                poster_path: movieFavorited.poster_path
            }
            console.log("Adicionando favorito:", favoriteData)
            newFavs.push(favoriteData)
        } else {
            console.log("Removendo favorito:", movieId)
        }

        console.log("Novos favoritos:", newFavs)
        await storeData("favorites", newFavs)
        setFavorites(newFavs)
    }

    return (
        <ScrollView style={styles.container}>
            {loading ? (
                <ActivityIndicator size="large" color="#0000ff" style={styles.loader} />
            ) : movie ? (
                <>
                    <Image
                        source={{ uri: 'https://image.tmdb.org/t/p/w500' + movie.poster_path }}
                        style={styles.poster}
                    />
                    <View style={styles.headerContainer}>
                        <Text style={styles.title}>
                            {movie.title}
                        </Text>
                        <Favorite
                            movie={movie}
                            isFavorite={favorites.some(fav => fav.id === movie.id)}
                            onPressFavorite={onFavorite}
                        />
                    </View>

                    <View style={styles.infoContainer}>
                        <View style={styles.infoItem}>
                            <Ionicons name="star" size={18} color="#FFD700" />
                            <Text style={styles.infoText}>{movie.vote_average?.toFixed(1)}/10</Text>
                        </View>
                        <View style={styles.infoItem}>
                            <Ionicons name="calendar-outline" size={18} color="#666" />
                            <Text style={styles.infoText}>{movie.release_date}</Text>
                        </View>
                        <View style={styles.infoItem}>
                            <Ionicons name="time-outline" size={18} color="#666" />
                            <Text style={styles.infoText}>{movie.runtime} min</Text>
                        </View>
                    </View>

                    {movie.genres && movie.genres.length > 0 && (
                        <View style={styles.genresContainer}>
                            {movie.genres.map((genre) => (
                                <View key={genre.id} style={styles.genreBadge}>
                                    <Text style={styles.genreText}>{genre.name}</Text>
                                </View>
                            ))}
                        </View>
                    )}

                    <View style={styles.section}>
                        <Text style={styles.sectionTitle}>Sinopse</Text>
                        <Text style={styles.overview}>{movie.overview}</Text>
                    </View>

                    {movie.credits?.crew && (() => {
                        const director = movie.credits.crew.find(person => person.job === "Director")
                        return director ? (
                            <View style={styles.section}>
                                <Text style={styles.sectionTitle}>Diretor</Text>
                                <Text style={styles.personName}>{director.name}</Text>
                            </View>
                        ) : null
                    })()}

                    {movie.credits?.cast && movie.credits.cast.length > 0 && (
                        <View style={styles.section}>
                            <Text style={styles.sectionTitle}>Elenco Principal</Text>
                            {movie.credits.cast.slice(0, 10).map((actor, index) => (
                                <View key={actor.id || index} style={styles.actorItem}>
                                    <Text style={styles.actorName}>{actor.name}</Text>
                                    <Text style={styles.characterName}>como {actor.character}</Text>
                                </View>
                            ))}
                        </View>
                    )}
                </>
            ) : (
                <Text style={styles.errorText}>Não foi possível carregar o filme</Text>
            )}
        </ScrollView>
    )
}

/*
Nome, Poster, Nota, Sinopse, Data de lançamento
*/

const posterWidth = (screenWidth * 0.6)

const styles = StyleSheet.create({
    container: {
        flex: 1,
        backgroundColor: '#fff'
    },
    loader: {
        marginTop: 100
    },
    poster: {
        width: posterWidth,
        height: posterWidth * 1.5,
        alignSelf: "center",
        marginTop: 16,
        borderRadius: 8
    },
    headerContainer: {
        flexDirection: 'row',
        alignItems: 'center',
        justifyContent: 'space-between',
        paddingHorizontal: 16,
        marginTop: 16
    },
    title: {
        fontSize: 24,
        fontWeight: '700',
        flex: 1,
        marginRight: 8
    },
    infoContainer: {
        flexDirection: 'row',
        justifyContent: 'center',
        alignItems: 'center',
        gap: 16,
        marginTop: 12,
        paddingHorizontal: 16
    },
        infoItem: {
        flexDirection: 'row',
        alignItems: 'center',
        gap: 4
    },
    infoText: {
        fontSize: 14,
        color: '#666',
        fontWeight: '500'
    },
    rating: {
        fontSize: 16,
        fontWeight: '600'
    },
    info: {
        fontSize: 14,
        color: '#666'
    },
    genresContainer: {
        flexDirection: 'row',
        flexWrap: 'wrap',
        paddingHorizontal: 16,
        marginTop: 16,
        gap: 8
    },
    genreBadge: {
        backgroundColor: '#e0e0e0',
        paddingHorizontal: 12,
        paddingVertical: 6,
        borderRadius: 16
    },
    genreText: {
        fontSize: 12,
        fontWeight: '500'
    },
    section: {
        paddingHorizontal: 16,
        marginTop: 20
    },
    sectionTitle: {
        fontSize: 20,
        fontWeight: '700',
        marginBottom: 12
    },
    overview: {
        fontSize: 14,
        lineHeight: 22,
        color: '#333',
        textAlign: 'justify'
    },
    personName: {
        fontSize: 16,
        fontWeight: '500',
        color: '#333'
    },
    actorItem: {
        paddingVertical: 8,
        borderBottomWidth: 1,
        borderBottomColor: '#f0f0f0'
    },
    actorName: {
        fontSize: 16,
        fontWeight: '600',
        color: '#000'
    },
    characterName: {
        fontSize: 14,
        color: '#666',
        marginTop: 2
    },
    errorText: {
        fontSize: 16,
        color: '#f00',
        textAlign: 'center',
        marginTop: 50
    }
})