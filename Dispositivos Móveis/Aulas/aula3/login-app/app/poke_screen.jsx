// app/poke_screen.jsx

import AsyncStorage from '@react-native-async-storage/async-storage';
import { useLocalSearchParams } from 'expo-router';
import { useEffect, useState } from 'react';
import { StyleSheet } from "react-native";
import FormLogin from '../components/LoginForm';
import Pokemon from '../components/Pokemon';

export default function PokeScreen() {
    const params = useLocalSearchParams()
    const nome = params.nome

    const [pokemon, setPokemon] = useState(undefined)
    const [token, setToken] = useState(undefined)

    useEffect(() => {
        async function loadPokemon() {
            let tokenData = await getData("token")
            if ( !tokenData )
                return

            let url = `https://poke-login.onrender.com/pokemon/nome/${nome}`
            try {
                const response = await fetch(url, {
                    headers: {
                        "Authorization": "Bearer MEUTOKEN"
                    }
                })
                const data = await response.json()
                setPokemon(data)
            } catch (err) {
                alert("Erro ao buscar pokemon")
            }
        }
        loadPokemon()
    }, [])


    async function onPressLogin() {
        let url = `https://poke-login.onrender.com/login`
        try {
            const response = await fetch(url, {
                method: "POST",
                body: {
                    email: "blue@gmail.com",
                    password: "azul"
                }
            })
            // const data = await response.json()
            console.log(response)
        } catch (err) {
            alert("Erro ao buscar pokemon")
            console.log(err)
        }
    }



    // npx expo install @react-native-async-storage/async-storage
    async function storeData(key, value) {
        try {
            if ( typeof value != "string") {
                value = JSON.stringify(value)
            }
            await AsyncStorage.setItem(key, value)
            console.log(`Salvou ${key} com o valor ${value}`)
        } catch (err) {
            console.log("Erro: " + err)
        }
    }

    async function getData(key) {
        try {
            let value = await AsyncStorage.getItem(key)
            if ( value != null ) {
                return JSON.parse(value)
            }
            return []
        } catch (err) {
            console.log("Erro: " + err)
        }
    }



    if ( !token ) {
        return <FormLogin onPressLogin={onPressLogin} />
    }


    return (
        <Pokemon />
    )
}

const styles = StyleSheet.create({
    container: {
        flex: 1,
        justifyContent: "center",
        alignItems: "center",
    },
})