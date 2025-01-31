#include <iostream>
using namespace std;
void operaciones(float a, float b, float suma, float resta, float multiplicacion, float division, int resultado)
{
    suma = a + b;
    resta = a - b;
    multiplicacion = a * b;
    division = a / b;
    resultado = (int)a % (int)b;
}

int main()
{
    float x, y, suma, resta, multiplicaion, division;
    int residuo;
    cout << "Ingrese primer numero: ";
    cin >> x;
    cout << "Ingrese segundo valor: ";
    cin >> y;

    operaciones(x, y, suma, resta, multiplicaion, division, residuo);
    cout << "La suma de los numeros es: " << suma << endl;
    cout << "La resta de los numeros es: " << resta << endl;
    cout << "La multiplicacion de los numeros es: " << resta << endl;
    cout << "La division de los numeros es: " << division << endl;
    cout << "El residuo de los numeros es: " << residuo << endl;
    return 0;
}