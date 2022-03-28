#include <iostream>
#include "iostream"
#include "string"
#include <math.h>
#include <conio.h>


/**
* Capitulo 8 problema 23
*
* Una mujer arroja su libro de bolsillo desde lo
* alto de la torre de Sears (con 1451 pies de 
* altura). Escribir un programa para determinar 
* la velocidad de impacto al nivel del piso. Usar la
* formula V=sqr(2gh), donde la h es la altura de la
* la torre y g = 32 pies / seg^2 es la constante
* gravitacional de la Tierra
*
* */

//@Autor    ArcaTec
//@Fecha    27 mar 2022

using namespace std;

void  Vel() {// funcion de la velocidad
    int h = 1451;
    int g = 32;
    double V;
    V = sqrt((2*g*h));
    // ciclo de rango de numeros
    cout << "   Velocidad de impacto al nivel del piso es: \" "<< V<<"m/s \"" << endl;   
}

int main() {
    Vel();
    return 0;
}
