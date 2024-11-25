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
    float r, h, volumen, area;
    const float PI = 3.1416;
    cout << "Ingrese radio: ";
    cin >> r;
    cout << "Ingrese altura: ";
    cin >> h;

    volumen = PI *( r * r) * h; 
    area = 2 * PI * r * (h + r);
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