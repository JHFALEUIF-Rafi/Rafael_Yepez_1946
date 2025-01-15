#include <iostream>
using namespace std;

int potencia(int a, int b)
{
    if (b == 0)
        return 1;
    else
        return a * potencia(a, b-1);
}

int main()
{
    int a, b;
    cout << "Introduce la base: ";
    cin >> a;
    cout << "Introduce el exponente: ";
    cin >> b;

    cout << "El resultado de la operacion es: " << potencia(a, b) << endl;
    return 0;
}