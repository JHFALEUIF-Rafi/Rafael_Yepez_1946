#include <iostream>
using namespace std;
int separaCifras(int num, int &digito)
{
    int static suma = 0;
    bool bandera = true;
    while (num > 0)
    {
        if(bandera){
            digito = num % 10;
            bandera=false;
        }
        suma += num % 10;
        num /= 10;
    }
    return suma;
}

int main()
{
    int num, digito, suma;
    cout << "Introduce un numero entero: ";
    cin >> num;
    suma = separaCifras(num, digito);
    cout << "La suma de las cifras de " << num << " es " << suma << endl;
    
}