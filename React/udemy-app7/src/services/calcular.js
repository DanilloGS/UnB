const calcular = ( num1, num2, op ) => {
    if(op === 0) {
        return parseInt(num1) + parseInt(num2);
    }
    else
        return parseInt(num1) - parseInt(num2);
}

export default calcular;