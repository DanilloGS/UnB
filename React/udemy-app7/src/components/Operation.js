import React, { useState } from 'react';
import { Picker, StyleSheet } from 'react-native';

export default function Operation(props) {
  const [operation, setOperation] = useState(0);

  return (
    <>
        <Picker style={styles.operation}
          selectedValue={operation}
          onValueChange={ op => { setOperation(op), props.operationSelected(op) } }
        >
            <Picker.Item label='Soma' value={0} />
            <Picker.Item label="Subtração" value={1}/>
        </Picker>
    </>
  );
}

const styles = StyleSheet.create({
    operation: {
        marginTop: 15,
        marginBottom: 15,
        height: 50,
        fontSize: 16,
        marginLeft: 24
    }
});