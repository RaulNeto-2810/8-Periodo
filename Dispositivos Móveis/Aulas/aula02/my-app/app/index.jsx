// app/index.jsx
import { useEffect, useState } from 'react';
import { StyleSheet, Text, View } from 'react-native';
import MovieList from '../components/MovieList';

export default function Home() {
    const [movies, setMovies] = useState([])

    // Função de efeito colateral chamada uma única vez
    // na inicialização do App (passar a lista [] vazia)
    useEffect(() => {
        async function getMovies() {
            let api_key = process.env.EXPO_PUBLIC_TMDB_API
            let endpoint = "https://api.themoviedb.org/3/movie/popular?language=pt-BR"

            let resp = await fetch(endpoint, {
                method: "GET",
                headers: {
                    accept: "application/json",
                    Authorization: `Bearer ${api_key}`
                }
            })
            
            if ( resp.status === 200 ) {
                let movie_list = await resp.json()
                console.log(movie_list)
                setMovies(movie_list.results)
            }
        }
        getMovies()
    }, [])

    return (
		<View style={styles.container}>
			<Text style={styles.text}>
				App FILMES
			</Text>
            <MovieList movies={movies} />
		</View>
	);
}

const styles = StyleSheet.create({
	container: {
		flex: 1,
		justifyContent: 'center',
		alignItems: 'center'
	},
	text: {
		fontSize: 20
	}
})