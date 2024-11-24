#include <iostream>
#include <stdio.h>
using namespace std;
/* Rafael Yépez*/
main()
{
    int num, r, div;
    cout << "Ingrese un número: ";
    cin >> num;
    cout << "Ingrese número divisor";
    cin >> div;
    r = num % div;
    if (r==0)
    {
        cout << "El número" << num <<"es divisible por " << div << endl;
    }
    else 
    {
        cout << "El número" << num <<" no es divisible por " << div << endl;
    }
    num = 0;
}