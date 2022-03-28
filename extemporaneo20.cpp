#include <iostream>

/**
* Capitulo 7 problema 2
*
* Introducir un numero y determinar si se trata
* de un primo
*
* */

//@Autor    ArcaTec
//@Fecha    28 mar 2022

using namespace std;

// funcion para comprobar losnumeros primos
int  Primo(int x)
{
    if (x == 1 || x == 0)
    {
        cout << endl << "  Numero invalido " << endl;
        return 0;
    }
    bool primo = true;
    // ciclo de comprobacion
    for (int i = 2; i < x; i++)
    {
        // funcion que comprueba su divicion por modulos para entender si es primo
        if (x % i == 0) {
            primo = false;// 
        }
    }
    // funciones despues del ciclo anterior, en caso de serlo se imprime el numero 
    if (primo == true) {
        cout << endl << "  \"Es un numero primo\"" << endl;
    }
    // en caso de no ser numero primo indica que no lo es
    else {
        cout << endl << "  \"No es numero primo\"" << endl;
    }

    return NULL;
}
int main() {
    int x = 11;
    cout << "  Introducir un numero para  determinar si se trata de un numero primo: ";
    cin >> x;
    Primo(x);
    return 0;
}