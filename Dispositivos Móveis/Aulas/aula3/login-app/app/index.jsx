// app/index.jsx

import { Image } from "expo-image";
import { router } from "expo-router";
import { useEffect, useState } from "react";
import { FlatList, StyleSheet, Text, TouchableOpacity, View } from "react-native";

export default function Lista() {
    const [items, setItems] = useState([])

    useEffect(() => {
        async function loadPokemon() {
            let url = "https://poke-login.onrender.com/pokemon/geracao/1/10/1"
            try {
                const response = await fetch(url)
                const data = await response.json()
                setItems(data.pokemon)
            } catch (err) {
                alert("Erro ao buscar lista de pokemon")
            }
        }
        loadPokemon()
    }, [])


    function onPressPokemon(pokemon) {
        router.push({
            pathname: "/poke_screen",
            params: {
                nome: pokemon.nome
            }
        })
    }

    return (
        <View style={styles.container}>
            <FlatList
                data={items}
                numColumns={2}
                renderItem={({ item, index }) => (
                    <TouchableOpacity 
                        style={styles.card}
                        onPress={() => onPressPokemon(item)}
                    >
                        <Image source={{ uri: item.img }} style={styles.image} />
                        <Text style={styles.name}>{item.nome}</Text>
                    </TouchableOpacity>
                )}
            />
        </View>
    )
}

const styles = StyleSheet.create({
    container: {
        flex: 1,
        justifyContent: "center",
        alignItems: "center",
    },
    card : {
        marginHorizontal: 20,
        marginVertical: 20,
        backgroundColor: "#fff",
        padding: 16,
        borderRadius: 8,
        alignItems: "center"
    },
    image: {
        width: 150,
        height: 150
    },
    name: {
        fontSize: 20,
        fontWeight: "600",
        textTransform: "capitalize"
    }
})