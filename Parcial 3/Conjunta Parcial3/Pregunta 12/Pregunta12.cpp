#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;

struct Producto {
    int id;
    string nombre;
    int cantidad;
    double precio;
    string sucursal;
};

void leerDatos(vector<Producto>& productos) {
    ifstream archivo("productos.txt");
    if (!archivo) {
        cerr << "No se pudo abrir el archivo productos.txt" << endl;
        exit(1);
    }

    Producto p;
    while (archivo >> p.id >> p.nombre >> p.cantidad >> p.precio >> p.sucursal) {
        productos.push_back(p);
    }
    archivo.close();
}

void calcularCantidadesTotales(const vector<Producto>& productos, int cantidadesTotales[], const string nombres[], int numProductos) {
    for (int i = 0; i < numProductos; i++) {
        cantidadesTotales[i] = 0;
    }

    for (const auto& p : productos) {
        for (int i = 0; i < numProductos; i++) {
            if (p.nombre == nombres[i]) {
                cantidadesTotales[i] += p.cantidad;
                break;
            }
        }
    }
}

void calcularRecaudacionSucursal(const vector<Producto>& productos, double recaudacionSucursal[], const string sucursales[], int numSucursales) {
    for (int i = 0; i < numSucursales; i++) {
        recaudacionSucursal[i] = 0;
    }

    for (const auto& p : productos) {
        for (int i = 0; i < numSucursales; i++) {
            if (p.sucursal == sucursales[i]) {
                recaudacionSucursal[i] += p.cantidad * p.precio;
                break;
            }
        }
    }
}

void guardarResultados(const vector<Producto>& productos, const int cantidadesTotales[], const string nombres[], int numProductos, const double recaudacionSucursal[], const string sucursales[], int numSucursales) {
    ofstream archivo("consolidado.txt");
    if (!archivo) {
        cerr << "No se pudo abrir el archivo consolidado.txt" << endl;
        exit(1);
    }

    archivo << "Id  Producto    Cantidad    Precio(unitario)        Sucursal    Total" << endl;
    for (const auto& p : productos) {
        archivo << setw(2) << p.id << "   " << setw(9) << p.nombre << "   " << setw(8) << p.cantidad << "   " << setw(14) << fixed << setprecision(2) << p.precio << "   " << setw(8) << p.sucursal << "   " << setw(10) << fixed << setprecision(2) << p.cantidad * p.precio << endl;
    }

    archivo << "\nCantidades totales de cada artículo:" << endl;
    for (int i = 0; i < numProductos; i++) {
        archivo << nombres[i] << ": " << cantidadesTotales[i] << endl;
    }

    archivo << "\nRecaudación total de cada sucursal:" << endl;
    for (int i = 0; i < numSucursales; i++) {
        archivo << sucursales[i] << ": $" << fixed << setprecision(2) << recaudacionSucursal[i] << endl;
    }

    double recaudacionTotal = 0;
    for (int i = 0; i < numSucursales; i++) {
        recaudacionTotal += recaudacionSucursal[i];
    }
    archivo << "\nRecaudación total de la empresa: $" << fixed << setprecision(2) << recaudacionTotal << endl;

    string sucursalMayor;
    double mayorRecaudacion = 0;
    for (int i = 0; i < numSucursales; i++) {
        if (recaudacionSucursal[i] > mayorRecaudacion) {
            mayorRecaudacion = recaudacionSucursal[i];
            sucursalMayor = sucursales[i];
        }
    }
    archivo << "\nSucursal de mayor recaudación: " << sucursalMayor << " con $" << fixed << setprecision(2) << mayorRecaudacion << endl;

    archivo.close();
}

int main() {
    vector<Producto> productos;

    leerDatos(productos);

    const string nombres[] = {"Laptop", "T.Video", "Headset", "Mouse", "Monitor", "Teclado", "DiscoSSD", "M.Flash", "L.Optico", "Procesador"};
    const string sucursales[] = {"Sur", "Norte", "Este", "Oeste"};
    const int numProductos = 10;
    const int numSucursales = 4;

    int cantidadesTotales[numProductos] = {0};
    double recaudacionSucursal[numSucursales] = {0};

    calcularCantidadesTotales(productos, cantidadesTotales, nombres, numProductos);
    calcularRecaudacionSucursal(productos, recaudacionSucursal, sucursales, numSucursales);
    guardarResultados(productos, cantidadesTotales, nombres, numProductos, recaudacionSucursal, sucursales, numSucursales);

    cout << "Los resultados han sido guardados en el archivo consolidado.txt" << endl;

    return 0;
}
