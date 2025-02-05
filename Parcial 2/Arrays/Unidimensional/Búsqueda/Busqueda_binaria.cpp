#include <iostream>
using namespace std;

void llenarTabla(int v[], int n)
{
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        v[i] = rand() % 99 + 1;
    }
}

void mostrarVector(int v[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
}

void ordenarBurbujaV3(int v[], int n)
{
    int mejora = 1;
    bool change = true;
    int aux;
    for (int i = 0; i < n && change; i++)
    {
        change = false;
        for (int j = 0; j < n - mejora; j++)
        {
            if (v[j] > v[j + 1])
            {
                aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
                change = true;
            }
        }
        mejora++;
    }
}

void isBinario(int v[], int n, int elemento)
{
    int abajo = 0;
    int arriba = n - 1;
    bool bandera = false;

    for (int i = 0; abajo <= arriba; i++)
    {
        int centro = (abajo + arriba) / 2;
        if (v[centro] == elemento)
        {
            bandera = true;
            cout << "El elemenrto se encuentra dentro del array" << endl;
            break;
        }
        else if (elemento > v[centro])
        {
            abajo = centro + 1;
        }
        else
        {
            arriba = centro - 1;
        }
    }
    if (!bandera)
    {
        cout << "El elemento no esta dentro del array" << endl;
    }
}

void imprimir()
{
    int n;
    cout << "Ingrese el numero de elementos para el vector: ";
    cin >> n;
    int vector[n];
    llenarTabla(vector, n);
    ordenarBurbujaV3(vector, n);
    mostrarVector(vector, n);
    cout << endl;

    int dato;
    cout << "\nIngrese el dato a buscar (Valores entre 1 y 100): ";
    cin >> dato;
    isBinario(vector, n, dato);
}

int main()
{
    imprimir();
    return 0;
}