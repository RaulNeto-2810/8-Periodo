import React, { useState, useCallback } from "react";
import {
    Text,
    FlatList,
    TextInput,
    Pressable,
    StyleSheet,
    View,
} from "react-native";
import * as Contacts from "expo-contacts";
import { Ionicons } from '@expo/vector-icons';
import { useRouter, useFocusEffect } from "expo-router";
import { SafeAreaView } from 'react-native-safe-area-context';

export default function Home() {
    const [contacts, setContacts] = useState([]);
    const [filteredContacts, setFilteredContacts] = useState([]);
    const [search, setSearch] = useState("");
    const router = useRouter();

    useFocusEffect(
        useCallback(() => {
            const loadContacts = async () => {
                const { status } = await Contacts.requestPermissionsAsync();
                if (status === "granted") {
                    const { data } = await Contacts.getContactsAsync({
                        fields: [
                            Contacts.Fields.Name,
                            Contacts.Fields.PhoneNumbers,
                            Contacts.Fields.Emails,
                            Contacts.Fields.Addresses,
                            Contacts.Fields.Company,
                            Contacts.Fields.Note,
                        ],
                    });

                    console.log(`Contatos encontrados pela API: ${data.length}`);
                    
                    // Filtra contatos sem nome ou sem número de telefone
                    const validContacts = data.filter(contact =>
                        contact.name &&
                        contact.name.trim() !== '' &&
                        Array.isArray(contact.phoneNumbers) &&
                        contact.phoneNumbers.length > 0
                    );

                    console.log(`Contatos válidos após o filtro: ${validContacts.length}`);

                    const sortedData = validContacts.sort((a, b) => {
                        if (a.name < b.name) return -1;
                        if (a.name > b.name) return 1;
                        return 0;
                    });

                    setContacts(sortedData);

                    if (search.trim() === "") {
                        setFilteredContacts(sortedData);
                    } else {
                        const filtered = sortedData.filter((c) =>
                            c.name?.toLowerCase().includes(search.toLowerCase())
                        );
                        setFilteredContacts(filtered);
                    }
                }
            };

            loadContacts();
        }, [search])
    );

    const handleSearch = (text) => {
        setSearch(text);
        if (text.trim() === "") {
            setFilteredContacts(contacts);
        } else {
            const filtered = contacts.filter((c) =>
                c.name?.toLowerCase().includes(text.toLowerCase())
            );
            setFilteredContacts(filtered);
        }
    };

    const theme = lightTheme;

    const renderItem = ({ item }) => (
        <Pressable
            onPress={() =>
                router.push({
                    pathname: "/details",
                    params: { contact: JSON.stringify(item) },
                })
            }
        >
            <View style={[styles.contactItem, { backgroundColor: theme.itemBg }]}>
                <View style={[styles.avatar, { backgroundColor: theme.avatarBg }]}>
                    <Text style={[styles.avatarText, { color: theme.avatarText }]}>
                        {item.name ? item.name[0].toUpperCase() : "?"}
                    </Text>
                </View>
                <View style={styles.contactInfo}>
                    <Text style={[styles.name, { color: theme.text }]}>{item.name}</Text>
                    <Text style={[styles.phone, { color: theme.subText }]}>
                        {item.phoneNumbers && item.phoneNumbers[0]
                            ? item.phoneNumbers[0].number
                            : "-"}
                    </Text>
                </View>
            </View>
        </Pressable>
    );

    return (
        <SafeAreaView style={[styles.container, { backgroundColor: theme.background }]}>
            <View style={styles.contentWrapper}>
                <View style={styles.header}>
                    <Text style={[styles.headerText, { color: theme.text }]}>
                        Meus Contatos
                    </Text>
                </View>
                <View style={[styles.searchContainer, { borderColor: theme.border }]}>
                    <Ionicons name="search" size={20} color={theme.subText} style={{ marginRight: 8 }} />
                    <TextInput
                        style={[styles.searchInput, { color: theme.text }]}
                        placeholder="Buscar Contato"
                        placeholderTextColor={theme.subText}
                        value={search}
                        onChangeText={handleSearch}
                    />
                </View>
                <FlatList
                    data={filteredContacts}
                    keyExtractor={(item) => item.id}
                    renderItem={renderItem}
                    contentContainerStyle={{ paddingBottom: 20 }}
                />
            </View>
        </SafeAreaView>
    );
}

const lightTheme = {
    background: "#EDF2F7",
    text: "#1A202C",
    subText: "#718096",
    border: "#CBD5E0",
    itemBg: "#fff",
    avatarBg: "#E2E8F0",
    avatarText: "#2D3748",
};

const styles = StyleSheet.create({
    container: { 
        flex: 1 
    },
    contentWrapper: { 
        flex: 1, 
        paddingHorizontal: 20, 
        paddingTop: 10 
    },
    header: { 
        flexDirection: "row", 
        justifyContent: "space-between", 
        alignItems: "center", 
        marginBottom: 15 
    },
    headerText: { 
        fontSize: 20, 
        fontWeight: "bold" 
    },
    searchContainer: { 
        flexDirection: "row", 
        alignItems: "center", 
        borderWidth: 1, 
        borderRadius: 8, 
        paddingHorizontal: 10, 
        marginBottom: 15 
    },
    searchInput: { 
        flex: 1, 
        height: 40, 
        fontSize: 16 
    },
    contactItem: { 
        flexDirection: "row", 
        alignItems: "center", 
        padding: 12, 
        borderRadius: 10, 
        marginBottom: 10 
    },
    avatar: { 
        width: 45, 
        height: 45, 
        borderRadius: 8, 
        alignItems: "center", 
        justifyContent: "center", 
        marginRight: 12 
    },
    avatarText: { 
        fontSize: 18, 
        fontWeight: "bold" 
    },
    contactInfo: { 
        flex: 1 
    },
    name: { 
        fontSize: 16, 
        fontWeight: "600" 
    },
    phone: { 
        fontSize: 14 
    },
});