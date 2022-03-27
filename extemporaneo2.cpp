#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <ctime>//para obtener la cantidad de segundos en la hora de su sistema y generar aleatoriamente la función rand()
#include <cstdlib> // libreria para poder usar numeros pseudo aleatorios

/**
*Capitulo 10 problema 1
*
*Escribir un programar que simule el lanzamiento de dos dados
*
**/

//@Autor    ArcaTec
//@Fecha    26 mar 2022
using namespace std;

void  Dados() {
    srand(time(NULL));
    int dado1 = 1 + (rand() % 6);
    int dado2 = 1 + (rand() % 6);
    cout << "se lanzaran dos dados" << endl;
    cout << dado1 << endl << dado2 << endl;
}

int main()
{
    Dados();
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
