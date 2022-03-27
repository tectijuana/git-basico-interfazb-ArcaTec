#include <iostream>

/**
*Capitulo 7 problema 4
*
*Imprimir los numeros primos del 1000 al 1500.
* El programa no debera probar los numeros pares
*
**/

//@Autor    ArcaTec
//@Fecha    26 mar 2022
using namespace std;
// funcion para comprobar losnumeros primos
int  Primo(int x) {
    bool primo =true;
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
    int i = 1000;
    int j = 1500;
    cout << "Numeros primos del ciclo: "<< i<<"-"<<j << endl;
    for (; i <= j; i++) {//ciclo de numeros
        Primo(i);// manda llamar a la funcion que comprueba si es un numero primo
    }
}
int main() {
    Cilo_problema();
    return 0;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
