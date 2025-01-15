#include <iostream>
using namespace std;
int main()
{
    int numero;
    while (true)
    {
        cout<<"Ingresa un numero: ";
        cin>> numero;
        if (numero>=1&&numero <=5)
        {
            break;
        }
    }
    return 0;
}