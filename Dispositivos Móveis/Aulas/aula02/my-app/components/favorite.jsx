import { Pressable } from "react-native";
import MaterialIcon from "@expo/vector-icons/MaterialIcons";

export default function Favorite({ isFavorite }) {
    let icon = isFavorite ? "favorite" : "favorite-border";

    return(
        <Pressable>
            <MaterialIcon name={icon} size={20} color={"#f00"} />
        </Pressable>
    )

}