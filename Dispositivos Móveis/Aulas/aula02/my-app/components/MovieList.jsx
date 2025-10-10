import { FlatList } from "react-native";
import MovieItem from "./MovieItem";


export default function MovieList({ movies }) {
    return (
        <FlatList
            data={movies}
            numColumns={2}
            renderItem={({ item, index }) => (
                <MovieItem movie={item} isLeft={index % 2 == 0} key={item.id} />
            )}
        />
    )
}