import * as React from 'react';
import { Text, View, Image, StyleSheet, TouchableOpacity } from 'react-native';
import '../components/randomNumer';

const logo = require('../assets/logo.png');
const jogar = require('../assets/botao_jogar.png');

export default function HomePage({ navigation, route}) {
  return (
    <>
        <View style={styles.container}>
          <Image source={logo}/>
        </View>
        <View style={styles.button}>
        <TouchableOpacity onPress={()=>{
          navigation.navigate('CoinPage', { coin: 0});
        }}>
          <Image source={jogar}/>
        </TouchableOpacity>
        </View>
    </>
  );
}

const styles = StyleSheet.create({
  container: {
    flex: 2,
    backgroundColor: '#60bd8c',
    alignItems: 'center',
    justifyContent: 'center',
  },  
  button: {
    flex: 1,
    backgroundColor: '#60bd8c',
    alignItems: 'center',
    justifyContent: 'space-evenly'
  }
});
