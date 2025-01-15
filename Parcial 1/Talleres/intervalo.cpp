/*Rafael Yépez
NRC: 1946*/
#include <iostream>
using namespace std;

int main()
{
    int li, ls, num, sumadentro = 0, contadorfuera = 0;
    bool limsigualado = false, limigigualado = false;
    char op;

    cout << "Ingrese limite inferior: ";
    cin >> li;
    cout << "Ingrese limite superior: ";
    cin >> ls;

    while (ls < li)
    {
        cout << "El límite superior debe ser mayor o igual al inferior" << endl;
        cout << "Ingrese limite inferior: ";
        cin >> li;
        cout << "Ingrese limite superior: ";
        cin >> ls;
    }

    while (true)
    {
        cout << "¿Desea ingresar un valor? (s/n): ";
        cin >> op;

        if (op == 's' || op == 'S')
        {
            cout << "Ingrese valor: ";
            cin >> num;

            if (num == 0) 
            {
                break;
            }

            if (num > li && num < ls)
            {
                sumadentro += num; 
            }
            else if (num < li || num > ls)
            {
                contadorfuera++; 
            }

            if (num == li)
            {
                limigigualado = true;
            }
            if (num == ls)
            {
                limsigualado = true;
            }
        }
        else if (op == 'n' || op == 'N')
        {
            break; 
        }
        else
        {
            cout << "Opción no válida." << endl;
        }
    }
    cout << "\nResultados:" << endl;
    cout << "La suma de los numeros dentro del intervalo es: " << sumadentro << endl;
    cout << "La cantidad de numeros fuera del intervalo es: " << contadorfuera << endl;

    if (limigigualado)
    {
        cout << "Se ingresó un número igual al límite inferior." << endl;
    }
    if (limsigualado)
    {
        cout << "Se ingresó un número igual al límite superior." << endl;
    }

    return 0;
}
