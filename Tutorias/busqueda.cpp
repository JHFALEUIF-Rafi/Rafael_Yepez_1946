#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    string palabraBuscar, palabraReemplazar, linea;
    cout << "Ingresa la palabra a buscar: ";
    getline(cin, palabraBuscar);
    cout << "Ingresa la palabra de reemplazo: ";
    getline(cin, palabraReemplazar);

    ifstream archivoEntrada("ejemplo.txt");
    ofstream archivoSalida("ejemplo.txt");

    if (!archivoEntrada.is_open() || !archivoSalida.is_open())
    {
        cout << "Error al abrir los archivos" << endl;
        return 1;
    }

    while (getline(archivoEntrada, linea))
    {
        string lineaModificada = linea;
        size_t posicion = lineaModificada.find(palabraBuscar);
        if (posicion != string::npos)
        {
            while (posicion != string::npos)
            {
                lineaModificada.replace(posicion, palabraBuscar.length(), palabraReemplazar);
                posicion = lineaModificada.find(palabraBuscar, posicion + palabraReemplazar.length());
            }
            archivoSalida << lineaModificada << endl;
        }
    }
    archivoSalida.close();
    archivoEntrada.close();

    return 0;
}