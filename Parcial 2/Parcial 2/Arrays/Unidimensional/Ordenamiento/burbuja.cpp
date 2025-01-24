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

int ordenarBurbuja(int v[], int n)
{
    int aux, contador = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            contador++;
            if (v[j] > v[j + 1])
            {
                aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
            }
        }
    }
    return contador;
}

void mostrarVector(int v[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
}

int main()
{
    int ne;
    cout << "Ingrese el numero de elementos: ";
    cin >> ne;
    int vec[ne];
    llenarTabla(vec, ne);
    cout << "Vector original: ";
    mostrarVector(vec, ne);
    cout << endl;
    cout<< "El numero de comparaciones burbuja v1 es: "<<ordenarBurbuja(vec, ne)<<endl;
    cout << "Vector ordenado" << endl;
    mostrarVector(vec, ne);
    return 0;
}