#include <iostream>
#include "iostream"
#include "string"
#include <math.h>
#include <conio.h>


/**
* Capitulo 7 problema 20
*
* Se ha conjeturado que existe una gran cantidad de numero primos 
* de la formula  n^n+ 1. Por ejemplo , 1+1=2(un primo) y 2^2+1=5 (un primo). 
* Determinar para cada valor n=1,2,..,7 si n^n+1 es o no primo
*
* */

//@Autor    ArcaTec
//@Fecha    27 mar 2022
using namespace std;

// funcion para los numeros primos
int  Primo(int x)
{
    bool primo = true;
    // ciclo de comprobacion
    for (int i = 2; i < x; i++)
    {
        // funcion que comprueba su divicion por modulos para entender si es primo
        if (x % i == 0) {
            primo = false;// 

        }

    }
    // funciones despues del ciclo anterior, en caso de serlo se imprime el numero 
    if (primo == true) {
        cout << " El resultado: " << x << "  \"Es un numero primo\"" << endl;
    }
    // en caso de no ser numero primo indica que no lo es
    else {
        cout << " El resultado: " << x << "  \"No es numero primo\"" << endl;
    }

    return NULL;
}
void  Primos() {
    int i = 1;
    int j = 7;
    double P;

    // ciclo de rango de numeros
    cout << "   Numeros primos formula n^n+ 1; \n   n=1,..,7\n " << endl;
    for (; i <= j; i++) {//ciclo de numeros

        // funcion de Y(N)=N^2-79N+1601
        P = ((pow(i, i)) +1);
        cout << "   Para n = " << i << ";  ";
        // Manda a llamar a la funcion Primo para comprobar si el numero resltado de la
        // la operacion anterior es numero primo o no lo es
        Primo(P);
    }


}

int main() {
    Primos();
    return 0;
}
