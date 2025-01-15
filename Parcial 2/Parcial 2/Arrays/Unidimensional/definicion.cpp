#include <iostream>
using namespace std;

int main()
{
    int anios[5];                                             // declaracion de un vector (5elementos)
    int edad[5] = {20, 25, 30, 35, 40};                       // Declaro e inicializao un array
    double estatura[] = {1.25, 1.66, 1.78, 1.90, 1.81, 1.69}; // declaracion de un vector de 5
    char sexo[5] = {'M', 'F', 'M', 'F', 'M'};

    cout << "El primer elemento de edad es: " << edad[0] << endl;
    cout << "El ultimo elemento de estatura es: " << estatura[4] << endl;
    cout << "El elemento en medio de sexo es: " << sexo[5 / 2] << endl;

    for (int i=0; i < 5; i++){
        cout<<"El elemento "<<i<<" del vector edad es: "<<edad[i]<<endl;
    }

    for (int i=0; i < 5; i++){
    cout<<"El elemento "<<i<<" del vector sexo es: "<<sexo[i]<<endl;
    }
    return 0;
}