/*Pregunta 7
Rafael Yépez*/
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n; 
    cout << "Ingrese el número de términos de la serie: ";
    cin >> n;

    double X = 0.0; 
    int i = 1; 

    while (i <= n) {
        
        double numerador = (i % 2 == 1) ? (2 * i - 1) : (3 * i);
        double denominador = (i % 2 == 1) ? (2 * i - 1) : (i + 2);

        if (i % 2 == 1) {
            X += numerador / denominador;
        } else {
            X -= numerador / denominador;
        }

        i++; 
    }

    cout << "El valor de X es: " << X << endl;
    return 0;
}


