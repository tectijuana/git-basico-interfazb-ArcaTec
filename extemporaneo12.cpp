
#include <iostream>
#include "iostream"
#include "string"
#include <math.h>
#include <conio.h>


/**
*Capitulo 7 problema 23
*
*En el siglo XIII, Leonardo Fibonacci, un mercader 
*propero de Italia, a quien le fascinaban los 
*numeros, descubiro  lo que se conocer ahora 
*como la serie numerica de fibonacci. Cada 
*numero de esta serie es la suma de los dos 
*numeros que lo proceden inmediatamente. 
*Los primeros pocos numeros de esa secuencia son: 
*1,1,2,3,5,8,13,21,34,55,89,144,.. 
*Encontrar los primeros treintanumeros en esta secuencia.
*
**/

//@Autor    ArcaTec
//@Fecha    27 mar 2022

using namespace std;
//Funcion de fibonacci
int fibonacchi(int x) {
    // asignaciones principales de los numeros donde comienza la serie
    unsigned long long aux = 1, fib = 0, CantidadNum = x, init;
    // ciclo donde se evalua, comienza con 0 y 1 y se repite hasta la
    // cantidad de numeros que se quiere sacar
    for (init = 1; init <= CantidadNum; init++) {
       
        aux += fib; /* lo mismo que aux = aux + fib; */
        fib = aux - fib;
        cout << "[" << fib << "]\n";
    }
    return 0;
}
int main()
{
    int x = 30;
    cout << "Serie de fibonacci primeros "<<x<<" numeros:\n";
    // Se manda a llamar la funcion de fibonacci
    fibonacchi(x);
}