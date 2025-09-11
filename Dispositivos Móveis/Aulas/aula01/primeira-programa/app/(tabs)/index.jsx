import Button from "@/components/Button";
import ImageViewer from "@/components/imageViewer";
import { StyleSheet, View } from "react-native";
import * as ImagePicker from 'expo-image-picker';
import React, { useState } from 'react';

const PlaceholderImage = require('@/assets/images/background-image.png');

export default function HomeScreen() {
    const [selectedImage, setSelectedImage] = useState(undefined)

    const pickImageAsync = async () => {
        let result = await ImagePicker.launchImageLibraryAsync({
            mediaTypes: ['images'],
            allowsEditing: true,
            quality: 1,
        })
        if (result.canceled === false) {
            // Aqui você pode usar setSelectedImage para salvar a imagem selecionada
            // Exemplo: setSelectedImage(result.assets[0].uri);
            console.log(result);
        } else {
            alert("Você não selecionou nenhuma imagem.");
        }
    }

    return (
        <View style={{ flex: 1 }}>
            <View style={styles.container}>
                <View style={styles.imageContainer}>
                    <ImageViewer imgSource={PlaceholderImage} />
                </View>
            </View>
            <View style={styles.footerContainer}>
                <Button label={'Escolher foto'} theme={'primary'} onPress={pickImageAsync} />
                <Button label={'Usar essa Foto'} />
            </View>
        </View>
    )
}

const styles = StyleSheet.create({
    container: {
        flex: 1,
        backgroundColor: '#25292e',
        justifyContent: 'center',
        alignItems: 'center'
    },
    imageContainer: {
        flex: 1
    },
    footerContainer: {
        flex: 1 / 3,
        alignItems: 'center'
    }
})

