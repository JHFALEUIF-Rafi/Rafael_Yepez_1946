#include <iostream>
using namespace std;

void ingresaCadena(string& cad1, string& cad2, string& cad3)
{
    cout << "Ingrese cadena: ";
    getline(cin, cad1);

    cout << "¿Que es lo que quiere cambiar?: ";
    getline(cin, cad2);

    cout << "Ingrese la cadena que quiere sustituir: ";
    getline(cin, cad3);
}

void sobreescribir(string& cad1, const string& cad2, const string& cad3)
{
    int size = cad3.size();
    int pos = cad1.find(cad2);
    if (pos != std::string::npos)
        cad1.replace(pos, cad2.size(), cad3);
    std::cout << cad1 << std::endl;
}

