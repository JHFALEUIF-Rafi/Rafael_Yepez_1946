#include <iostream>
using namespace std;
int main()
{
    int valor, promedio = 0, contador = 0;
    char op = 's';
    while (op == 's' || op == 'S')
    {
        cout << "Deseas ingresar valores (s/n): ";
        op = getchar();
        if (op == 's' || op == 'S')
        {
            cout << "Ingresa un valor: ";
            cin >> valor;
            contador++;
            promedio = promedio + valor;
        }
        else
        {
            break;
        }
        cin.ignore();
    }
    cout << "El promedio del datos ingresados es: " << ((float)promedio / contador) << endl;
    return 0;
}