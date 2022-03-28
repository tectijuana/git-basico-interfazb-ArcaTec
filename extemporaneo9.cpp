#include <iostream>
#include "iostream"
#include "string"
#include <math.h>
#include <conio.h>


/**
* Capitulo 7 problema 14
*
* La formula Y(N)=N^2-79N+1601 puede usarse para generar prumos dentro de un rango limitado.
* Determinar cada valor de N= 1,2,3,...,100 si Y(N) es un numero primo o no lo es.
*
* */

//@Autor    ArcaTec
//@Fecha    27 mar 2022
using namespace std;


int  Primo(int x)// funcion para los numeros primos
{
    bool primo = true;
    // ciclo de comprobacion
    for (int i = 2; i < x; i++)
    {
        
        if (x % i == 0) {// funcion que comprueba su divicion por modulos para entender si es primo
            primo = false;

        }

    }
    // funciones despues del ciclo anterior, en caso de serlo se imprime el numero 
    if (primo == true) { cout <<" El resultado: " << x << "  \"Es un numero primo\"" << endl;
    }
    else { cout << " El resultado: " << x << "  \"No es numero primo\"" << endl;
    }

    return NULL;
}
void  Primos() {
    int i = 1;
    int j = 100;
    double P;
    
// ciclo de rango de numeros
    cout << "   Numeros primos formula Y(N)=N^2-79N+1601  " << endl;
    for (; i <= j; i++) {//ciclo de numeros

        // funcion de Y(N)=N^2-79N+1601
        P = ((pow(i, 2)) - 79*i + 1601);
        cout << "   Para N = " << i << ";  ";
        // Manda a llamar a la funcion Primo para comprobar si el numero resltado de la
        // la operacion anterior es numero primo o no lo es
        Primo(P);
    }

    
}

int main() {
    Primos();
    return 0;
}
