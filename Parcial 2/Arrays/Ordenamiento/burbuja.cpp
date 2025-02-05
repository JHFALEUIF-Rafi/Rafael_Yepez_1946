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

void mostrarVector(int v[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
}

void comparaciones(int mejor, int peor)
{
    if (mejor < peor)
    {
        cout << "\nEl numero de comparaciones de " << mejor << " es mejor que " << peor << endl;
    }
    else if (mejor > peor)
    {
        cout << "\nEl numero de comparaciones de " << peor << " es mejor que " << mejor << endl;
    }
    else
    {
        cout << "\nEl numero de comparaciones son iguales" << endl;
    }
}

void op()
{
    int ne;
    cout << "Ingrese el numero de elementos: ";
    cin >> ne;
    int vec[ne];
    llenarTabla(vec, ne);
    cout << "\nVector original: ";
    mostrarVector(vec, ne);
    cout << endl;
    cout << "El numero de comparaciones burbuja v1 es: " << ordenarBurbuja(vec, ne) << endl;
    cout << "Vector ordenado" << endl;
    mostrarVector(vec, ne);
    cout << endl;

    cout << "El numero de comparaciones burbuja v2 es: " << ordenarBurbujaV2(vec, ne) << endl;

    cout << "El numero de comparaciones burbuja v3 es: " << ordenarBurbujaV3(vec, ne) << endl;

    int mejor = ordenarBurbuja(vec, ne);
    int peor = ordenarBurbujaV3(vec, ne);

    comparaciones(mejor, peor);
}

int main()
{
    op();
    return 0;
}