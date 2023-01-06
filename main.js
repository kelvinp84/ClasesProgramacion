//comentarios de una sola linea
/*
comentarios de 
varias lineas
 */
/*function mp(numero,numero2){
    return numero+numero2;
}
let edad = 12;
var numero = 8;
var nombre = "Pepito";
var numero2 = 9;
var cadena = nombre + "-"+numero2;
console.log(numero);
console.log(nombre);
console.log(numero+numero2);
console.log(cadena);
console.log(edad);
//alert("Hola mundo");
console.log("Hola mundo");
console.log(mp(numero,numero2));
//let se utiliza para variables locales
//var se utiliza para variables globales

var numero=8;
console.log(numero);
if(true){
    var numero=5;
    console.log(numero);
}
console.log(numero);
 
var num=6;
console.log(num);
if(true){
    let num=4;
    console.log(num);
}
console.log(num);

var edad = 8;
edad = 19;
console.log(edad);
const pi = 3.1416;
console.log(pi);
var nombre = "Ana";
console.log(nombre);
var verdadero_falso = true;
console.log(verdadero_falso);
console.log(typeof edad);
console.log(typeof pi);
console.log(typeof nombre);
console.log(typeof verdadero_falso);

var edad = 18;

switch(edad){

    case 18:{
        console.log("ERES MAYOR DE EDAD");
        break;
    }
    case 25:{
        console.log("ERES ADULTO");
        break;
    }
    case 80:{
        console.log("ERES ANCIANO");
        break;
    }
    default:{
        console.log("EDAD NO ESPECIFICADA");
        break;
    }

}*/

//TABLA DE MULTILICAAR EN JS
var numero = 4;

for(var i = 1; i<=10; i++){
    console.log(numero + " x " + i + " = " + numero*i);
}

var anio = 2023;
while(anio != 2010){
    console.log("El anio es: " + anio);

    if(anio == 2010){
        break;
    }
    anio--;
}

function suma(a,b){
    console.log("LA SUMA ES: " + (a + b));
}
function mensaje(){
    console.log("HOLA!");
}
var a = 5;
var b = 6;
var resultado = mensaje();
console.log(resultado);
suma(a,b);
var numero_falso = "6";
var num = 7;

console.log(+numero_falso+num);

