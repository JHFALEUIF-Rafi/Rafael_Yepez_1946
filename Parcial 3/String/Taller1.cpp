#include <iostream>
using namespace std;

int main()
{
    string cadena = "informatica";

    // borrar cadena
    cadena.clear();
    cadena = "informatica";

    // longitud de cadena
    cout << "La cadena " << cadena << " tiene " << cadena.length() << " caracteres " << endl;

    // Primer y último caracter
    cout << "Primer caracter: " << cadena.front() << endl;
    cout << "Ultimo caracter: " << cadena.back() << endl;

    // Añadir cadenas
    cadena.append(" moderna"); // cadena +=" moderna"
    cout << cadena << endl;

    // Añadir caracter
    char car = '0';
    cadena.append(1, car);
    cout << cadena << endl;

    cadena = "informatica";

    // Buscar caracteres
    if (cadena.find("i") != -1)
        cout << "Posicion del primer caracter i: " << cadena.find("i") << endl;
    cout << "Posicion del segundo caracter i: " << cadena.find("i", 1) << endl;

    // Extraer cadenas
    string subcad;
    subcad = cadena.substr(2, 3);
    cout << subcad << endl;
    subcad = cadena.substr(5);
    cout << subcad << endl;

    // Reemplazar parte de la cadena
    cadena.replace(6, 5, "accion");
    cout << cadena << endl;
    return 0;
}