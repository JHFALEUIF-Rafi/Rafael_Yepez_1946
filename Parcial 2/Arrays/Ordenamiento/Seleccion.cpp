#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void llenarTabla(int v[], int n)
{
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        v[i] = rand() % 20 + 1;
    }
}

void mostrarVector(int v[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
}

int ordenSeleccion(int v[], int n)
{
    int contar = 0, aux;
    bool cambios = true;
    for (int i = 0; i < n - 1; i++)
    {
        cambios = false;
        for (int j = i + 1; j < n; j++)
        {
            contar++;
            if (v[i] > v[j])
            {
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
                cambios = true;
            }
        }
    }
    return contar++;
}

void imprimir()
{
    int ne, comparaciones;
    cout << "ingrese el numero de elementos: ";
    cin >> ne;
    int vec[ne];
    llenarTabla(vec, ne);
    cout << "\nVector Original: " << endl;
    mostrarVector(vec, ne);
    comparaciones = ordenSeleccion(vec, ne);
    cout << "\nVector ordenado:" << endl;
    mostrarVector(vec, ne);
    cout << "\nEl numero de comparaciones es:  " << comparaciones << endl;
}

int main()
{
    imprimir();
    return 0;
}