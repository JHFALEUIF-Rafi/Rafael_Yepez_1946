#include <iostream>
#include <cmath>
using namespace std;

float desviacionEstandar(float notas[], int numeroEstudiantes, float promedio = 16)
{
    float sumaDiferencias = 0;
    for (int i = 0; i < numeroEstudiantes; i++)
    {
        sumaDiferencias += pow(notas[i] - promedio, 2);
    }
    return sqrt(sumaDiferencias / numeroEstudiantes);
}

void categoria(float z){
    promedio
}

float promedio(float notas[], int numeroEstudiantes)
{
    float suma = 0;
    for (int i = 0; i < numeroEstudiantes; i++)
    {
        suma += notas[i];
    }
    return suma / numeroEstudiantes;
}

int main()
{
    int estudiantes;

    cout << "Numero de estudiantes: ";
    cin >> estudiantes;

    float notas[estudiantes];
    cout << "Ingrese las notas de los estudiantes: ";
    for (int i = 0; i < estudiantes; i++)
    {
        cout << "Nota " << i + 1 << ": ";
        cin >> notas[i];
    }

    float promedioClase = promedio(notas, estudiantes);
    cout << promedioClase << endl;

    float ds = desviacionEstandar(notas, estudiantes, promedioClase);
    cout << ds << endl;

    return 0;
}