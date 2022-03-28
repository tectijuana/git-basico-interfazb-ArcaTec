#include <iostream>
#include "iostream"
#include "string"
#include <math.h>
#include <conio.h>


/**
* Capitulo 7 problema 25
*
* En el primer termino de la serie de 
* Fibonacci mayor que 10,000. Sol este 
* termino se imprimira con el programa
*
* */

//@Autor    ArcaTec
//@Fecha    27 mar 2022

using namespace std;

int fibonacchi(int x) {//Funcion de fibonacci

    unsigned long long aux = 1, fib = 0, CantidadNum = x, init=1;// asignaciones principales de los numeros donde comienza la serie
    
    while (true) //funcion de fibonacci en este caso infinita con un break para romper usando un if
    {           // en caso de querer imprimir un ciclo en particular, un termino o a partir de encontrar 
                //se pueda romper
        aux += fib; // lo mismo que aux = aux + fib; 
        fib = aux - fib;
        if (fib >= 10000)// funcion para que al encontrar el primer termino igual mayor de 10000 se termime
        {                // el ciclo e imprima cual posicion tiene como el temino de fibonacci encontrado 
            cout << "   Posicion [" << init << "] = ";
            cout << "[" << fib << "]\n";
            break;
        }
        init++;
    }
    return 0;
}
int main()
{
    int x = 30;
    cout << "   Primer termino de la serie de Fibonacci mayor que 10000:\n\n";
    // Se manda a llamar la funcion de fibonacci
    fibonacchi(x);
}