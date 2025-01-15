/*Pregunta 7
Rafael Yépez*/
#include <iostream>
using namespace std;
int main()
{
    /*int n, d, operacion, respuesta;
    cout << "Ingresar numerador: ";
    cin >> n;
    cout << "Ingresar denominador: ";
    cin >> d;
    operacion = (n * n) + (n * d) / d + 2;
    respuesta = operacion;
    cout << "El resultado es: " << respuesta << endl;*/

    int n = 2, signo = 1;
    float d = 1, x = 0;
    char term;

    while (true)
    {
        cout << "Deseas agregar un valor a la serie (s/n)";
        cin >> term;
        
        if (term == 's' || term == 'S')
        {
            x = x+ (signo * (float(n/d)));
            cout << "\nUltimo termino aniadido a la serie" << endl;
            cout << "Numerador: " << n << " , " << "Denominador: " << d << endl;
            cout << "Es decir: " << n << "/" << d << endl;
            cout << "El resultado de la operacion es: " << x << endl;
            n = n + d;
            d = d + 2;
        }
        else if (term == 'n' || term == 'N')
        {
            x = x+((float(n/d)));
            cout << "El resultado de la operacion es: " << x << endl;
            break;
        }   
        signo = signo * -1;
    }
    return 0;
}