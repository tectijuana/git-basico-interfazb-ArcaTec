#include <iostream>
#include "iostream"
#include "string"
#include <math.h>
#include <conio.h>


/**
*Capitulo 7 problema 19
*
*Fermat, probablemente el mas grande matematico 
*frances del siglo XVII, propuso que todos los 
*numeros de la forma 2^(2n)+1, donde n=0,1,2,..., 
*son primos. Demostrar que esto es cierto para
*n=1,2,3,4, pero no para n=5.
*
**/

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
    int j = 5;
    double P;

    // ciclo de rango de numeros
    cout << "   Numeros primos formula n^(2n)+ 1; \n   n=1,..,5\n " << endl;
    for (; i <= j; i++) {//ciclo de numeros

        // funcion de Y(N)=N^2-79N+1601
        P = ((pow(2, (2*i))) + 1);
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