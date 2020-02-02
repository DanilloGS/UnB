const net = require('net');
const handeleConnection = socket => {
    console.log("Alguem entrou");
    socket.on('end', ()=>{
        console.log('Desconectou');
    })
    socket.on('data', data => {
        console.log(data);
        
    })
}
const server = net.createServer(handeleConnection);
server.listen(4000, '127.0.0.1');