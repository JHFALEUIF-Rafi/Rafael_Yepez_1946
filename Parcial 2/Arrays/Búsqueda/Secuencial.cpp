#include <iostream>
using namespace std;

bool isFounded(int v[], int n, int elemento)
{
    //bool encontrado = false;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == elemento)
        {
            /*encontrado = true;
            break;*/
            return true;
        }
    }
    return false;
}

void llenaDatos(int v[], int n)
{
    for (int i = 0; i < n; i++)
    {
        v[i] = (i + 1) * 3;
    }
}

void verElementos(int v[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << "\t";
    }
}

void imprimir()
{
    int vector[5], dato;
    llenaDatos(vector, 5);
    cout << "Ingresa el dato a buscar: ";
    cin >> dato;
    (isFounded(vector, 5, dato)) ? cout << "El elemento esta en el array" : cout << "El elemento no existe";
}

int main()
{
    imprimir();
    return 0;
}