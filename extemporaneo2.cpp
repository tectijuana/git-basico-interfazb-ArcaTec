#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <ctime>//para obtener la cantidad de segundos en la hora de su sistema y generar aleatoriamente la función rand()
#include <cstdlib> // libreria para poder usar numeros pseudo aleatorios

/**
* Capitulo 10 problema 1
*
* Escribir un programar que simule el lanzamiento de dos dados
*
* */

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
