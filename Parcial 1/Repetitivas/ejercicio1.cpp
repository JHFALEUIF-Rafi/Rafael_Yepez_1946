#include <iostream>
using namespace std;
int main()
{
    int n, dato, contador, s;
    cout << "Ingresa cuantos datos vas a ingresar: ";
    cin >> n;
    contador = 0;
    s = 0;
    while (contador < n)
    {
        cout << "Ingresa un valor: ";
        cin >> dato;
        contador++;
        s = s + dato;
    }
    cout << "La suma de " << n << " valores " << " = " << s << endl;
    return 0;
}