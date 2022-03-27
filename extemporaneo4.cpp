#include <iostream>

/**
*Capitulo 7 problema 6
*
*Calcular e imrpimir todos los numeros primos
*consecutivos(tales como 11 y 13, 21 y 23) menores que 1000
*
**/

//@Autor    ArcaTec
//@Fecha    26 mar 2022

using namespace std;

// funcion para comprobar losnumeros primos
int  Primo(int x) {
    bool primo = true;
    // ciclo de comprobacion
    for (int i = 2; i < x; i++) {
        // funcion que comprueba su divicion por modulos para entender si es primo
        if (x % i == 0) {
            primo = false;// 

        }

    }
    // funciones despues del ciclo anterior, en caso de serlo se imprime el numero 
    if (primo == true) { cout << x << "-"; }
    else { NULL; }

    return 0;
}
void     Cilo_problema() {
    int i = 2;
    int j = 1000;
    cout << "Numeros primos consecutivos menores que " << j << endl;
    for (; i <= j; i++) {//ciclo de numeros
        Primo(i);// manda llamar a la funcion que comprueba si es un numero primo
    }
}
int main() {
    Cilo_problema();
    return 0;
}