const net = require('net');

const client = new net.Socket();

client.connect(50008, '189.6.76.118', () => {
    console.log("Conectou");
    client.on('data', data => {
        console.log(data);
        console.log(Object.getOwnPropertyNames(data));
    })
})
