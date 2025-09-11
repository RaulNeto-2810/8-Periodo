import Button from "@/components/Button";
import ImageViewer from "@/components/imageViewer";
import { StyleSheet, View } from "react-native";
import * as ImagePicker from 'expo-image-picker';

const PlaceholderImage = require('@/assets/images/background-image.png');

export default function HomeScreen() {
    const [selectedImage, setSelectImage] = useState(undefined)

    const pickImageAsync = async () => {
        let result = await ImagePicker.launchImageLibraryAsync({
            mediaTypes: ['images'],
            allowsEditing: true,
            quality: 1,
        })
        if ( result.canceled == false) {
            console.log(result);
        } else {
            alert("Você não selecionou nenhuma imagem.")
        }
    }

    return (
        <View style={styles.container}>
            <View style={styles.imageContainer}>
                <ImageViewer imgSource={PlaceholderImage} />
            </View>
        </View>
        <View style={styles.footerContainer}>
            <Button label={'Escolher foto'} theme={'primary'} onPress={pickImageAsync} />
            <Button label={'Usar essa Foto'} />
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
        flex: 1/3,
        alignItems: 'center'
    }
})

