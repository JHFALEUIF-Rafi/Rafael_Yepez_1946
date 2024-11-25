#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
    float kw, monto, incremento, total;
    cout << "Ingrese consumo de electricidad en kw: ";
    cin >> kw;
    
    monto = ( kw * 0.10 );
    incremento = (monto * 0.5);

    if (kw > 700)
    {
        total = incremento + monto;
        cout << "Valor a pagar: " << total << " dolares";
    }
    else
    {
        cout << "El valor a pagar es: " << monto << " dolares" << endl;
    }
    return 0; 
}