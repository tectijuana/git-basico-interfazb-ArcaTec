#include <iostream>
#include "iostream"
#include "string"
#include <math.h>
#include <conio.h>


/**
* Capitulo 8 problema 2
*
* Encontrar la distancia que recorre la luz
* en X años
*
* */

//@Autor    ArcaTec
//@Fecha    27 mar 2022

using namespace std;

double Luz(double x) {// funcion para determinar la distancia que se recorre
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
