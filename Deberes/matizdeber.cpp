//Programa para calcular suma de diagonales

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void llenarTabla(float tabla[10][10], int f, int c)
{
    float num, op;
    srand(time(NULL));
    for (int i = 0; i < f; i++)
    {
        for (int j = 0; j < c; j++)
        {
            num = (rand() % 19 + 1) / 100.0;
            tabla[i][j] = 10 + rand() % 20;
            op = tabla[i][j] + num;
            tabla[i][j] = op;
        }
    }
}
void verDatos(float tabla[10][10], int f, int c)
{
    cout << "Los elementos de la matriz son: " << endl;
    for (int i = 0; i < f; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << tabla[i][j] << "\t";
        }
        cout << endl;
    }
}

float sumaDiagonalPrincipal(float tabla[10][10], int dP)
{
    float sumadP = 0.0;
    for (int i = 0; i < dP; i++)
    {
        sumadP += tabla[i][i];
    }
    cout << "\nLa suma de la diagonal principal es: " << sumadP << endl;
    return sumadP;    
}

float sumaDiagonalSecundaria(float tabla[10][10], int dS)
{
    float sumadS = 0.0;
    for (int i = 0; i < dS; i++)
    {
        sumadS += tabla[i][dS - i - 1];
    }
    cout << "\nLa suma de la diagonal secundaria es: " << sumadS << endl;
    return sumadS;
}

void comparaciones(float sumadP, float sumadS)
{
    if (sumadP > sumadS)
    {
        cout << "\nLa suma de la diagonal principal " << sumadP << " es mayor que la suma de la diagonal secundaria " << sumadS << endl;
    }
    else if (sumadS > sumadP)
    {
        cout << "\nLa suma de la diagonal secundaria " << sumadS << " es mayor que la suma de la diagonal principal " << sumadP << endl;
    }
    else
    {
        cout << "\nLa suma de las diagonales es igual" << endl;
    }
}

void imprimirDiagonales(float tabla[10][10], int n)
{
    cout << "\nDiagonales de la matriz calculadas: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j || j == n - i - 1)
            {
                cout << tabla[i][j] << "\t";
            }
            else
            {
                cout << " \t";
            }
        }
        cout << endl;
    }
}


int main()
{
    float tabla[10][10];
    int filas;
    cout << "Introduce el tamanio de la matriz cuadrade que desea generar: ";
    cin >> filas;

    if (filas > 10)
    {
        cout << "El tamanio maximo permitido es de una matriz cuadrada 10x10 ";
        return 1;
    }

    llenarTabla(tabla, filas, filas);
    verDatos(tabla, filas, filas);

    float sumadP=sumaDiagonalPrincipal(tabla, filas);
    float sumadS=sumaDiagonalSecundaria(tabla, filas);

    comparaciones(sumadP,sumadS); 

    imprimirDiagonales(tabla,filas);
    return 0;
}
