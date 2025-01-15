#include <iostream>
using namespace std;

int main()
{
    int v1, v2, total;
    cout << "Ingrese un numero: " << endl;
    cin >> v1;
    cout << "Ingrese un numero: " << endl;
    cin >> v2;
    total = sumar(v1, v2);
    getchar();
    return 0;
}

int sumar(int num1, int num2)
{
    return num1 + num2;
}