//Rafael Yépez 
#include <iostream>
using namespace std;

void llenarCadena(char cad[], int n = 50)
{
    cout << "Ingresa una cadena de caracteres: ";
    cin.getline(cad, n);
    cin.clear();
}

int longitudCadena(char cad[])
{
    int contador;
    for (int i = 0; cad[i] != '\0'; i++)
    {
        contador++;
    }
    return contador;
}

int contarPalabras(char cad[])
{
    int palabras = 0, caracteres = 0;
    bool bandera = false;

    for (int i = 0; cad[i] != '\0'; i++)
    {
        if (cad[i] != ' ')
        {
            if (!bandera)
            {
                bandera = true;
                caracteres = 1;
            }
            else
            {
                caracteres++;
            }
        }
        
        else
        {
            if (bandera && caracteres > 1)
            {
                palabras++;
            }
            bandera = false;
            caracteres = 0;
        }
    }

    if (bandera && caracteres > 1)
    {
        palabras++;
    }

    return palabras;
}

void imprimir()
{
    char palabras[50];
    llenarCadena(palabras);
    cout << "La cadena ingresada es: " << palabras << endl;
    cout << "la longitud de la cadena es: " << longitudCadena(palabras) << endl;
    cout << "La cantidad de palabras es: " << contarPalabras(palabras) << endl;
}

int main()
{
    imprimir();
    return 0;
}