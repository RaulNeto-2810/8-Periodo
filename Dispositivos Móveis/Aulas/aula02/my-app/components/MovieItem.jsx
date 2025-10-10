import { Image } from "expo-image";
import { router } from 'expo-router';
import { Dimensions, Pressable, StyleSheet, Text, View } from "react-native";

const screenWidth = Dimensions.get("window").width
const screenHeight = Dimensions.get("window").height

export default function MovieItem({ movie, isLeft }) {
    function gotoMovie() {
        router.push({
            pathname: "/movie_screen",
            params: { movie: JSON.stringify(movie) }
        })
    }

    return (
        <Pressable 
            onPress={gotoMovie}
            style={[styles.container, {
                marginLeft: isLeft ? 16 : 8,
                marginRigh: isLeft ? 8 : 16
            }]}
        >
            <Image
                source={{ uri: 'https://image.tmdb.org/t/p/w500' + movie.poster_path}}
                style={styles.poster}
            />
            <Text style={styles.title}>
                {movie.title}
            </Text>
            <View style={styles.average}>
                <Text style={styles.averageText}>
                    {movie.vote_average.toFixed(1)}
                </Text>
            </View>
        </Pressable>
    )
}

const posterWidth = (screenWidth-(16*4))/2
console.log(posterWidth)

const styles = StyleSheet.create({
    container: {
        width: posterWidth,
        marginVertical: 16,
        alignItems: 'center',
    },
    poster: {
        width: posterWidth,
        height: posterWidth * 1.5
    },
    title: {
        fontSize: 20,
        fontWeight: 700
    },
    average: {
        width: 50,
        height: 50,
        backgroundColor: "#333333",
        borderRadius: "50%",
        justifyContent: "center",
        alignItems: "center",
        borderColor: "#fff",
        borderWidth: 3,
        position: "absolute",
        top: posterWidth * 1.5 - 58,
        right: 8,
    },
    averageText: {
        color: "#fff",
        fontWeight: 800,
        fontSize: 16
    }
})