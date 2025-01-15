#include <iostream>
using namespace std;
int main()
{
    int a, b, c;

    cout << "Ingrese primer valor: ";
    cin >> a;
    cout << "Ingrese segundo valor: ";
    cin >> b;
    cout << "Ingrese tercer valor: ";
    cin >> c;

    if (a > b)
    {
        if (a < c)
        {
            cout << "El mayor es: " << a << endl;
        }
        else
        {
            cout << "El mayor es: " << c << endl;
        }
    }
    else
    {
        if (b > c)
        {
            cout << "El mayor es: " << b << endl;
        }
        else
        {
            if (c > a)
            {
                cout << "El mayor es: " << c << endl;
            }
            else
            {
                cout << "Son iguales" << endl;
            }
        }
    }
    return 0;
}