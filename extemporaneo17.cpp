#include <iostream>
#include "iostream"
#include "string"
#include <math.h>
#include <conio.h>


/**
* Capitulo 7 problema 32
*
* Generar e imprimir las primeras quince filas 
* del triangulo Pascal. Imprimir los resultados
* en la distribucion tabular siguiente:
* 1
* 1 1
* 1 2 1
* 1 3 3 1
*
* */

//@Autor    ArcaTec
//@Fecha    27 mar 2022

using namespace std;

double factorial(double n)
{
    if (n < 2)
        return 1;
    else
        return n * factorial(n - 1);
}

double combinacion(double n, double r)
{
    if (r == 1)
        return n;
    else
    {
        if (n == r)
            return 1;
        else
            return factorial(n) / (factorial(r) * factorial(n - r));
    }
}

int main()
{
    for (double i = 0; i < 15; i++)
    {
        for (double ii = 0; ii <= i; ii++)
            cout << combinacion(i, ii) << "  ";
        cout << endl;
    }
    return 0;
}
