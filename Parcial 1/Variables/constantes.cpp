#include <iostream>
#define GRAVITY 9.81
using namespace std;
main()
{
    const int altura = 25;
    const float pi = 3.1416;
    const char letra = 'a';
    const string palabra = "hola guorld";
    enum colores {amarillo, azul, rojo};
    cout << "las constantes definidas son:\n";
    cout << "altura = " << altura << endl;
    cout << "pi = " << pi << endl;
    cout << "letra = " << letra << endl;
    cout << "palabra = " << palabra << endl;
    cout << "amarillo = " << amarillo << endl;
    cout << "azul = " << azul << endl;
    cout << "rojo = " << rojo << endl;
    cout << "La gravedad es:" << GRAVITY << endl;
    return 0;
}

