@import url('https://fonts.googleapis.com/css2?family=Roboto+Condensed:ital,wght@0,100..900;1,100..900&display=swap');

* {
    margin: 0;
    padding: 0;
    box-sizing: border-box;
    font-family: "Roboto Condensed", sans-serif;
}

body {
    display: flex;
    justify-content: center;
    align-items: center;
    min-height: 100vh; 
    background: url(./img/tho-ge-angel-7026445_1920.jpg);
    background-size: cover;
    background-position: center;
}

.container {
    width: 420px;
    background-color: transparent;
    border: 2px solid rgba(255, 255, 255, .2);
    border-radius: 10px;
    color: #1d1c1c;
    padding: 30px 40px;
    box-shadow: 0 0 10px rgba(0, 0, 0, .2);
    backdrop-filter: blur(55px);
}

.container h1 {
    font-size: 36px;
    text-align: center;
}

.input-box {
    position: relative;
    width: 100%;
    height: 50px;
    margin: 30px 0;
}

.input-box input {
    width: 100%;
    height: 100%;
    background-color: transparent;
    border: none;
    outline: none;
    font-size: 16px;
    color: black;
    padding: 20px 45px 20px 20px;
}

.input-box input::placeholder {
    color: rgb(0, 0, 0);
}

.input-box i {
    position: absolute;
    right: 20px;
    top: 50%;
    transform: translateY(-50%);
    font-size: 20px;
}

.remember-forgot {
    display: flex;
    justify-content: space-between;
    margin: -15px 0 15px;
}
/*
    margin  & padding

    1 valor - margin: 20px - Todos os lados
    2 valores - margin: 20px 30px - Em cima e embaixo, dos lados
    3 valores - padding: 20px 10px 30px - Em cima, dos lados, embaixo
    4 valores - margin: 10px 30px 12px 33px - Em cima, direita, embaixo, esquerda
*/

.remember-forgot label input {
    accent-color: #b8a552;
    margin-right: 5px;
}

.remember-forgot a {
    text-decoration: none;
    color:rgb(219, 208, 102);
}

.remember-forgot a:hover {
    text-decoration: underline;
}

.login {
    width: 100%;
    height: 50px;
    background-color: rgb(192, 167, 84);
    border: none;
    border-radius: 40px;
    cursor: pointer;
    font-size: 16px;
    color: #fff;
    font-weight: 600;
    box-shadow: 0 0 10px #1d1c1c;
    margin-top: 20px;
    transition: 0.5s;
}

.login:hover {
    background-color: #333;
    border: 2px solid rgba(180, 206, 109, 0.534);
    color:rgb(219, 208, 102);
}

.register-link {
    font-size: 14px;
    text-align: center;
    margin: 20px 0 15px;
}
 .register-link a {
    text-decoration: none;
    color: #c2b331;
    font-weight: 500;
 }

.register-link a:hover {
     text-decoration: underline;
}
