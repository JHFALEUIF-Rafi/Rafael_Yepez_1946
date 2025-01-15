#include <iostream>
using namespace std;

int factoriali(int n)
{
    int resultado = 1;
    for (int i = 1; i <= n; i++)
        resultado *= i;
    return resultado;
}

int factorialr(int n)
{
    if (n == 0)
        return 1;
    else
        return n * factorialr(n - 1);
}

int main()
{
    int numero;
    cout << "Introduce un numero entero: ";
    cin >> numero;
    cout << "El factorial iterativo de " << numero << " es " << factoriali(numero) << endl;
    cout << "El factorial recursivo  de " << numero << " es " << factorialr(numero) << endl;
    return 0;
}