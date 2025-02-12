#include <iostream>
#include <string.h>
using namespace std;

int comparacionesCadena(char cad1[], char cad2[])
{
    return strcmp(cad1, cad2);
}

void copiaCadena(char cad1[], char cad2[])
{
    strcpy(cad1, cad2);
}

void añadeCadena(char cad1[], char cad2[])
{
    strcat(cad1, cad2);
}

bool alfabeticoNumerico(char cad1[])
{
    bool alfaNumerico = true;
    for (int i = 0; i < strlen(cad1); i++)
    {
        if (isalnum(cad1[i]) == false)
        {
            alfaNumerico = false;
            break;
        }
    }
    return alfaNumerico;
}
bool alfabetico(char cad1[])
{
    bool alfa = true;
    for (int i = 0; i < strlen(cad1); i++)
    {
        if (isalpha(cad1[i]) == false)
        {
            alfa = false;
            break;
        }
    }
    return alfa;
}

bool numerico(char cad1[])
{
    bool numerico = true;
    for (int i = 0; i < strlen(cad1); i++)
    {
        if (isdigit(cad1[i]) == false)
        {
            numerico = false;
            break;
        }
    }
    return numerico;
}

bool espacio(char cad1[])
{
    bool espacio = true;
    for (int i = 0; i < strlen(cad1); i++)
    {
        if (isspace(cad1[i]) == false)
        {
            espacio = false;
            break;
        }
    }
    return espacio;
}

bool esmayuscula(char cad1[])
{
    bool mayuscula = true;
    for (int i = 0; i < strlen(cad1); i++)
    {
        if (isupper(cad1[i]) == false)
        {
            mayuscula = false;
            break;
        }
    }
    return mayuscula;
}

bool esminuscula(char cad1[])
{
    bool minuscula = true;
    for (int i = 0; i < strlen(cad1); i++)
    {
        if (islower(cad1[i]) == false)
        {
            minuscula = false;
            break;
        }
    }
    return minuscula;
}

bool mayuscula(char cad1[]){
    bool mayuscula=true;
    for(int i=0;i<strlen(cad1);i++){
        
    }
}

int main()
{
    char cad1[50], cad2[50], cad3[50];
    int comparacion;
    cout << "Ingrese la primera cadena: ";
    cin.getline(cad1, 50);
    cout << "Ingrese la segunda cadena: ";
    cin.getline(cad2, 50);
    comparacion = comparacionesCadena(cad1, cad2);
    cout << "Comparacion: " << comparacion << endl;

    (comparacion == 0) ? cout << "Las cadenas son iguales" : cout << "Las cadenas son diferentes";
    copiaCadena(cad1, cad2);
    cout << "\nCadena copiada:" << cad1;
    añadeCadena(cad1, cad2);
    cout << "\nCadena aniadida: " << cad1;

    (alfabeticoNumerico(cad1)) ? cout << "\nLa cadena " << cad1 << " es alfanumerica" : cout << "\nLa cadena " << cad1 << " no es alfanumerica";
    (alfabetico(cad1)) ? cout << "\nLa cadena " << cad1 << " es alfabetica" : cout << "\nLa cadena " << cad1 << " no es alfabetica";
    (numerico(cad1)) ? cout << "\nLa cadena es numercia" : cout << "\nLa cadena no es numerica";
    (espacio(cad1)) ? cout << "\nLa cadena tiene espacios" : "\nLa cadena no tiene espacios";
    return 0;
}