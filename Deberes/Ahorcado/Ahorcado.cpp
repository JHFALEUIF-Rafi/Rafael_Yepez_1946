#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Tematica_Ahorcado.h"
using namespace std;

string palabraAleatoria(string palabras[])
{
    int numero = rand() % 5;
    return palabras[numero];
}

void mostrarAhorcado(int intentos)
{
    switch (intentos)
    {
    case 0:
        cout << " _______\n";
        cout << "|       |\n";
        cout << "|\n";
        cout << "|\n";
        cout << "|\n";
        cout << "|\n";

        break;
    case 1:
        cout << " _______\n";
        cout << "|       |\n";
        cout << "|       O\n";
        cout << "|\n";
        cout << "|\n";
        cout << "|\n";
        break;
    case 2:
        cout << " _______\n";
        cout << "|       |\n";
        cout << "|       O\n";
        cout << "|       |\n";
        cout << "|\n";
        cout << "|\n";
        break;
    case 3:
        cout << " _______\n";
        cout << "|       |\n";
        cout << "|       O\n";
        cout << "|      /|\n";
        cout << "|\n";
        cout << "|\n";
        break;
    case 4:
        cout << " _______\n";
        cout << "|       |\n";
        cout << "|       O\n";
        cout << "|      /|\\\n";
        cout << "|\n";
        cout << "|\n";
        break;
    case 5:
        cout << " _______\n";
        cout << "|       |\n";
        cout << "|       O\n";
        cout << "|      /|\\\n";
        cout << "|      /\n";
        cout << "|\n";

        break;
    case 6:
        cout << " _______\n";
        cout << "|       |\n";
        cout << "|       O\n";
        cout << "|      /|\\\n";
        cout << "|      / \\\n";
        cout << "|\n";
        break;
    case 7:
        cout << " _______\n";
        cout << "|       |\n";
        cout << "|       O\n";
        cout << "|      /|\\\n";
        cout << "|      / \\\n";
        cout << "|     RIP\n";
        break;
    }
}

int opciones()
{
    int op;
    cout << "1. Deportes" << endl;
    cout << "2. Animales" << endl;
    cout << "3. Frutas" << endl;
    cout << "4. Paises" << endl;
    cout << "5. Videojuegos" << endl;
    cout << "Elige una opcion: ";
    cin >> op;
    return op;
}

void jugarAhorcado()
{
    srand(time(NULL));
    string words[5], palabraSeleccionada;
    int op;
    bool juegoActivo = true;

    cout << "--- Juego del Ahorcado ---" << endl;
    op = opciones();

    if (op == 1)
        deportes(words);
    else if (op == 2)
        animales(words);
    else if (op == 3)
        frutas(words);
    else if (op == 4)
        paises(words);
    else if (op == 5)
        videojuegos(words);
    else
    {
        cout << "Opción no valida." << endl;
        return;
    }

    palabraSeleccionada = palabraAleatoria(words);
    string palabraCamuflada(palabraSeleccionada.length(), 'X');
    int intentosFallidos = 0;
    const int maxIntentos = 7;
    bool adivinada = false;

    while (juegoActivo)
    {
        cout << "\nPalabra: " << palabraCamuflada << endl;
        mostrarAhorcado(intentosFallidos);
        cout << "Intentos restantes: " << maxIntentos - intentosFallidos << endl;
        cout << "Ingresa una letra: ";
        char letra;
        cin >> letra;

        bool acierto = false;
        for (size_t i = 0; i < palabraSeleccionada.length(); ++i)
        {
            if (tolower(palabraSeleccionada[i]) == tolower(letra))
            {
                palabraCamuflada[i] = palabraSeleccionada[i];
                acierto = true;
            }
        }

        if (!acierto)
        {
            intentosFallidos++;
            cout << "Letra incorrecta." << endl;
        }
        else
        {
            cout << "¡Adivinaste una letra!" << endl;
        }

        if (palabraCamuflada == palabraSeleccionada)
        {
            cout << "\n¡Felicidades! Has adivinado la palabra: " << palabraSeleccionada << endl;
            adivinada = true;
            juegoActivo = false;
        }
        else if (intentosFallidos >= maxIntentos)
        {
            cout << "\nHas perdido. La palabra correcta era: " << palabraSeleccionada << endl;
            juegoActivo = false;
        }
    }
}

int main()
{
    jugarAhorcado();
    return 0;
}
