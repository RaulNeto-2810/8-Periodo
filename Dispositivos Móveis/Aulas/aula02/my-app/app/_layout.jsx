import { Stack } from 'expo-router';
import 'react-native-reanimated';

export default function RootLayout() {
  return (
    <Stack>
      <Stack.Screen name="index" options={{ headerTitle: 'Populares' }} />
      <Stack.Screen name="movie_screen" options={{ headerTitle: 'Filme' }} />
    </Stack>
  );
}