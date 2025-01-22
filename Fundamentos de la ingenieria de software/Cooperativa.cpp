#include <iostream>
#include <string>
using namespace std;

int main() {
    int datos, contacto, account;
    string cedula, passport, fullName, direccion, correo;

    cout << "Ingrese formato de documento (1: Cédula, 2: Pasaporte): ";
    cin >> datos;

    switch (datos) {
    case 1:
        cout << "Ingrese número de cédula: ";
        cin >> cedula;
        break;
    case 2:
        cout << "Ingrese número de pasaporte: ";
        cin >> passport;
        break;
    default:
        cout << "Opción no válida. Finalizando programa." << endl;
        return 1;
    }

    cout << "Ingrese nombre y apellido: ";
    cin.ignore(); // Limpiar el buffer de entrada
    getline(cin, fullName);

    cout << "Ingrese su dirección: ";
    getline(cin, direccion);

    cout << "Ingrese su número telefónico: ";
    cin >> contacto;

    cout << "Ingrese su correo electrónico: ";
    cin >> correo;

    cout << "Seleccione el tipo de cuenta (1: Cuenta de ahorro, 2: Cuenta corriente): ";
    cin >> account;

    switch (account) {
    case 1:
        cout << "Cuenta de ahorro creada exitosamente." << endl;
        break;
    case 2:
        cout << "Cuenta corriente creada exitosamente." << endl;
        break;
    default:
        cout << "Opción no válida. Finalizando programa." << endl;
        return 1;
    }

    // Información del cliente
    cout << "\n--- Resumen de datos del cliente ---" << endl;
    if (!cedula.empty()) cout << "Documento (Cédula): " << cedula << endl;
    if (!passport.empty()) cout << "Documento (Pasaporte): " << passport << endl;
    cout << "Nombre completo: " << fullName << endl;
    cout << "Dirección: " << direccion << endl;
    cout << "Teléfono: " << contacto << endl;
    cout << "Correo: " << correo << endl;
    cout << "Tipo de cuenta: " << (account == 1 ? "Ahorro" : "Corriente") << endl;

    return 0;
}

