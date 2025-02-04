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

bool isBinario(int v[], int n, int elemento)
{
    int abajo = v[0];
    int arriba = v[n - 1];
    int centro = v[arriba + abajo] / 2;

    for (int i = 0; i < n; i++)
    {
        if (elemento > centro)
        {
            abajo = centro;
            for (i = abajo; i < arriba; i++)
            {
                if (v[i] == elemento)
                {
                    return true;
                }
            }
        }
        else if (elemento < centro)
        {
            arriba = centro;
            for (i = abajo; i < arriba; i++)
            {
                if (v[i] == elemento)
                {
                    return true;
                }
            }
        }
        else
        {
            cout<<elemento<<endl;
        }
    }
    return false;
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
    (isBinario(vector, n, dato)) ? cout << "El elemento esta en el array" : cout << "El elemento no existe";
}

int main()
{
    imprimir();
    return 0;
}