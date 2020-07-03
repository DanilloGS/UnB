import React, { useState } from 'react';
import Header from './Header';
import  Visor  from './Visor';
import Input from './Input';
import { View, StyleSheet, TouchableOpacity, Text } from 'react-native';
import Operation from './Operation';

import calcular from '../services/calcular';

export default function HomePage() {

  const [showValue, setShowValue] = useState(0);
  const [operation, setOperation] = useState(0);
  const [input1, setInput1] = useState(0);
  const [input2, setInput2] = useState(0);

  const changeInput = (option, value) => {
    option == 1 ? setInput1(value) : setInput2(value);
  } 

  return (
    <>
      <View style={styles.viewUp}>
        <Header/>
        <Visor result={showValue}/>
        <View style={styles.row}>
          <Input 
            option={1} 
            changeInput={changeInput}
            inputValue={input1}
          />
          <Input 
            option={2}
            changeInput={changeInput}
            inputValue={input2}
          />
        </View>
        <Operation operationSelected={setOperation}/>
      </View>
      <View style={styles.viewBottom}>
        <TouchableOpacity 
          style={styles.button}
          onPress={()=>{setShowValue(calcular(input1, input2, operation))}}
        >
          <Text style={styles.buttonText}>Calcular</Text>
        </TouchableOpacity>
      </View>
    </>
  );
}

const styles = StyleSheet.create({
    row: {
        flexDirection: 'row',
        justifyContent:'space-evenly'
    },
    buttonText: {
      color: 'white',
      fontSize: 24
    },
    button: {
      backgroundColor: '#0089ff',
      alignItems:'center',
      padding:20,
      marginLeft: 24,
      marginRight: 24,
      borderRadius: 16,
      marginBottom: 32
    },
    viewUp: {
      flex: 1,
      justifyContent: 'space-between'
    },
    viewBottom: {
      flex: 1,
      justifyContent: 'flex-end'
    }
});