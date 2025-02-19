#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

struct automoviles
{
    int code;
    string marca;
    string modelo;
    int año;
    string placa;
} a1;

struct videoclub
{
    string nombre;
    string direccion;
    int telefonoCelular;
    float deuda;
    int codigoci;
} v1;

struct licenciaManejo
{
    string nombres;
    string apellidoMaterno;
    string apellidoPaterno;
    string fechaAsignacion;
    string fechaVencimiento;
    string nacionalidad;
    string grupoSanguineo;
    string tipoLicencia;
    string restricciones;
    string donaOrganos;
    string direccion;
    int cedula;
} l1;

struct tarjetaCredito
{
    string nombre;
    string fechaVencimiento;
    int numeroTarjeta;
    float saldo;
    int limite;
} t1;

void datosAutomoviles()
{
    srand(time(NULL));

    cout << "--- Registro de Automoviles ---" << endl;

    a1.code = rand() % 9999 + 1;

    cout << "Marca: ";
    getline(cin, a1.marca);

    cout << "Modelo: ";
    getline(cin, a1.modelo);

    cout << "Anio: ";
    cin >> a1.año;
    cin.ignore();

    cout << "Placa: ";
    getline(cin, a1.placa);
    system("cls");
}

void datosVideoclub()
{
    srand(time(NULL));

    cout << "--- Registro de Videoclub ---" << endl;

    v1.codigoci = rand() % 9999 + 1;

    cout << "Nombre: ";
    getline(cin, v1.nombre);

    cout << "Direccion: ";
    getline(cin, v1.direccion);

    cout << "Telefono celular: ";
    cin >> v1.telefonoCelular;
    cin.ignore();

    cout << "Deuda: ";
    cin >> v1.deuda;
    cin.ignore();
    system("cls");
}

void datosLicenciaManejo()
{
    cout << "--- Registro Licencia de Manejo ---" << endl;

    cout << "Nombres: ";
    getline(cin, l1.nombres);

    cout << "Apellido Paterno: ";
    getline(cin, l1.apellidoPaterno);

    cout << "Apellido Materno: ";
    getline(cin, l1.apellidoMaterno);

    cout << "Fecha de Asignacion: ";
    getline(cin, l1.fechaAsignacion);

    cout << "Fecha de Vencimiento: ";
    getline(cin, l1.fechaVencimiento);

    cout << "Nacionalidad: ";
    getline(cin, l1.nacionalidad);

    cout << "Grupo Sanguineo: ";
    getline(cin, l1.grupoSanguineo);

    cout << "Tipo de licencia: ";
    getline(cin, l1.tipoLicencia);

    cout << "Restricciones: ";
    getline(cin, l1.restricciones);

    cout << "Dona organos?: ";
    getline(cin, l1.donaOrganos);

    cout << "Direccion: ";
    getline(cin, l1.direccion);

    cout << "Cedula: ";
    cin >> l1.cedula;
    cin.ignore();
    system("cls");
}

void datosTarjetaCredito()
{
    cout << "--- Registro Tarjeta de Credito ---" << endl;

    cout << "Titular: ";
    getline(cin, t1.nombre);

    cout << "Fecha de Vencimiento: ";
    getline(cin, t1.fechaVencimiento);

    cout << "Numero de la tarjeta: ";
    cin >> t1.numeroTarjeta;
    cin.ignore();

    cout << "Saldo: ";
    cin >> t1.saldo;
    cin.ignore();

    cout << "Limite: ";
    cin >> t1.limite;
    cin.ignore();
    system("cls");
}

void imprimir()
{

    cout << "\n--- Automovil Registrado ---\n";
    cout << "\nCodigo: " << a1.code << "\t" << " || " << "\t";
    cout << "Marca: " << a1.marca << "\t" << " || " << "\t";
    cout << "Modelo: " << a1.modelo << "\t" << " || " << "\t";
    cout << "Anio: " << a1.año << "\t" << " || " << "\t";
    cout << "Placa: " << a1.placa << "\t" << " || " << "\n";

    cout << "\n--- Usuario Videoclub ---\n";
    cout << "\nCodigo: " << v1.codigoci << "\t" << " || " << "\t";
    cout << "Nombre: " << v1.nombre << "\t" << " || " << "\t";
    cout << "Direccion: " << v1.direccion << "\t" << " || " << "\t";
    cout << "Telefono Celular: " << v1.telefonoCelular << "\t" << " || " << "\t";
    cout << "Deuda: " << v1.deuda << " $" << "\t" << " || " << "\n";

    cout << "\n--- Conductor ---\n";
    cout << "\nNombres: " << l1.nombres << "\t" << " || " << "\t";
    cout << "A. Paterno: " << l1.apellidoPaterno << "\t" << " || " << "\t";
    cout << "A. Materno: " << l1.apellidoMaterno << "\t" << " || " << "\t";
    cout << "F. Asignacion: " << l1.fechaAsignacion << "\t" << " || " << "\t";
    cout << "F. Vencimiento: " << l1.fechaVencimiento << "\t" << " || " << endl;
    cout << "Nacionalidad: " << l1.nacionalidad << "\t" << " || " << "\t";
    cout << "G. Sanguineo: " << l1.grupoSanguineo << "\t" << " || " << "\t";
    cout << "Nacionalidad: " << l1.nacionalidad << "\t" << " || " << "\t";
    cout << "T. Licencia: " << l1.tipoLicencia << "\t" << " || " << "\t";
    cout << "Restricciones: " << l1.restricciones << "\t" << " || " << endl;
    cout << "Donante?: " << l1.donaOrganos << "\t" << " || " << "\t";
    cout << "Direccion: " << l1.direccion << "\t" << " || " << "\t";
    cout << "Cedula: " << l1.cedula << "\t" << " || " << "\n";

    cout << "\n--- Cliente Bancario ---\n";
    cout << "\nTitular: " << t1.nombre << "\t" << " || " << "\t";
    cout << "F. Vencimiento: " << t1.fechaVencimiento << "\t" << " || " << "\t";
    cout << "N. Tarjeta: " << t1.numeroTarjeta << "\t" << " || " << "\t";
    cout << "Saldo: " << t1.saldo <<" $"<< "\t" << " || " << "\t";
    cout << "Limite: " << t1.limite << "\t" << " || " << endl;
}

int main()
{
    datosAutomoviles();
    datosVideoclub();
    datosLicenciaManejo();
    datosTarjetaCredito();
    imprimir();
    return 0;
}
