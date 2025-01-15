#include <iostream>
using namespace std;
int main()
{
    int n1, n2;
    char operacion;
    cout << "ingrese primer valor: ";
    cin >> n1;
    cout << "Ingresa segundo valor: ";
    cin >> n2;
    cout << "Ingrese operacion (+, -, *, /):";
    cin >> operacion;
    switch (operacion)
    {
    case '+':
        cout << "El resultado de la suma es: " << n1 + n2 << endl;
        break;
    case '-':
        cout << "El resultado de la resta es: " << n1 - n2 << endl;
        break;
    case '*':
        cout << "El resultado de la multiplicacion es: " << n1 * n2 << endl;
        break;
    case '/':
        if (n2 == 0)
        {
            cout << "\nEl resultado de la divsion es invalido" << endl;
            cout << "No existe division para cero" << endl;
        }
        else
        {
            cout << "El resultado de la division es: " << n1 / n2 << endl;
        }
        break;
    default:
        cout << "\nOperador invalido" << endl;
        cout << "Intente de nuevo" << endl;
        break;
    }
    return 0;
}