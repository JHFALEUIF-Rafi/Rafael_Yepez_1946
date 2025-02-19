#include <iostream>
using namespace std;

struct persona
{
    string nombre = "Sin nombre";
    int edad = 0;
    float estatura = 0.00;
};

struct
{
    string nombre;
    float nota;
} e1, e2;

void registro()
{
    persona p5, p6;
}

int main()
{
    persona p3, p4;
    p3.nombre = "Carlos Ortiz";
    p3.edad = 28;
    p3.estatura = 1.90;

    cout << "---Datos persona 1---" << endl;
    cout << "Nombre: " << p3.nombre << endl;
    cout << "Edad: " << p3.edad << endl;
    cout << "Estatura: " << p3.estatura << endl;

    cout << "\n---Datos persona 2---" << endl;
    cout << "Nombre: ";
    getline(cin, p4.nombre);
    cout << "Edad: ";
    cin >> p4.edad;
    cout << "Estatura: ";
    cin >> p4.estatura;

    cout << "\n---Datos ingresados---" << endl;
    cout << "Nombre: " << p3.nombre << "\t";
    cout << "Edad: " << p3.edad << "\t";
    cout << "Estatura: " << p3.estatura << "\n";

    cout << "Nombre: " << p4.nombre << "\t";
    cout << "Edad: " << p4.edad << "\t";
    cout << "Estatura: " << p4.estatura << "\n";

    // Limpiar buffer antes de usar getline
    cin.ignore();

    cout << "\n---Datos Estudiante 1---" << endl;
    cout << "Nombre: ";
    getline(cin, e1.nombre);
    cout << "Nota: ";
    cin >> e1.nota;

    cin.ignore(); // Limpiar buffer nuevamente

    cout << "\n---Datos Estudiante 2---" << endl;
    cout << "Nombre: ";
    getline(cin, e2.nombre);
    cout << "Nota: ";
    cin >> e2.nota;

    cout << "\n---Datos ingresados---" << endl;
    cout << "Nombre: " << e1.nombre << "\t";
    cout << "Nota: " << e1.nota << "\n";

    cout << "Nombre: " << e2.nombre << "\t";
    cout << "Nota: " << e2.nota << "\n";

    return 0;
}
