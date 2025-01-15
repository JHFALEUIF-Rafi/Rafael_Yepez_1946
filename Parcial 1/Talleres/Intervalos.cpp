#include <iostream>
using namespace std;
/*Jhoel Pallaroso*/

int main() {
    int limiteInferior, limiteSuperior;
    int sumaDentro = 0;
    int contadorFuera = 0;
    bool limiteInferiorIgualado = false, limiteSuperiorIgualado = false;

    cout << "Introduce el limite inferior: ";
    cin >> limiteInferior;
    cout << "Introduce el limite superior: ";
    cin >> limiteSuperior;

    while (limiteSuperior < limiteInferior) {
        cout << "El limite superior debe ser mayor o igual al limite inferior. Intenta de nuevo.\n";
        cout << "Introduce el limite inferior: ";
        cin >> limiteInferior;
        cout << "Introduce el limite superior: ";
        cin >> limiteSuperior;
    }

    int numero;
    cout << "Introduce numeros (0 para terminar):\n";
    while (true) {
        cin >> numero;
        if (numero == 0) {
            break;
        }

        if (numero > limiteInferior && numero < limiteSuperior) {
            sumaDentro += numero;
        } else if (numero < limiteInferior || numero > limiteSuperior) {
            contadorFuera++;
        }

        if (numero == limiteInferior) {
            limiteInferiorIgualado = true;
        }
        if (numero == limiteSuperior) {
            limiteSuperiorIgualado = true;
        }
    }


    cout << "\nResultados:\n";
    cout << "Suma de los numeros dentro del intervalo: " << sumaDentro << endl;
    cout << "Cantidad de numeros fuera del intervalo: " << contadorFuera << endl;
    if (limiteInferiorIgualado) {
        cout << "Se introdujo un numero igual al limite inferior.\n";
    }
    if (limiteSuperiorIgualado) {
        cout << "Se introdujo un numero igual al limite superior.\n";
    }

    return 0;
}
