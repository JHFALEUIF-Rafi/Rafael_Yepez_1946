#include <iostream>
using namespace std;

int main()
{
    int filas;
    cout << "Ingrese el unmero de filas: ";
    cin >> filas;

    for (int i = 1; i <= filas; i+=2)
    {
        for (int j = 1; j <= i; j+=2)
        {
            cout << " * ";
        }
        cout << endl;
    }
    return 0;
}