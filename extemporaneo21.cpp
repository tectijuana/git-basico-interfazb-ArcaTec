#include <iostream>

/**
* Capitulo 7 problema 1
*
* Un numero primo es cualquier numero que no 
* puede dividirse exactamente entre otro, 
* excepto entre si mismo y la unidad. por 
* ejemplo 1, 2, 3, 5, 7, 11, 13, 17 son primos. 
* Encontrar todos los primos enre 2 y 400
*
* */

//@Autor    ArcaTec
//@Fecha    28 mar 2022

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
    //  en caso de serlo se imprime el numero 
    if (primo == true) { cout << "   ["<< x << "]"<<endl; }
    else { NULL; }

    return 0;
}
void     Cilo_problema() {
    int i = 2;
    int j = 400;
    cout << "   Numeros primos entre " << i << "y " << j << endl;
    for (; i <= j; i++) {//ciclo de numeros
        Primo(i);// manda llamar a la funcion que comprueba si es un numero primo
    }
}
int main() {
    Cilo_problema();
    return 0;
}