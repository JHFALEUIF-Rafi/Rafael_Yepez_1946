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

int ordenarInsercion(int v[], int n)
{
    int contar = 0, aux;

    for (int i = 1; i < n; i++)
    {
        aux = v[i];
        int j = i - 1;
        while (j >= 0)
        {
            contar++;
            if (aux < v[j])
            {
                v[j + 1] = v[j];
                v[j] = aux;
            }
            j--;
        }
    }
    return contar;
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
    comparaciones = ordenarInsercion(vec, ne);
    cout << "\nVector ordenado:" << endl;
    mostrarVector(vec, ne);
    cout << "\nEl numero de comparaciones es:  " << comparaciones << endl;
}

int main()
{
    imprimir();
    return 0;
}