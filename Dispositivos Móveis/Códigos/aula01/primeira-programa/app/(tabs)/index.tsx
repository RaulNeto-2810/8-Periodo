import { Link } from "expo-router";
import { StyleSheet, Text, View } from "react-native";

export default function HomeScreen() {

    return (
        <View style={styles.container}>
            <Text style={styles.text}>
                Home Screen
            </Text>
            <Link href={'/about'} style={styles.button}>Ir para o About</Link>
        </View>
    )
}

const styles = StyleSheet.create({
    container: {
        flex: 1,
        backgroundColor: '#25292e',
        justifyContent: 'center',
        alignItems: 'center',
    },
    text: {
        color: '#fff',
    },
    button: {
        fontSize: 20,
        textDecorationColor: "underline",
        color: "#fff"
    }
})

