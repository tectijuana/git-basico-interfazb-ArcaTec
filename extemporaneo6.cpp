#include <iostream>

/**
*Capitulo 7 problema 8
*
*Enlistar todos los numeros compuestos entre 5 y 100. Un numero 
*compuesto es cualquoer entero diferente de 1 que no sea primo
*
**/

//@Autor    ArcaTec
//@Fecha    26 mar 2022
using namespace std;

// funcion para comprobar losnumeros primos o compuestos
int  Primo(int x) {
    bool primo = true;
    // ciclo de comprobacion
    for (int i = 2; i < x; i++) {
        // funcion que comprueba su divicion por modulos para entender si es primo
        if (x % i == 0) {
            primo = false;// 

        }

    }
    // funciones despues del ciclo anterior, en caso de serlo se imprime el numero primo, solo agrepar el cout y el numero que se quiere imprimr
    if (primo == true) {
        NULL;
    }
    // para imprimir todos los numeros compuestos
    else { cout << x << "-"; }

    return 0;
}
void     Cilo_problema() {
    int i = 4;
    int j = 100;
    cout << "Numeros compuestos entre " << i << "y" << j << endl;
    for (; i <= j; i++) {//ciclo de numeros
        Primo(i);// manda llamar a la funcion que comprueba si es un numero primo

    }
}
int main() {
    Cilo_problema();
    return 0;
}
