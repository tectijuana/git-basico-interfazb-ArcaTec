#include <iostream>

/**
*Capitulo 7 problema 5
*
*El año 1973 lo recordaran muchos aficionados a la Matematica, pues se trata 
+de un numero primo.Generar todos los numeros primos en el periodo 1972-2000
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
    if (primo == true) { cout << x << "-";
    }
    else { NULL; }

    return 0;
}
void     Cilo_problema() {
    int i = 1972;
    int j = 2000;
    cout << "Numeros primos en el periodo " << i << "-" << j << endl;
    for (; i <= j; i++) {//ciclo de numeros
        Primo(i);// manda llamar a la funcion que comprueba si es un numero primo
        
    }
}
int main() {
    Cilo_problema();
    return 0;
}