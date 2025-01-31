#include <iostream>
using namespace std;

void cambiarString(string &nombres)
{
    nombres = "Sin nombre";
}

void cambiarArray( char apellido[]){
    apellido[0]='Y';
    apellido[1]='e';
    apellido[2]='p';
    apellido[3]='e';
    apellido[4]='z';
    apellido[7]= '\0';

    cout<<"Ingrese el nuevo apellido";
    cin.getline(apellido,20);
}

int main()
{
    string nombres, apodo;
    string curso[5]={"Rafa", "Alex", "Brandon", "Polloasadero", "Gael"};
    char apellido[20];
    cout << "Ingrese su nombre: ";
    getline(cin, nombres);
    cambiarString(nombres);
    cout<<"Su nombre luego de llamar a la funcion es: "<<nombres<<endl;
    cout << "Ingrese apellido: ";
    cin.getline(apellido, 20);
    cambiarArray(apellido);
    cout<<"su apellido despues de cambiar a la funcion es: "<<apellido<<endl;

    return 0;
}