#include <iostream>
#include "iostream"
#include "string"
#include <math.h>
#include <conio.h>


/**
*Capitulo 7 problema 12
*
* Usar la formula 3N^2 -3N +23 paara construir una 
*tabla de numeros primos. Variar a N de 0 a 22.
*
*
*/

//@Autor    ArcaTec
//@Fecha    26 mar 2022
using namespace std;

// funcion para comprobar losnumeros primos o compuestos
void  Primos() {
    int i = 0;
    int j = 23;
    double formula;
    // ciclo de comp
    
    cout << "Numeros primos formula 3N^2-3N+23  " << endl; 
    for (; i <j; i++) {//ciclo de numeros


         formula = (3 * (pow(i, 2)) - 3 * i + 23);
        cout << formula << "-";
        cout << endl;
    }
    

}
int main() {
    Primos();
    return 0;
} 