/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>

using namespace std;

int main() {
    short lado;
    cout << "ingrese el lado del cuadrado; ";cin >> lado;
    for (short i = 0; i < lado; i++) {//filas
        for (short j = 0; j < lado; j++) {//columnas
            if (i == 0 || j == 0|| i == lado - 1 || j == lado - 1) {
                cout << "+";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
        
    }
    return 0;
}