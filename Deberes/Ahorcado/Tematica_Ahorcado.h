#include <iostream>
#include <string>
using namespace std;

void deportes(string deportes[])
{
    string deportesx[5] = {"Futbol", "Tenis", "Baloncesto", "Voley", "Natacion"};
    for (int i = 0; i < 5; i++)
        deportes[i] = deportesx[i];
}

void animales(string animales[])
{
    string animalesx[5] = {"Perro", "Gato", "Conejo", "Tigre", "Leon"};
    for (int i = 0; i < 5; i++)
        animales[i] = animalesx[i];
}

void frutas(string frutas[])
{
    string frutasx[5] = {"Manzana", "Naranja", "Pera", "Platano", "Uva"};
    for (int i = 0; i < 5; i++)
        frutas[i] = frutasx[i];
}

void paises(string paises[])
{
    string paisesx[5] = {"Ecuador", "Argentina", "Checoslovaca", "Mexico", "Rusia"};
    for (int i = 0; i < 5; i++)
        paises[i] = paisesx[i];
}

void videojuegos(string videojuegos[])
{
    string videojuegosx[5] = {"Booldborne", "Halo", "Persona", "Outlast", "Splatoon"};
    for (int i = 0; i < 5; i++)
        videojuegos[i] = videojuegosx[i];
}