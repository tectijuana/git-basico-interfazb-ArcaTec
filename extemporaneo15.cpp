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

double Luz(double x) {
    double rest = 300.000 * (31557600 * x);
    return rest;
}
int main()
{
    double x;
    cout<< " Ingrese la los años que quiere evaluar el recorrido de la luz: ";;
    cin >>x  ;
    cout <<"\n " << Luz(x) <<" Km\n";
}

