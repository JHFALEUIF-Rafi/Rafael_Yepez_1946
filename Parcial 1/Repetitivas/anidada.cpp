#include <iostream>
using namespace std;
int main()
{
    bool entrar = true;
    int op, cantNumeros, contador, nverificador, contverificador, suma = 0;

    while (entrar)
    {
        cout << "Menu de Opciones" << endl;
        cout << "1. Numeros Abundantes" << endl;
        cout << "2. Numeros Deficientes" << endl;
        cout << "3. Numeros Amigos" << endl;
        cout << "4. Salir" << endl;
        cout << "Ingresa una opcion: ";
        cin >> op;
        if (op > 0 && op < 4)
        {
            cout << "Ingrese la cantidad de numeros: ";
            cin >> cantNumeros;
            contador = 0;
            nverificador = 2;
        }

        switch (op)
        {
        case 1:
            while (contador < cantNumeros)
            {
                contverificador = 1;
                suma = 0;
                while (contverificador < nverificador)
                {
                    if (nverificador % contverificador == 0)
                    {
                        suma = suma + contverificador;
                    }
                    contverificador++;
                }

                if (suma > nverificador)
                {
                    cout << "Abundante: " << nverificador << endl;
                    contador++;
                }
                nverificador++;
            }
            break;
        case 2:
            while (contador < cantNumeros)
            {
                contverificador = 1;
                suma = 0;
                while (contverificador < nverificador)
                {
                    if (nverificador % contverificador == 0)
                    {
                        suma = suma + contverificador;
                    }
                    contverificador++;
                }
                if (suma < nverificador)
                {
                    cout << "Deficiente: " << nverificador << endl;
                    contador++;
                }
                nverificador++;
            }
            break;
        case 3:
            while (contador < cantNumeros)
            {
                int sumaA = 0, sumaB = 0;
                contverificador = 1;
                while (contverificador < nverificador)
                {
                    if (nverificador % contverificador == 0)
                    {
                        sumaA = sumaA + contverificador;
                    }
                    contverificador++;
                }
                contverificador = 1;
                while (contverificador < sumaA)
                {
                    if(sumaA % contverificador == 0)
                    {
                        sumaB = sumaB + contverificador;
                    }
                    contverificador++;
                }
                if (nverificador != sumaA && sumaB == nverificador && nverificador < sumaA)
                {
                    cout << "Pareja de numeros Amigos: " << nverificador << " y " << sumaA << endl;
                    contador++;
                }
                nverificador++;
            }
            break;
        case 4:
            entrar = false;
            cout << "Saliendo" << endl;
            break;
        default:
            cout << "Operación no valida" << endl;
            break;
        }
        system("pause");
        system("cls");
    }

    return 0;
}