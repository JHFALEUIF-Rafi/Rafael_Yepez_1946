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

    if (a > b && a > c)
    {
        cout << "El mayor es: " << a << endl;
    }
    else if (b > a && b > c)
    {
        cout << "El mayor es: " << b << endl;
    }
    else if (c > a && c > b)
    {
        cout << "El mayor es: " << c << endl;
    }
    else if (a > b || b > c)
    {
        cout << "El mayor es: "<< a << endl;
    }
    else
    {
        cout<<"Todos son iguales"<<endl;
    }
    return 0;
}