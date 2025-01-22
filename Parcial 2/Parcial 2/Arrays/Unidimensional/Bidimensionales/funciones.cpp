#include <iostream>
using namespace std;

void llenartabla(int tabla[][20], int f, int c)
{
    for (int i = 0; i < f; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "Introduce el valor de posicion [" << i << "][" << j << "]: ";
            cin>>tabla[i][j];
        }
    }
}

void imprimetabla(int tabla[][20], int f, int c)
{
    for (int i = 0; i < f; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << tabla[i][j] << "\t";
        }
        cout << endl;
    }
}
int main()
{
    int tabla[20][20], filas, columnas;
    cout << "Introduce numero de filas: ";
    cin >> filas;
    cout << "Introduce numero de columnas: ";
    cin >> columnas;
    llenartabla(tabla, filas, columnas);
    imprimetabla(tabla, filas, columnas);

    return 0;
}