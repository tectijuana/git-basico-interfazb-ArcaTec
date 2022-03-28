#include <iostream>
#include "iostream"
#include "string"
#include <math.h>
#include <conio.h>


/**
* Capitulo 7 problema 26
*
* imprimir los primeros cincuenta numeros de
* Lucas. Los numeros de Lucas son similares a 
* los  de Fibonacci, aunque la secuencia principia 
* diferentemente: 1, 3, 7, 11, 18, 29, 47, 76,...
*
* */

//@Autor    ArcaTec
//@Fecha    28 mar 2022


using namespace std;

void LucasSerie()// funcion de la sucecion de lucas
{
    double  L; 
    cout << "   Primeros 50 numeros de Lucas:\n";
    for (double i = 1; i <= 50; i++)
    {
        L = pow((1 + sqrt(5)) / 2, i) + pow((1 - sqrt(5)) / 2, i);
        cout << "   L(" <<i<< ") = [" << L<<"] \n";
    }
}
int main()
{
    LucasSerie();//manda a llamar a la funcion de lucas
    return 0;
}