#include <iostream>
using namespace std;

bool esAbundante(int numero)
{
    int suma = 0;
    for (int i = 1; i < numero; i++)
    {
        if (numero % i == 0)
        {
            suma += i;
        }
    }
    return suma > numero;
}

bool esDeficiente(int numero)
{
    int suma = 0;
    for (int i = 1; i < numero; i++)
    {
        if (numero % i == 0)
        {
            suma += i;
        }
    }
    return suma < numero;
}

bool sonAmigos(int a, int b)
{
    int sumaA = 0, sumaB = 0;
    for (int i = 1; i < a; i++)
    {
        if (a % i == 0)
        {
            sumaA += i;
        }
    }
    for (int i = 1; i < b; i++)
    {
        if (b % i == 0)
        {
            sumaB += i;
        }
    }
    return sumaA == b && sumaB == a && a != b;
}

void mostrarMenu()
{
    bool entrar = true;
    while (entrar)
    {
        int op, cantNumeros;
        cout << "Menu de Opciones" << endl;
        cout << "1. Numeros Abundantes" << endl;
        cout << "2. Numeros Deficientes" << endl;
        cout << "3. Numeros Amigos" << endl;
        cout << "4. Salir" << endl;
        cout << "Ingresa una opcion: ";
        cin >> op;

        if (op >= 1 && op <= 3)
        {
            cout << "Ingrese la cantidad de numeros: ";
            cin >> cantNumeros;
        }

        switch (op)
        {
        case 1:
        {
            int contador = 0, numero = 2;
            while (contador < cantNumeros)
            {
                if (esAbundante(numero))
                {
                    cout << "Abundante: " << numero << endl;
                    contador++;
                }
                numero++;
            }
            break;
        }
        case 2:
        {
            int contador = 0, numero = 2;
            while (contador < cantNumeros)
            {
                if (esDeficiente(numero))
                {
                    cout << "Deficiente: " << numero << endl;
                    contador++;
                }
                numero++;
            }
            break;
        }
        case 3:
        {
            int contador = 0, numero = 2;
            while (contador < cantNumeros)
            {
                int sumaA = 0;
                for (int i = 1; i < numero; i++)
                {
                    if (numero % i == 0)
                    {
                        sumaA += i;
                    }
                }
                if (sumaA > numero && sonAmigos(numero, sumaA))
                {
                    cout << "Pareja de numeros Amigos: " << numero << " y " << sumaA << endl;
                    contador++;
                }
                numero++;
            }
            break;
        }
        case 4:
            entrar = false;
            cout << "Saliendo..." << endl;
            break;
        default:
            cout << "Operación no valida" << endl;
            break;
        }
        system("pause");
        system("cls");
    }
}

int main()
{
    mostrarMenu();
    return 0;
}
