#include <iostream>
#include <stdio.h>
using namespace std;
/* Rafael Yépez*/
int main()
{
    int num, r, div;
    cout << "Ingrese un numero: ";
    cin >> num;
    cout << "Ingrese numero divisor";
    cin >> div;
    r = num % div;
    if (r == 0)
    {
        cout << "El numero " << num << " es divisible por " << div << endl;
    }
    else
    {
        cout << "El numero " << num << " no es divisible por " << div << endl;
    }
    num = 0;
    return 0;
}