#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void llenaVector(int v[])
{
    srand(time(NULL));
    for (int i = 0; i < 5; i++)
    {
        v[i] = 1 + rand() % 10;
    }
}

void verVector(int v[])
{
    cout << "Los elementos del vector son: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << v[i] << " ";
    }
}

bool buscar(int v[], int num)
{
    for (int i = 0; i < 5; i++)
    {
        if (v[i] == num)
        {
            return true;
        }
    }
    return false;
}

void jugar()
{
    int v[5], num, i;
    llenaVector(v);
    for (i = 1; i <= 3; i++)
    {
        cout << "Introduce un numero. Intento No. " << i << ": ";
        cin >> num;
        if (buscar(v, num))
        {
            cout << "Felicidades, has acertado" << endl;
            break;
        }
        else
        {
            cout << "Lo siento, has falladi vuelve a intentarlo" << endl;
        }
    }
    if (i == 4)
    {
        cout << "Lo siento has agotado tus intentos" << endl;
        cout << "Los vectores son: ";
        verVector(v);
    }
}
int main()
{
    jugar();
    return 0;
}