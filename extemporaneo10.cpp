#include <iostream>
#include "iostream"
#include "string"
#include <math.h>
#include <conio.h>


/**
* Capitulo 7 problema 16
*
* Generar numero primos con el polinomio 
* X=X^2+N+41 cuando x varia de 0 a 40
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
        cout <<"  " << x << " ";
        return primo;
    }
    else {
        
        return primo;
    }

    
}
void  Primos() {
    int i = 0;
    int j = 40;
    double P;

    // ciclo de rango de numeros
    cout << "   Generar numero primos con el polinomio X=X^2+N+41  " << endl;
    for (; i <= j; i++) {//ciclo de numeros

        // funcion de Y(N)=N^2-79N+1601
        P = ((pow(i, 2))+i+41);

        // Manda a llamar a la funcion Primo para comprobar si el numero resltado de la
        // la operacion anterior es numero primo o no lo es
        Primo(P);
    }


}

int main() {
    Primos();
    return 0;
}
