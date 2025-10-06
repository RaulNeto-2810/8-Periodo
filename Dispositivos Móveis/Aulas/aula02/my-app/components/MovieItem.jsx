import { Image } from "expo-image";
import { StyleSheet, Text, View } from "react-native";


export default function MovieItem({ movie }) {
    return (
        <View style={styles.container}>
            <Image
                source={{ uri: 'https://image.tmdb.org/t/p/w500' + movie.poster_path}}
                style={styles.poster}
            />
            <Text style={styles.title}>
                {movie.title}
            </Text>
        </View>
    )
}

const styles = StyleSheet.create({
    container: {
        width: 200,
        marginHorizontal: 8,
        marginVertical: 16,
        alignItems: 'center'
    },
    poster: {
        width: 200,
        height: 300
    },
    title: {
        fontSize: 20,
        fontWeight: 'bold'
    }
})