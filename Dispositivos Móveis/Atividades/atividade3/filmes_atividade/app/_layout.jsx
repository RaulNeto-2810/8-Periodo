import Ionicons from '@expo/vector-icons/Ionicons';
import { Stack, router } from 'expo-router';
import { Pressable } from 'react-native';
import 'react-native-reanimated';

export default function RootLayout() {
	return (
		<Stack>
			<Stack.Screen
				name='index'
				options={{
					title: 'Populares',
					headerRight: () => (
						<Pressable
							onPress={() => router.push('/favorites_screen')}
							style={{ marginRight: 8 }}
						>
							<Ionicons name="bookmarks" size={24} />
						</Pressable>
					)
				}}
			/>
			<Stack.Screen name='movie_screen' options={{ title: 'Filme' }} />
			<Stack.Screen name='favorites_screen' options={{ title: 'Meus Favoritos' }} />
		</Stack>
	);
}