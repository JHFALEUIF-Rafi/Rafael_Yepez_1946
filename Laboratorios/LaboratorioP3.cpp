#include <iostream>
#include <vector>
#include <iomanip> // Para mejorar el formato de la tabla
using namespace std;

struct Estudiante
{
    int id;
    string nombre;
    float nota1;
    float nota2;
    float promedio;
    char categoria;
};

// Funcion para calcular la categoria segun el promedio
char calcularCategoria(float promedio)
{
    if (promedio >= 17)
        return 'A';
    if (promedio >= 13)
        return 'B';
    if (promedio >= 10)
        return 'C';
    return 'D';
}

// Funcion para mostrar la lista de estudiantes con formato corregido
void mostrarLista(const vector<Estudiante> &estudiantes)
{
    system("cls");

    if (estudiantes.empty())
    {
        cout << "No hay estudiantes registrados.\n";
        return;
    }

    cout << "-------------------------------------------------------------------------------\n";
    cout << setw(5) << "ID" << setw(25) << "Nombre" << setw(10) << "Nota1"
         << setw(10) << "Nota2" << setw(12) << "Promedio" << setw(12) << "Categoria\n";
    cout << "-------------------------------------------------------------------------------\n";

    for (const auto &est : estudiantes)
    {
        cout << setw(5) << est.id
             << setw(25) << est.nombre.substr(0, 24) // Limitar el nombre a 24 caracteres
             << setw(10) << est.nota1
             << setw(10) << est.nota2
             << setw(12) << est.promedio
             << setw(12) << est.categoria << "\n";
    }
}

// Funcion para anadir un estudiante
void anadirEstudiante(vector<Estudiante> &estudiantes, int &id)
{
    system("cls");

    Estudiante est;
    est.id = id;

    cout << "\nAnadir Estudiante:\n";
    cout << "Ingrese Nombre: ";
    cin.ignore();
    getline(cin, est.nombre);

    do
    {
        cout << "Ingrese Nota 1 (1-20): ";
        cin >> est.nota1;
        if (est.nota1 < 1 || est.nota1 > 20)
            cout << "Error: La calificacion debe estar entre 1 y 20.\n";
    } while (est.nota1 < 1 || est.nota1 > 20);

    do
    {
        cout << "Ingrese Nota 2 (1-20): ";
        cin >> est.nota2;
        if (est.nota2 < 1 || est.nota2 > 20)
            cout << "Error: La calificacion debe estar entre 1 y 20.\n";
    } while (est.nota2 < 1 || est.nota2 > 20);

    est.promedio = (est.nota1 + est.nota2) / 2;
    est.categoria = calcularCategoria(est.promedio);

    estudiantes.push_back(est);
    id++;

    cout << "\nEstudiante anadido con exito.\n";
}

// Funcion para eliminar un estudiante
void eliminarEstudiante(vector<Estudiante> &estudiantes)
{
    system("cls");

    if (estudiantes.empty())
    {
        cout << "No hay estudiantes para eliminar.\n";
        return;
    }

    // Mostrar la lista antes de eliminar
    mostrarLista(estudiantes);

    int idEliminar;
    cout << "\nIngrese el ID del estudiante a eliminar: ";
    cin >> idEliminar;

    for (auto it = estudiantes.begin(); it != estudiantes.end(); ++it)
    {
        if (it->id == idEliminar)
        {
            estudiantes.erase(it);
            cout << "Estudiante eliminado correctamente.\n";
            return;
        }
    }

    cout << "ID no encontrado. No se elimino ningun estudiante.\n";
}

// Funcion para mostrar el menu
void mostrarMenu()
{
    cout << "\n----------------------\n";
    cout << "Seleccione una opcion:\n";
    cout << "1. Mostrar lista de estudiantes\n";
    cout << "2. Anadir estudiante\n";
    cout << "3. Eliminar estudiante\n";
    cout << "4. Salir\n";
    cout << "----------------------\n";
}

// Funcion principal del menu
void menuPrincipal()
{
    int id = 1;
    vector<Estudiante> estudiantes;
    int op;
    bool bandera = true;

    while (bandera)
    {
        system("cls"); // Limpia la pantalla antes de mostrar el menu
        mostrarMenu();
        cin >> op;

        switch (op)
        {
        case 1:
            mostrarLista(estudiantes);
            break;
        case 2:
            anadirEstudiante(estudiantes, id);
            break;
        case 3:
            eliminarEstudiante(estudiantes);
            break;
        case 4:
            bandera = false;
            break;
        default:
            cout << "Opcion invalida. Intente nuevamente.\n";
        }

        system("pause");
    }
}

int main()
{
    menuPrincipal();
    return 0;
}