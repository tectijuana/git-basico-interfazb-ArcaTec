#include <iostream>

/**
*Capitulo 10 problema 5
* 
*Programar la computadora para que dibuje un cuadrao en la terminal
*
**/

//@Autor    ArcaTec
//@Fecha    26 mar 2022
using namespace std;

void dibujar_cuadrado() {
    short lado;
    cout << "ingrese el lado del cuadrado; ";cin >> lado;
    for (short i = 0; i < lado; i++) {//filas
        for (short j = 0; j < lado; j++) {//columnas
            if (i == 0 || j == 0 || i == lado - 1 || j == lado - 1) {
                cout << "+";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;

    }
}
int main() {
    dibujar_cuadrado();
    return 0;
}
