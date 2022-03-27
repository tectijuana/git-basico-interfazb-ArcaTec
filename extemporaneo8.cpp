#include <iostream>
#include "iostream"
#include "string"
#include <math.h>
#include <conio.h>


/**
*Capitulo 7 problema 12
*
* Imprimir una tabla de numeros primos. 
Usar la formla P=N^2-N+41
*
*
**/

//@Autor    ArcaTec
//@Fecha    27 mar 2022
using namespace std;

// funcion para los numeros primos
void  Primos() {
    int i = 1;
    int j = 40;
    double P;
    // ciclo de comp

    cout << "Numeros primos formula P=3N^2-3N+23  " << endl;
    for (; i <=j; i++) {//ciclo de numeros


        P = ((pow(i, 2)) - i +41);
        cout <<i<<"=" << P << endl;
    }


}
int main() {
    Primos();
    return 0;
}