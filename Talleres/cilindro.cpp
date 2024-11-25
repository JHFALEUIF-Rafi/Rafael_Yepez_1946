#include <iostream>
#include <numbers>
using namespace std;
/*
Integrantes: 
-Alexis Chicaiza
-Brandon Collahuazo
-Jhoel Pallaroso
-Rafael Yépez
*/
int main(){
    float r, h, volumen, area;
    cout << "Ingrese radio: ";
    cin >> r;
    cout << "Ingrese altura: ";
    cin >> h;

    volumen = 3.14 *( r * r) * h; 
    area = 2 * 3.14 * r * (h + r);
    if (h > r)
    {
       cout << "El volumen del cilindro es: " << volumen << endl; 
    }
    else
    {
        cout << "El area del cilindro es: " << area << endl;
    }   
return 0;
}