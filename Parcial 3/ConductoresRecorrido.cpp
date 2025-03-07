#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <stdlib.h>
#include <time.h>

using namespace std;

struct Conductor {
    string nombre;
    vector<int> totalKms;
    int totalSemana;
};

// Función para generar recorridos aleatorios
vector<int> generarRecorridos() {
    vector<int> recorridos(7);
    for (int i = 0; i < 7; ++i) {
        recorridos[i] = rand() % 201; // Números aleatorios entre 0 y 200
    }
    return recorridos;
}

// Función para calcular el total de kilómetros
int calcularTotal(const vector<int>& totalKms) {
    int total = 0;
    for (int km : totalKms) {
        total += km;
    }
    return total;
}

// Función para verificar si un nombre ya existe
bool nombreExiste(const vector<Conductor>& conductores, const string& nombre) {
    for (const Conductor& conductor : conductores) {
        if (conductor.nombre == nombre) {
            return true;
        }
    }
    return false;
}

// Función para mostrar la tabla de rendimiento completa
void mostrarRendimiento(const vector<Conductor>& conductores) {
    string diasSemana[] = {"Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado", "Domingo"};

    // Imprimir encabezado de la tabla
    cout << "\nTabla de Rendimiento:\n";
    cout << setw(10) << "Conductor";
    for (const string& dia : diasSemana) {
        cout << setw(10) << dia;
    }
    cout << setw(10) << "Total" << endl;

    // Imprimir los datos de cada conductor
    for (const Conductor& conductor : conductores) {
        cout << setw(10) << conductor.nombre;
        for (int km : conductor.totalKms) {
            cout << setw(10) << km;
        }
        cout << setw(10) << conductor.totalSemana << endl;
    }
}

// Función para mostrar el conductor con el mayor kilometraje
void mostrarMejorConductor(const vector<Conductor>& conductores) {
    if (conductores.empty()) {
        cout << "\nNo hay conductores registrados.\n";
        return;
    }

    Conductor mejorConductor = conductores[0];
    for (const Conductor& conductor : conductores) {
        if (conductor.totalSemana > mejorConductor.totalSemana) {
            mejorConductor = conductor;
        }
    }

    cout << "\nConductor con mayor kilometraje:\n";
    cout << mejorConductor.nombre << ": " << mejorConductor.totalSemana << " kms\n";
}

// Función para mostrar el menú
void mostrarMenu() {
    cout << "\n----------------------\n";
    cout << "Seleccione una opcion:\n";
    cout << "1. Mostrar lista de conductores\n";
    cout << "2. Aniadir conductor\n";
    cout << "3. Mostrar rendimiento de conductores\n";
    cout << "4. Mostrar ranking de conductores\n";
    cout << "5. Mostrar conductor con mayor kilometraje\n";
    cout << "6. Salir\n";
    cout << "----------------------\n";
}

// Función principal del menú
void menuPrincipal() {
    vector<Conductor> conductores;
    int op;
    bool bandera = true;

    while (bandera) {
        system("cls");
        mostrarMenu();
        cout << "Ingrese una opcion: ";
        cin >> op;

        switch (op) {
            case 1: {
                // Mostrar lista de conductores
                if (conductores.empty()) {
                    cout << "\nNo hay conductores registrados.\n";
                } else {
                    cout << "\nLista de Conductores:\n";
                    for (const Conductor& conductor : conductores) {
                        cout << conductor.nombre << "\n";
                    }
                }
                break;
            }
            case 2: {
                // Añadir conductor
                string nombre;
                cout << "\nIngrese el nombre del conductor: ";
                cin >> nombre;

                if (nombreExiste(conductores, nombre)) {
                    cout << "\nError: El nombre ya existe.\n";
                } else {
                    Conductor nuevoConductor;
                    nuevoConductor.nombre = nombre;
                    nuevoConductor.totalKms = generarRecorridos();
                    nuevoConductor.totalSemana = calcularTotal(nuevoConductor.totalKms);
                    conductores.push_back(nuevoConductor);
                    cout << "\nConductor añadido exitosamente.\n";
                }
                break;
            }
            case 3: {
                // Mostrar rendimiento de conductores
                if (conductores.empty()) {
                    cout << "\nNo hay conductores registrados.\n";
                } else {
                    mostrarRendimiento(conductores);
                }
                break;
            }
            case 4: {
                // Mostrar ranking de conductores
                if (conductores.empty()) {
                    cout << "\nNo hay conductores registrados.\n";
                } else {
                    vector<Conductor> ranking = conductores;
                    for (size_t i = 0; i < ranking.size() - 1; ++i) {
                        for (size_t j = 0; j < ranking.size() - i - 1; ++j) {
                            if (ranking[j].totalSemana < ranking[j + 1].totalSemana) {
                                swap(ranking[j], ranking[j + 1]);
                            }
                        }
                    }

                    cout << "\nRanking de Conductores:\n";
                    for (const Conductor& conductor : ranking) {
                        cout << conductor.nombre << ": ";
                        for (int i = 0; i < conductor.totalSemana / 10; ++i) {
                            cout << "#";
                        }
                        cout << "\n";
                    }
                }
                break;
            }
            case 5: {
                // Mostrar conductor con mayor kilometraje
                mostrarMejorConductor(conductores);
                break;
            }
            case 6: {
                // Salir
                bandera = false;
                cout << "\nSaliendo del programa...\n";
                break;
            }
            default: {
                cout << "\nOpcion invalida. Intente nuevamente.\n";
                break;
            }
        }
        system("pause");
    }
}

int main() {
    srand(time(0)); // Inicializar la semilla para números aleatorios
    menuPrincipal();
    return 0;
}
