#include <iostream>
using namespace std;

struct persona
{
    int id;
    string nombre;
    int edad;
    bool casado = false;
};

void ingresaDatosRegistro(persona per[], int n)
{
    char resp;
    for (int i = 0; i < n; i++)
    {
        per[i].id = i + 1;
        cout << "Ingrese nombre: ";
        getline(cin, per[i].nombre);
        cin.ignore();
        cout << "Ingrese edad: ";
        cin >> per[i].edad;
        cout << "Es casado? (s/n)";
        cin.get(resp);
        cin.ignore();
        if (resp == 's' || resp == 'S')
        {
            per[i].casado = true;
        }
    }
}

void mostraDatosRegistro(persona per[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << per[i].id << "\t";
        cout << per[i].nombre << "\t";
        cout << per[i].edad << "\t";
        cout << per[i].casado << endl;
    }
}

int main()
{
    int np;
    cout << "Ingrese la cantidad de personas: ";
    cin >> np;
    persona personas[np];
    ingresaDatosRegistro(personas, np);
    return 0;
}