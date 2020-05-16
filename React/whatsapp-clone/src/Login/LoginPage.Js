import React from 'react';
import { View, Text, TextInput, TouchableOpacity, StyleSheet } from 'react-native';

export default LoginPage = props => {
    return (
        <View style={styles.principal}>
            <Text>WhatsApp Clone</Text>
            <View>
                <TextInput placeholder='E-mail' />
                <TextInput placeholder='Senha' />
                <Text>Ainda não tem cadastro? Cadastre-se</Text>
            </View>
            <TouchableOpacity title="Acessar" onPress={() => false} />
        <View style={styles.principal}></View>
        </View>
    );
};

const styles = StyleSheet.create({
    principal:{
        flex: 1,
        justifyContent: 'center',
        flexDirection:'column',
        backgroundColor: 'purple'  
    }
});