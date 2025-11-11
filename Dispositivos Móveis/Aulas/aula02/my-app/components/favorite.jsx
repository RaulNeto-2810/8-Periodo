import { Pressable } from "react-native-web";
import MaterialIcon from "@expo/vector-icons/MaterialIcons";

export default function Favorite({ isFavorite, movie, onPressFavorite }) {
    let icon = isFavorite ? "favorite" : "favorite-border";

    return(
        <Pressable onPress={() => onPressFavorite(movie)}>
            <MaterialIcon name={icon} size={20} color={"#f00"} />
        </Pressable>
    )

}
