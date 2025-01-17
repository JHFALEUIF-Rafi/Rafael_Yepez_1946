#include <iostream>
#include <stdlib.h> //libreria para el uso de rand
#include <time.h>   //libreria para el uso time
using namespace std;

void llenaDatos(int v[], int ne)
{
    srand(time(NULL));
    for (int i = 0; i < ne; i++)
    {
        v[i] = rand() % 20 + 1;
    }
}

void verDatos(int v[], int ne)
{
    cout << "Los elementos del vector son:" << endl;
    for (int i = 0; i < ne; i++)
    {
        cout << v[i] << " ";
    }
}

int sumarPromedioCifras(int v[], int ne)
{
    int suma = 0;
    for (int i = 0; i < ne; i++)
    {
        suma += v[i];
    }
    return (float)suma / ne;
}

int contarBajoPromedio(int v[], int ne, int promedio)
{
    int contar = 0;
    for (int i = 0; i < ne; i++)
    {
        if (v[i] < promedio)
        {
            contar++;
        }
    }
    return contar;
}

void guardarElementosMenores(int v[], int ne, float promedio, int lista[])
{
    int j = 0;
    for (int i = 0; i < ne; i++)
    {
        if (v[i] < promedio)
        {
            lista[j] = v[i];
            j++;
        }
    }
}

int main()
{
    int ne, menores;
    float promedioNumeros;
    cout << "Cuantos elementos tiene el vector?: ";
    cin >> ne;
    int vector[ne];
    llenaDatos(vector, ne);
    verDatos(vector, ne);
    promedioNumeros = sumarPromedioCifras(vector, ne);
    cout << "\nEl promedio de los datos generados es: " << promedioNumeros << endl;
    menores = contarBajoPromedio(vector, ne, promedioNumeros);
    cout << "La cantidad de elementos debajo del promedio son: " << contarBajoPromedio(vector, ne, promedioNumeros) << endl;
    int listaMenores[menores];
    guardarElementosMenores(vector,ne,promedioNumeros,listaMenores);
    verDatos(listaMenores,menores);

    return 0;
}