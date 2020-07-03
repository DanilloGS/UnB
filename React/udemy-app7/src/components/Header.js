import React from 'react';
import { StyleSheet, Text, View, StatusBar} from 'react-native';

export default function Header() {
  return (
    <>
      <StatusBar 
        backgroundColor='#0089ff'
      />
      <View style={styles.header}>
        <Text style={styles.title}>Calculadora 1.0</Text>
      </View>
    </>
  );
}

const styles = StyleSheet.create({
  header: {
    backgroundColor: '#0089ff',
    paddingBottom: 10,
    alignItems: 'center'
  },
  title: {
    marginTop:15,
    fontSize: 24,
    color: 'white',
    fontWeight: 'bold'
  }
});