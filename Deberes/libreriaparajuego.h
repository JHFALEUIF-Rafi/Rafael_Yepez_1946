#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
namespace gen
{
    int generarNumero()
    {
        return rand() % 100 + 1;
    }
    void jugar(int cantidad) {
    srand(time(0)); 
    int numeros[cantidad];
    
    for (int i = 0; i < cantidad; i++) {
        numeros[i] = generarNumero();
    }
    
    int indiceAleatorio = rand() % cantidad;
    int numeroAdivinar = numeros[indiceAleatorio];
    int intento;
    
    cout << "He generado " << cantidad << " numeros entre 1 y 100. ¡Adivina cuál elegí!" << endl;
    
    do {
        cout << "Ingresa tu intento: ";
        cin >> intento;
        
        if (intento > numeroAdivinar) {
            cout << "Muy alto. Intenta de nuevo." << endl;
        } else if (intento < numeroAdivinar) {
            cout << "Muy bajo. Intenta de nuevo." << endl;
        } else {
            cout << "Has adivinado el número." << endl;
        }
    } while (intento != numeroAdivinar);
}
}

