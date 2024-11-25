#include <iostream>
using namespace std;
/*
Integrantes: 
-Alexis Chicaiza
-Brandon Collahuazo
-Jhoel Pallaroso
-Rafael Yépez
*/
int main(){
    float kwh, monto, incremento, total;
    cout << "Ingrese consumo de electricidad en kwh: ";
    cin >> kwh;
    
    monto = ( kwh * 0.10 );
    incremento = (monto * 0.5);

    if (kwh > 700)
    {
        total = incremento + monto;
        cout << "Valor a pagar: " << total << " dólares" << endl;
    }
    else
    {
        cout << "El valor a pagar es: " << monto << " dólares" << endl;
    }
    return 0; 
}