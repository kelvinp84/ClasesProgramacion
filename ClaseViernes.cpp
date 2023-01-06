
//Estructura switch calculadora basica
/*
#include <iostream>
using namespace std;

int main(){

    float n1=0, n2=0, sum=0, rest=0, mp = 0, div = 0;
    int opc;

    cout<<"\nCALCULADORA BASICA!"<<endl;

    cout<<"\nINGRESE EL PRIMER NUMERO: "; cin>>n1;
    cout<<"INGRESE EL SEGUNDO NUMERO: "; cin>>n2;

    cout<<"\n[1] SUMA]"<<endl;
    cout<<"[2] RESTA]"<<endl;
    cout<<"[3] MULTIPLICACION]"<<endl;
    cout<<"[4] DIVISION]"<<endl;
    cout<<"\nINGRESE EL NUMERO DE LA OPERACION QUE DESEA REALIZAR: "; cin>>opc;
   

    sum = n1 + n2;
    rest = n1 - n2;
    mp = n1 * n2;
    div = n1 / n2;
    
    
    switch (opc){
    case 1:
        cout<<"\nLA SUMA ES: "<<sum<<endl;
        break;

    case 2:
        cout<<"\nLA RESTA ES: "<<rest<<endl;
        break;
    
    case 3:
        cout<<"\nLA MULTiPLICACION ES: "<<mp<<endl;
        break;
    
    case 4:
        cout<<"\nLA DIVISION ES: "<<div<<endl;
        break;
    
    default:
        cout<<"\nOPCION INVALIDA!";
        break;
    }

    return 0;
}
*/
/*
#include <iostream>
using namespace std;

int main(){

    float n1=0, n2=0, sum=0, rest=0, mp = 0, div = 0;
    char opc;

    cout<<"\nCALCULADORA BASICA!"<<endl;

    cout<<"\nINGRESE EL PRIMER NUMERO: "; cin>>n1;
    cout<<"INGRESE EL SEGUNDO NUMERO: "; cin>>n2;

    cout<<"\n[a] SUMA]"<<endl;
    cout<<"[b] RESTA]"<<endl;
    cout<<"[c] MULTIPLICACION]"<<endl;
    cout<<"[d] DIVISION]"<<endl;
    cout<<"\nINGRESE EL CARACTER DE LA OPERACION QUE DESEA REALIZAR: "; cin>>opc;
   

    sum = n1 + n2;
    rest = n1 - n2;
    mp = n1 * n2;
    div = n1 / n2;
    
    
    switch (opc){
    case 'a':
    case 'A':
        cout<<"\nLA SUMA ES: "<<sum<<endl;
        break;

    case 'b':
    case 'B':
        cout<<"\nLA RESTA ES: "<<rest<<endl;
        break;
    
    case 'c':
    case 'C':
        cout<<"\nLA MULTiPLICACION ES: "<<mp<<endl;
        break;
    
    case 'd':
    case 'D':
        cout<<"\nLA DIVISION ES: "<<div<<endl;
        break;
    
    default:
        cout<<"\nOPCION INVALIDA!";
        break;
    }

    return 0;
}
*/
/*

#include <iostream>

using namespace std;

int main(){

    int dia = 0;

    cout<<"\nDIA DE LA SEMANA EN BASE A UN NUMERO DADO!"<<endl;

    cout<<"\nINGRESE EL DIA DE LA SEMANA: "; cin>>dia;

    switch (dia){
    case 1:
        cout<<"\nES LUNES: "<<endl;
        break;

    case 2:
        cout<<"\nES MARTES: "<<endl;        
        break;
    
    case 3:
        cout<<"\nES MIERCOLES: "<<endl;
        break;

    case 4:
        cout<<"\nES JUEVES: "<<endl;
        break;

    case 5:
        cout<<"\nES VIERNES: "<<endl;
        break;

    case 6:
        cout<<"\nES SABADO: "<<endl;
        break;

    case 7:
        cout<<"\nES DOMINGO: "<<endl;
        break;    
  
    
    default:
        cout<<"\nOPCION INVALIDA!"<<endl;
        break;
    }

    return 0;
}

*/

/*
#include <iostream>

using namespace std;

//bucle while

int main(){

    cout<<"BUCLE WHILE"<<endl;

    int contador = 0;

    while (contador < 10)
    {
        contador++;

        cout<<"contador: "<<contador<<endl;
    }

    return 0;
}

*/
/*
#include <iostream>

using namespace std;

//bucle while

int main(){

    int  contador = 1 ,n = 0, caloriasProducto = 0, totalCalorias = 0;

    cout<<"CONTADOR DE CALORIAS"<<endl;
    cout<<"\nINGRESE EL NUMERO DE ALIMENTOS: "; cin>>n;
    cout<<"\nINGRESE LAS CALORIAS DE LOS "<<n<<" productos: "<<endl; cin>>n;

    while (contador++ <= n)
    {
        cin>>caloriasProducto;
        totalCalorias = totalCalorias + caloriasProducto;
    }
    cout<<"\nLas calorias totales consumidas son: "<<totalCalorias<<endl;

    return 0;
}
*/
/*
#include <iostream>

using namespace std;

//bucle while

int main(){

    int  contador = 1 ,n = 0, caloriasProducto = 0, totalCalorias = 0;

    cout<<"-------------------------------------"<<endl;
    cout<<"CONTADOR DE CALORIAS"<<endl;
    cout<<"\nINGRESE EL NUMERO DE ALIMENTOS: "; cin>>n;
    cout<<"\nINGRESE LAS CALORIAS DE LOS "<<n<<" productos: "<<endl; cin>>n;

    while (contador++ <= n)
    {
        cin>>caloriasProducto;
        totalCalorias = totalCalorias + caloriasProducto;
    }
    cout<<"\nLas calorias totales consumidas son: "<<totalCalorias<<endl;

    return 0;
}

*/
/*
#include <iostream>
#include <math.h>
using namespace std;


int main(){

    int n = 0, raiz = 0, potencia = 0;;

    cout<<"-----------------------------------------------------"<<endl;
    cout<<"PROGRAMA PARA CALCULAR LA RAIZ CUADRADAD DE UN NUMERO"<<endl;
    cout<<"-----------------------------------------------------"<<endl;

    cout<<"\nINGRESE UN NUMERO: "; cin>>n;

    raiz = sqrt(n);
    potencia = pow(n,5);

    cout<<"\nLA RAIZ DE: "<<n<<" ES IGUAL A: "<<raiz<<endl;
    cout<<"\nLA POTENCIA DE: "<<n<<" ES IGUAL A: "<<potencia<<endl;

    return 0;
}
*/
/*
#include <iostream>
using namespace std;

int main(){

    cout<<"-----------------------------------------------------"<<endl;
    cout<<"BUCLE FOR"<<endl;
    cout<<"-----------------------------------------------------"<<endl;

    for (int i = 0; i <= 10; i++)
    {
        cout<<i<<endl;
    }
    
    return 0;
}
*/

/*
#include <iostream>
using namespace std;

int main(){

    int n = 0;

    cout<<"-----------------------------------------------------"<<endl;
    cout<<"TABLA DE MULTIPLICAR"<<endl;
    cout<<"-----------------------------------------------------"<<endl;

    cout<<"\nINGRESE UN NUMERO: "<<endl; cin>>n;

    for (int i = 0; i <=10; i++)
    {
        cout<<n<<" x "<<i<<" = "<<n*i<<endl;
    }

    return 0;
}

3
*/
/*
#include <iostream>
using namespace std;

//bucle do - while

int main(){

    cout<<"-----------------------------------------------------"<<endl;
    cout<<"MENU REPETITIVO"<<endl;
    cout<<"-----------------------------------------------------"<<endl;

    int opc = 0;
    float n1 = 0, n2 = 0, sm = 0, rs = 0, mp = 0, div = 0;

    do
    {
       cout<<"\nINGRESE EL PRIMER NUMERO: "; cin>>n1;
       cout<<"INGRESE EL SEGUNDO NUMERO: "; cin>>n2;

       cout<<"\n[1] SUMA]"<<endl;
       cout<<"[2] RESTA]"<<endl;
       cout<<"[3] MULTIPLICACION]"<<endl;
       cout<<"[4] DIVISION]"<<endl;
       cout<<"[5] SALIR]"<<endl;
       
       cout<<"\nINGRESE EL NUMERO DE LA OPERACION QUE DESEA REALIZAR: "; cin>>opc;
   

       sm = n1 + n2;
       rs = n1 - n2;
       mp = n1 * n2;
       div = n1 / n2;
    
    
       switch (opc){
       case 1:
            cout<<"\nLA SUMA ES: "<<sm<<endl;
            break;

        case 2:
             cout<<"\nLA RESTA ES: "<<rs<<endl;
             break;
    
        case 3:
             cout<<"\nLA MULTiPLICACION ES: "<<mp<<endl;
             break;
    
        case 4:
             cout<<"\nLA DIVISION ES: "<<div<<endl;
             break;
    
        default:
             cout<<"\nOPCION INVALIDA!"<<endl;
             break;
    }

    } while (opc <= 5);
    
    return 0;
}
*/
/*
#include <iostream>
using namespace std;

//bucle do - while

int main(){

    cout<<"-----------------------------------------------------"<<endl;
    cout<<"FUNCIONES Y DATOS"<<endl;
    cout<<"-----------------------------------------------------"<<endl;

    float a;
    int resultado=0;

    cout<<"INGRESE UN CARACTER: "<<endl; cin>>a;
    resultado = (float)(a/2);
    cout<<"RESULTADO OPERACION : "<<resultado<<endl;

    return 0;
}
*/

//tipo nombreFuncion() <- funcion sin parametros
//tipo nombreFuncion(intx.inty) <- funcion con parametros
//retorno ligado al tipo de funcion
/*
#include <iostream>
using namespace std;
//funcion suma tipo int
/*int suma(){


 int n1, n2, sum=0;
    cout<<"\nINGRESE EL PRIMER NUMERO: "; cin>>n1;
    cout<<"INGRESE EL SEGUNDO NUMERO: "; cin>>n2;
    sum = n1 + n2;
    cout<<"\nEL RESULTADO DE LA SUMA ES: "<<sum<<endl;
}

int resta(){
    int n1, n2, rest=0;
    cout<<"\nINGRESE EL PRIMER NUMERO: "; cin>>n1;
    cout<<"INGRESE EL SEGUNDO NUMERO: "; cin>>n2;
    rest = n1 - n2;
    cout<<"\nEL RESULTADO DE LA RESTA ES: "<<rest<<endl;
}

int mult(){
    int n1, n2, mp=0;
    cout<<"\nINGRESE EL PRIMER NUMERO: "; cin>>n1;
    cout<<"INGRESE EL SEGUNDO NUMERO: "; cin>>n2;
    mp = n1 * n2;
    cout<<"\nEL RESULTADO DE LA MULTIPLICACION ES: "<<mp<<endl;
}

float div(){
    float n1, n2, divi=0;
    cout<<"\nINGRESE EL PRIMER NUMERO: "; cin>>n1;
    cout<<"INGRESE EL SEGUNDO NUMERO: "; cin>>n2;
    divi = n1 / n2;
    cout<<"\nEL RESULTADO DE LA DIVISION ES: "<<divi<<endl;
    

    return divi;
}

int main(){

    cout<<"-----------------------------------------------------"<<endl;
    cout<<"FUNCIONES"<<endl;
    cout<<"-----------------------------------------------------"<<endl;

    cout<<"EL RESULTADO DE LA DIVISION ES: "<<div()<<endl;
    cout<<"\nFUNCION MAIN";

    return 0;
}
*/
/*
#include <iostream>
using namespace std;

int suma(int a,int b){
    
    int sum=0;
    sum = a + b;
    
    return sum;
}

int resta(int a,char x, int b, float z){
    
    int rest=0;
    rest = a - b;
    
    return rest;
}


int main(){

    int a,b;

    cout<<"\nINGRESE EL PRIMER NUMERO: "; cin>>a;
    cout<<"INGRESE EL SEGUNDO NUMERO: "; cin>>b;


    cout<<"RESULTADO DE LA SUMA ES: "<<suma(a,b)<<endl;
    cout<<"RESULTADO DE LA SUMA ES: "<<resta(a,'f',b,2.5)<<endl;

    return 0;
}
*/
/*
#include <iostream>
using namespace std;

float sum(float a, float b){

    float suma = 0;

    suma = a + b;

    return suma;
}

float rest(float a, float b){

    float resta = 0;

    resta = a - b;

    return resta;
}
float mult(float a, float b){

    float mp = 0;

    mp = a * b;

    return mp;
}

float divi(float a, float b){

    float div = 0;

    div = a / b;

    return div;
}

void titulo(){

    cout<<"-----------------------------------------------------"<<endl;
    cout<<"CALCULADORA BASICA!"<<endl;
    cout<<"-----------------------------------------------------"<<endl;
}

int main(){

    float a=0, b=0;
    int opc;

    do
    {
        titulo();

        cout<<"\nINGRESE EL PRIMER NUMERO: "; cin>>a;
        cout<<"INGRESE EL SEGUNDO NUMERO: "; cin>>b;

        cout<<"\n[1] SUMA]"<<endl;
        cout<<"[2] RESTA]"<<endl;
        cout<<"[3] MULTIPLICACION]"<<endl;
        cout<<"[4] DIVISION]"<<endl;
        cout<<"\nINGRESE EL NUMERO DE LA OPERACION QUE DESEA REALIZAR: "; cin>>opc;

        switch (opc){
        case 1:
             cout<<"\nLA SUMA ES: "<<sum(a,b)<<endl;
             break;

        case 2:
             cout<<"\nLA RESTA ES: "<<rest(a,b)<<endl;
             break;
    
        case 3:
             cout<<"\nLA MULTiPLICACION ES: "<<mult(a,b)<<endl;
             break;
    
        case 4:
             cout<<"\nLA DIVISION ES: "<<divi(a,b)<<endl;
             break;
    
        default:
             cout<<"\nOPCION INVALIDA!";
             break;
        }

    } while (opc < 5); 
    return 0;
}
*/
/*
//funciones recursivas
//funcion factorial
#include <iostream>
#define pi = 3.1415

using namespace std;
int factorial (int a){

    if(a == 0 || a == 1 ){
        return 1;
    }else{
        return a * factorial(a-1);
    }
}

int main(){

    cout<<"-----------------------"<<endl;
    cout<<"FACTORIAL DE UN NUMERO!"<<endl;
    cout<<"-----------------------"<<endl;

    int a = 0;
    cout<<"\nESCRIBE UN NUMERO: "; cin>>a;
    cout<<"\nEL FACTORIAL ES: "<<factorial(a)<<endl;

    return 0;
}
*/
/*
#include <iostream>

using namespace std;

int fibonacci (int a){

    if(a == 0){
        return 0;
    }else if(a == 1){
        return 1;  
    }else{
        return fibonacci(a-1) + fibonacci (a-2);
    }
}

int main(){

    cout<<"-----------------------"<<endl;
    cout<<"SERIE DE FIBONACCI!"<<endl;
    cout<<"-----------------------"<<endl;

    int a = 0;
    cout<<"\nESCRIBE UN NUMERO: "; cin>>a;

    if (a==0){
        cout<<"0";
    }else if(a>0){
        for (int i = 0; i <= a; i++){
            cout<<fibonacci(i)<<", ";
        }
    }

    return 0;
}
*/
/*
#include <iostream>

using namespace std;

int division(int a, int b){
    if (b > a){
        return 0;
    }else{
        return division(a-b,b)+1;
    }
}

int main(){

    cout<<"-----------------------"<<endl;
    cout<<"DIVISION RECURSIVA!"<<endl;
    cout<<"-----------------------"<<endl;

    int a , b, r;
    cout<<"\nESCRIBE EL DIVIDENDO: "; cin>>a;
    cout<<"\nESCRIBE EL DIVISOR: "; cin>>b;

    r = division(a,b);

    cout<<"\nLA DIVISION ES: "<<r<<endl;

    return 0;
}
*/

/*#include <iostream>

using namespace std;



int main(){

   
    return 0;
}*/
/*#include<iostream>

using namespace std;
int main(){

    int div = 2,aux = 0,n;

    cout<<"INGRESE UN VALOR: "; cin>>n;

    while (div<n){
        if(n%div){
            aux = 1;
            div = div + 1;
        }else{
            div = div + 1;
        }
    }

    if(aux == 0){
        cout<<"SI";
    }else{
        cout<<"NO";
    }

    return 0;
}*/

#include <stdio.h>

main()
{
	int a,c;

	a = 5;
	c = "c " + a + 5;
   
}
















