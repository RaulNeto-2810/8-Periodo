// app/components/FormLogin.jsx

import { StyleSheet, Text, TouchableOpacity, View } from "react-native";

export default function FormLogin({ onPressLogin }) {

    return (
        <View style={styles.container}>
            <TouchableOpacity style={styles.button} onPress={onPressLogin}>
                <Text style={styles.text}>Entrar</Text>
            </TouchableOpacity>
        </View>
    )
}

const styles = StyleSheet.create({
    container: {
        flex: 1,
        justifyContent: "center",
        alignItems: "center",
    },
    button: {
        backgroundColor: "#006699",
        borderRadius: 16,
        paddingHorizontal: 32,
        paddingVertical: 8
    },
    text: {
        fontSize: 22,
        fontWeight: "600",
        color: "#fff"
    }
})