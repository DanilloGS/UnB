import React, { useState } from 'react';
import { StyleSheet, TextInput } from 'react-native';

export default function Visor(props) {
  return (
      <TextInput
        style={styles.visor}
        placeholder='Result'
        editable={false}
        value={`${props.result}`}
        keyboardType='numeric'
      />
  );
}

const styles = StyleSheet.create({
    visor:{
        height: 75,
        fontSize: 30,
        marginLeft: 32
    }
});
