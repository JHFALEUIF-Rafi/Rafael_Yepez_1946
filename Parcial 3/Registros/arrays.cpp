#include <iostream>
#include <iomanip>
using namespace std;

struct estudiante
{
    int id;
    string nombre;
    float notap;
};

/*int ordenarBurbujaV2(estudiante estudiantes[], int n)
{
    int mejora = 1;
    int contador = 0;
    estudiante aux;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - mejora; j++)
        {
            contador++;
            if (estudiantes[j].notap < estudiantes[j + 1].notap) // Ordenar de mayor a menor
            {
                aux = estudiantes[j];
                estudiantes[j] = estudiantes[j + 1];
                estudiantes[j + 1] = aux;
            }
        }
        mejora++;
    }
    return contador;
}*/

int ordenarBurbujaV3(estudiante estudiantes[], int n)
{
    int mejora = 1;
    bool change = true;
    int contador = 0;
    estudiante aux;
    for (int i = 0; i < n && change; i++)
    {
        change = false;
        for (int j = 0; j < n - mejora; j++)
        {
            contador++;
            if (estudiantes[j].notap < estudiantes[j + 1].notap)
            {
                aux = estudiantes[j];
                estudiantes[j] = estudiantes[j + 1];
                estudiantes[j + 1] = aux;
                change = true;
            }
        }
        mejora++;
    }
    return contador;
}

int main()
{
    int ne;
    float suma = 0, promedio = 0;

    cout << "Ingrese la cantidad de estudiantes que desea integrar: ";
    cin >> ne;
    estudiante estudiantes[ne];

    for (int i = 0; i < ne; i++)
    {
        cout << "Ingrese el id del estudiante: ";
        cin >> estudiantes[i].id;
        cout << "Ingrese el nombre del estudiante: ";
        cin.ignore();
        getline(cin, estudiantes[i].nombre);
        cout << "Ingrese la nota del estudiante: ";
        cin >> estudiantes[i].notap;
    }

    cout << "Datos ingresados: " << endl;
    cout << setw(5) << "ID" << setw(10) << "Nombres" << setw(20) << "Notas" << endl;
    for (int i = 0; i < ne; i++)
    {
        cout << setw(3);
        cout << estudiantes[i].id << setw(12);
        cout << estudiantes[i].nombre << setw(15);
        cout << estudiantes[i].notap << endl;
        suma += estudiantes[i].notap;
    }
    cout << "Promedio de notas: " << (float)suma / ne << endl;

    // Ordenar los estudiantes de mayor a menor nota
    ordenarBurbujaV3(estudiantes, ne);

    cout << "Listado de estudiantes de mayor a menor nota: " << endl;
    cout << setw(5) << "ID" << setw(10) << "Nombres" << setw(20) << "Notas" << endl;
    for (int i = 0; i < ne; i++)
    {
        cout << setw(3);
        cout << estudiantes[i].id << setw(12);
        cout << estudiantes[i].nombre << setw(15);
        cout << estudiantes[i].notap << endl;
    }

    return 0;
}