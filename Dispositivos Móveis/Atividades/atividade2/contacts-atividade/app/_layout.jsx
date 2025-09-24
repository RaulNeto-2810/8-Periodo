import { Stack } from "expo-router";

export default function Layout() {
  return (
    <Stack screenOptions={{
      headerTitleAlign: "center",
      headerStyle: { backgroundColor: '#EDF2F7' },
      headerTintColor: '#1A202C',
    }}>
      <Stack.Screen name="index" options={{ headerShown: false }} />
      <Stack.Screen name="details" options={{ title: "Detalhes do Contato" }} />
    </Stack>
  );
}