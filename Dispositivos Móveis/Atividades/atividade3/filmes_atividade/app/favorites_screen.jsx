import { useFocusEffect } from '@react-navigation/native';
import { useCallback, useState } from 'react';
import { FlatList, StyleSheet, Text, View } from 'react-native';
import MovieItem from '../components/MovieItem';
import { getData } from '../utils/storage';

export default function FavoritesScreen() {
    const [favorites, setFavorites] = useState([])
    const [loading, setLoading] = useState(true)

    useFocusEffect(
        useCallback(() => {
            async function fetchFavorites() {
                try {
                    let favs = await getData("favorites")
                    // Filtra apenas favoritos válidos
                    const validFavorites = favs.filter(fav =>
                        fav &&
                        fav.id &&
                        fav.title &&
                        fav.vote_average !== undefined &&
                        fav.poster_path
                    )
                    console.log("Favoritos carregados:", validFavorites)
                    setFavorites(validFavorites)
                } catch (err) {
                    console.log("Erro ao carregar favoritos: " + err)
                } finally {
                    setLoading(false)
                }
            }
            fetchFavorites()
        }, [])
    )

    function renderMovieItem({ item, index }) {
        return <MovieItem movie={item} isLeft={index % 2 === 0} />
    }

    return (
        <View style={styles.container}>
            {loading ? (
                <Text style={styles.infoText}>Carregando...</Text>
            ) : favorites.length === 0 ? (
                <View style={styles.emptyContainer}>
                    <Text style={styles.emptyText}>Nenhum filme favorito ainda</Text>
                    <Text style={styles.emptySubtext}>Comece adicionando seus filmes favoritos!</Text>
                </View>
            ) : (
                <>
                    <Text style={styles.headerText}>
                        {favorites.length} {favorites.length === 1 ? 'filme favorito' : 'filmes favoritos'}
                    </Text>
                    <FlatList
                        data={favorites}
                        renderItem={renderMovieItem}
                        keyExtractor={(item, index) => item?.id?.toString() || index.toString()}
                        numColumns={2}
                        contentContainerStyle={styles.listContainer}
                    />
                </>
            )}
        </View>
    )
}

const styles = StyleSheet.create({
    container: {
        flex: 1,
        backgroundColor: '#fff'
    },
    headerText: {
        fontSize: 18,
        fontWeight: '600',
        textAlign: 'center',
        marginVertical: 16,
        color: '#333'
    },
    infoText: {
        fontSize: 16,
        textAlign: 'center',
        marginTop: 50,
        color: '#666'
    },
    emptyContainer: {
        flex: 1,
        justifyContent: 'center',
        alignItems: 'center',
        paddingHorizontal: 32
    },
    emptyIcon: {
        fontSize: 80,
        marginBottom: 16
    },
    emptyText: {
        fontSize: 20,
        fontWeight: '600',
        color: '#333',
        textAlign: 'center',
        marginBottom: 8
    },
    emptySubtext: {
        fontSize: 14,
        color: '#666',
        textAlign: 'center'
    },
    listContainer: {
        paddingBottom: 16
    }
})
