#include <iostream>
using namespace std;
int main()
{
    int num = 1, valor;
    do
    {
        cout << num << " " << endl;
        num++;
    } while (num <= 10);

    // validar para ingresar valores entre 1 y 10
    do
    {
        cout << "\nIngrese valor: ";
        cin >> valor;
        (valor < 10 || valor > 20) ? cout << "Valor no valido ingresa un numero entre 10 y 20 " : cout << "Exito"<<endl;
    } while (valor < 10 || valor > 20);
    cout << "Ingresaste el valor de: " << valor << endl;

    return 0;
}