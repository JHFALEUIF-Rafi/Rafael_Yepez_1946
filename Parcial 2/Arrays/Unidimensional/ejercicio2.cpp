#include <iostream>
#include <stdlib.h> //libreria para el uso de rand
#include <time.h>   //libreria para el uso time
using namespace std;

float llenaDatos(float v[], int ne)
{
    float num, op;
    srand(time(NULL));
    for (int i = 0; i < ne; i++)
    {
        num = (rand() % 99 + 1) / 100.0;
        v[i] = 50 + (rand() % 50);
        op = v[i] + num;
        cout << op << " ";
        v[i]=op;
    }
    return op;
}

void verDatos(float v[], int ne)
{
    cout << "\nLos elementos del vector son:" << endl;
    for (int i = 0; i < ne; i++)
    {
        cout << v[i] << " ";
    }
}

float sumarPromedioCifras(float v[], int ne)
{
    float suma = 0.0;
    for (int i = 0; i < ne; i++)
    {
        suma += v[i];
    }
    return suma / ne;
}

int contarBajoPromedio(float v[], int ne, float promedio)
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

void guardarElementosMenores(float v[], int ne, float promedio, float lista[])
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

    float vector[ne];
    llenaDatos(vector, ne);
    verDatos(vector, ne);

    promedioNumeros = sumarPromedioCifras(vector, ne);
    cout << "\nEl promedio de los datos generados es: " << promedioNumeros << endl;

    menores = contarBajoPromedio(vector, ne, promedioNumeros);
    cout << "La cantidad de elementos debajo del promedio son: " << menores << endl;

    float listaMenores[menores];
    guardarElementosMenores(vector, ne, promedioNumeros, listaMenores);
    verDatos(listaMenores, menores);

    return 0;
}