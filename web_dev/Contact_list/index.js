const express = require('express');
const port = 8000;
const app = express();


app.get('/', function (request, response) {
    response.send('<h1>Cool, It is running</h1>');     //instead of response.end we use response.send here
});


app.listen(port, function (err) {
    if (err) {
        console.log('error in running server: ', err);
        return;
    }
    console.log('yo man! Server is running smoothly on port: ', port);
});