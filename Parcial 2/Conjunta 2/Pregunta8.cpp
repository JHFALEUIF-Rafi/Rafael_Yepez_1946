#include <iostream>
using namespace std;

string identificarCadena(const char *cadena)
{
    bool tieneLetras = false;
    bool tieneNumeros = false;

    for (int i = 0; cadena[i] != '\0'; i++)
    {
        char c = cadena[i];

        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        {
            tieneLetras = true;
        }
        else if (c >= '0' && c <= '9')
        {
            tieneNumeros = true;
        }
        else
        {
            return "Contiene caracteres no validos (ni letras ni numeros)";
        }
    }

    if (tieneLetras && tieneNumeros)
    {
        return "La cadena es alfanumerica";
    }
    else if (tieneLetras)
    {
        return "La cadena es alfabetica";
    }
    else if (tieneNumeros)
    {
        return "La cadena es numerica";
    }

    return "La cadena esta vacia o no tiene caracteres validos";
}

int main()
{
    const char *cadena;

    cout << "Ingrese una cadena de caracteres: ";
    char entrada[100];
    cin.getline(entrada, 100);

    cadena = entrada;
    cout << identificarCadena(cadena) << endl;

    return 0;
}
