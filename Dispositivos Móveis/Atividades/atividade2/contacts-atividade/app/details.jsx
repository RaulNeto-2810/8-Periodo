import React from "react";
import { View, Text, StyleSheet, ScrollView, } from "react-native";
import { useLocalSearchParams } from "expo-router";
import { Ionicons } from '@expo/vector-icons';
import { SafeAreaView } from 'react-native-safe-area-context';

// Componente para evitar repetição de código
const DetailRow = ({ icon, label, value }) => {
    if (!value || value.length === 0) {
        value = "-";
    }
    return (
        <View style={styles.row}>
            <Ionicons name={icon} size={24} color="#4A5568" style={styles.icon} />
            <View style={styles.textContainer}>
                <Text style={styles.label}>{label}</Text>
                <Text style={styles.value}>{value}</Text>
            </View>
        </View>
    );
};

export default function ContactDetails() {
    const { contact } = useLocalSearchParams();
    const data = JSON.parse(contact);

    const formatAddress = (addresses) => {
        if (!addresses || addresses.length === 0) return null;
        const addr = addresses[0];
        return [addr.street, addr.city, addr.region, addr.postalCode, addr.country]
            .filter(Boolean)
            .join(", ");
    };

    return (
        <SafeAreaView style={styles.safeArea}>
            <ScrollView contentContainerStyle={styles.container}>
                <View style={styles.header}>
                    <View style={styles.avatar}>
                        <Text style={styles.avatarText}>
                            {data.name ? data.name[0].toUpperCase() : "?"}
                        </Text>
                    </View>
                    <Text style={styles.name}>{data.name || "Contato"}</Text>
                </View>

                <View style={styles.card}>
                    <DetailRow
                        icon="call-outline"
                        label="Telefone"
                        value={data.phoneNumbers?.map((p) => p.number).join("\n")}
                    />
                    <DetailRow
                        icon="mail-outline"
                        label="E-mail"
                        value={data.emails?.map((e) => e.email).join("\n")}
                    />
                    <DetailRow
                        icon="business-outline"
                        label="Empresa"
                        value={data.company}
                    />
                    <DetailRow
                        icon="location-outline"
                        label="Endereço"
                        value={formatAddress(data.addresses)}
                    />
                    <DetailRow
                        icon="document-text-outline"
                        label="Notas"
                        value={data.note}
                    />
                </View>
            </ScrollView>
        </SafeAreaView>
    );
}

const styles = StyleSheet.create({
    safeArea: {
        flex: 1,
        backgroundColor: "#EDF2F7",
    },
    container: {
        padding: 20,
    },
    header: {
        alignItems: 'center',
        marginBottom: 30,
    },
    avatar: {
        width: 100,
        height: 100,
        borderRadius: 50,
        backgroundColor: '#CBD5E0',
        justifyContent: 'center',
        alignItems: 'center',
        marginBottom: 15,
    },
    avatarText: {
        fontSize: 40,
        fontWeight: 'bold',
        color: '#4A5568',
    },
    name: {
        fontSize: 28,
        fontWeight: 'bold',
        color: '#1A202C',
    },
    card: {
        backgroundColor: '#fff',
        borderRadius: 12,
        padding: 10,
        shadowColor: "#000",
        shadowOffset: { width: 0, height: 1 },
        shadowOpacity: 0.1,
        shadowRadius: 3,
        elevation: 3,
    },
    row: {
        flexDirection: 'row',
        alignItems: 'center',
        paddingVertical: 15,
        borderBottomWidth: 1,
        borderBottomColor: '#EDF2F7',
    },
    icon: {
        marginRight: 15,
    },
    textContainer: {
        flex: 1,
    },
    label: {
        fontSize: 14,
        color: '#718096',
        marginBottom: 2,
    },
    value: {
        fontSize: 16,
        color: '#1A202C',
    },
});