import React from 'react';
import { StyleSheet, TextInput } from 'react-native';

export default function Input(props) {
  return (
      <TextInput
        style={styles.textInput}
        placeholder= {`Value ${props.option}`}
        keyboardType='numeric'
        onChangeText={ value =>{props.changeInput(props.option,value)}}
        value = {`${props.inputValue}`}
        maxLength={10}
      />
  );
}

const styles = StyleSheet.create({
    textInput:{
        height: 50,
        width: 150,
        fontSize: 24,
        borderWidth:1,
        borderColor: '#010101',
        borderRadius: 10,
        marginTop:10,
        textAlign: 'center'
    },
});
