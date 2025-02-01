// Programa para comparar algoritmos de orden
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

int ordenarBurbujaV1(int v[], int n)
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

int ordenarBurbujaV2(int v[], int n)
{
    int mejora = 1;
    int aux, contador = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - mejora; j++)
        {
            contador++;
            if (v[j] > v[j + 1])
            {
                aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
            }
        }
        mejora++;
    }
    return contador;
}

int ordenarBurbujaV3(int v[], int n)
{
    int mejora = 1;
    bool change = true;
    int aux, contador = 0;
    for (int i = 0; i < n && change; i++)
    {
        change = false;
        for (int j = 0; j < n - mejora; j++)
        {
            contador++;
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
    return contador;
}

int ordenSeleccionV1(int v[], int n)
{
    int contar = 0, aux;
    for (int i = 0; i < n - 1; i++)
    {
        int min_idx = i;
        for (int j = i + 1; j < n; j++)
        {
            contar++;
            if (v[j] < v[min_idx])
            {
                min_idx = j;
            }
        }
        aux = v[i];
        v[i] = v[min_idx];
        v[min_idx] = aux;
    }
    return contar;
}

int ordenSeleccionV2(int v[], int n)
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
    int n;
    cout << "Ingrese el numero de elementos que desea ordenar: ";
    cin >> n;
    int vec[n];
    llenarTabla(vec, n);
    cout << "\nVector original: ";
    mostrarVector(vec, n);
    cout << endl;

    cout << "\nEl numero de pasadas de Burbuja V1 es: " << ordenarBurbujaV1(vec, n) << endl;
    cout << "El numero de pasadas de Burbuja V2 es: " << ordenarBurbujaV2(vec, n) << endl;
    cout << "El numero de pasadas de Burbuja V3 es: " << ordenarBurbujaV3(vec, n) << endl;
    cout << "El numero de pasadas de Seleccion V1 es: " << ordenSeleccionV1(vec, n) << endl;
    cout << "El numero de pasadas de Seleccion V2 es: " << ordenSeleccionV2(vec, n) << endl;
    cout << "El numero de pasadas de Insercion es: " << ordenarInsercion(vec, n) << endl;

    cout << "\nVector ordenado: ";
    mostrarVector(vec, n);
    cout << endl;
}

int main()
{
    imprimir();
    return 0;
}