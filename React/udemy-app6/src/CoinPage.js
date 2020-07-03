import * as React from 'react';
import { Image, View, StyleSheet, Text} from 'react-native';
import { TouchableOpacity } from 'react-native-gesture-handler';
import '../components/randomNumer';


const coroa = require('../assets/moeda_coroa.png');
const cara = require('../assets/moeda_cara.png');
const jogar = require('../assets/botao_jogar.png');

export default function CoinPage({ navigation, route }) {
  return (
    <>
      <View style={styles.container}>
        {route.params?.coin == 0 ? <Image source={cara}/> : <Image source={coroa}/>}  
      </View>
      <View style={styles.button}>
          <TouchableOpacity onPress={() => navigation.navigate('CoinPage', { coin: randomNumber() })}>
            <Image source={jogar}/>
          </TouchableOpacity>
      </View>
    </>
  );
}

const styles = StyleSheet.create({
  container: {
    flex: 3,
    backgroundColor: '#60bd8c',
    alignItems: 'center',
    justifyContent: 'center'
  },
  button: {
    flex: 1,
    backgroundColor: '#60bd8c',
    alignItems: 'center',
    justifyContent: 'space-evenly'
  }
});
