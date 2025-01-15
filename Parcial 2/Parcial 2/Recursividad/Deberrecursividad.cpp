#include <iostream>
using namespace std;

float division(float a, float b)
{
    if (a<b)
        return a/b;
    else
        return 1 + division(a - b, b);
}

int main()
{
    float a, b;
    bool matherror = true;
    while (matherror)
    {
        cout << "---Calculadora de division---\n";
        cout << "Ingrese dividendo: ";
        cin >> a;
        cout << "Ingrese divisor: ";
        cin >> b;
        if (b == 0)
        {
            cout << "MathError: No existe division para '0', intente de nuevo" << endl;
        }
        else
        {
            matherror = false;
            cout << "El resultado de la operacion es: " << division(a, b) << endl;
        }
    }
    return 0;
}