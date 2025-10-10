import { useLocalSearchParams } from "expo-router";
import { StyleSheet, Text, View, ScrollView } from "react-native";
import { Image } from "expo-image";
import Favorite from "../components/favorite";

export default function MovieScreen() {
    const params = useLocalSearchParams()
    const movie = JSON.parse(params.movie)

    return (
        <ScrollView style={styles.container}>
            <View style={styles.content}>
                {/* Poster */}
                <Image
                    source={{ uri: 'https://image.tmdb.org/t/p/w500' + movie.poster_path }}
                    style={styles.poster}
                />

                {/* Nome */}
                <Text style={styles.title}>
                    {movie.title}
                </Text>

                {/* Nota */}
                <View style={styles.ratingContainer}>
                    <Text style={styles.ratingLabel}>Nota: </Text>
                    <Text style={styles.rating}>
                        ⭐ {movie.vote_average?.toFixed(1)}/10
                    </Text>
                </View>

                <Favorite idMovie={movie.id} isFavorite={false} />

                {/* Data de lançamento */}
                <View style={styles.dateContainer}>
                    <Text style={styles.dateLabel}>Data de lançamento: </Text>
                    <Text style={styles.date}>
                        {new Date(movie.release_date).toLocaleDateString('pt-BR')}
                    </Text>
                </View>

                {/* Sinopse */}
                <View style={styles.overviewContainer}>
                    <Text style={styles.overviewLabel}>Sinopse:</Text>
                    <Text style={styles.overview}>
                        {movie.overview}
                    </Text>
                </View>
            </View>
        </ScrollView>
    )
}

const styles = StyleSheet.create({
    container: {
        flex: 1,
        backgroundColor: '#fff'
    },
    content: {
        padding: 16,
        alignItems: 'center'
    },
    poster: {
        width: 300,
        height: 450,
        borderRadius: 8,
        marginBottom: 16
    },
    title: {
        fontSize: 24,
        fontWeight: 'bold',
        textAlign: 'center',
        marginBottom: 12
    },
    ratingContainer: {
        flexDirection: 'row',
        alignItems: 'center',
        marginBottom: 8
    },
    ratingLabel: {
        fontSize: 16,
        fontWeight: 'bold'
    },
    rating: {
        fontSize: 18,
        color: '#f39c12'
    },
    dateContainer: {
        flexDirection: 'row',
        alignItems: 'center',
        marginBottom: 16
    },
    dateLabel: {
        fontSize: 16,
        fontWeight: 'bold'
    },
    date: {
        fontSize: 16,
        color: '#555'
    },
    overviewContainer: {
        marginTop: 8,
        width: '100%'
    },
    overviewLabel: {
        fontSize: 18,
        fontWeight: 'bold',
        marginBottom: 8
    },
    overview: {
        fontSize: 16,
        lineHeight: 24,
        textAlign: 'justify',
        color: '#333'
    }
})