import MaterialIcon from "@expo/vector-icons/MaterialIcons";
import { Pressable } from "react-native";

export default function Favorite({ isFavorite, movie, onPressFavorite }) {
    let icon = isFavorite ? "favorite" : "favorite-border"

    return (
        <Pressable onPress={() => onPressFavorite(movie)}>
            <MaterialIcon name={icon} size={40} color={"#f00"} />
        </Pressable>
    )
}