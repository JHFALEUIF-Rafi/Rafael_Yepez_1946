#include <iostream>
using namespace std;

int main()
{
    string cadena1 = {"informatica"};
    string cadena2(cadena1); // cadena2 = cadena 1<en
    string cadena3(10, '*');
    string cadena4;
    const char *auxiliar;

    cadena1.push_back('X'); // Añade un caracter al final
    cout << cadena1;

    cadena1.at(0) = 'I'; // Accede a un indice de la cadena
    cout << cadena1 << endl;

    cadena1.front() = 'i';
    cadena1.back() = 'A';
    cout << cadena1 << endl;

    auxiliar = cadena1.c_str(); // convierte un array de tipo string a un array char
    cout << "Aucliliar array char: " << auxiliar << endl;
    (cadena4.empty()) ? cout << "Cadena vacia\n" : cout << "Cadena no vacia\n";

    // tamaño de caracteres que puede almacenar la cadena
    cout << "Tamaño maximo: " << cadena1.max_size() << endl;
    
    //tamaño de bytes del objeto string que ocupa actualmente
    cout << "Capacidad: " << cadena1.capacity() << endl;
    
    return 0;
}