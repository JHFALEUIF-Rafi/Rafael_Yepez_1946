#include <iostream>
#include "../../Librerias/strings.h"
using namespace std;

int main()
{
    string cad1;
    string cad2;
    string cad3;
    ingresaCadena(cad1, cad2, cad3);
    sobreescribir(cad1, cad2, cad3);
    cout << "La cadena modificada es: " << cad1 << endl;
    return 0;
}