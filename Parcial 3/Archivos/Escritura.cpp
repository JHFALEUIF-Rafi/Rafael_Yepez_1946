#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    //crear un objeto de tipo ofstream para escribir el archivo
    ofstream archivoSalida;
    
    //abrir eñ archivo (si no existe, se creara)
    archivoSalida.open("ejemplo.txt");

    //verificar si el archivo se abrio correctamente
    if (archivoSalida.is_open())
    {
        //escribir el archivo
        archivoSalida << "Hola world" << endl;
        archivoSalida << "Esto es una prueba" << endl;
        archivoSalida << "Linea 3" << endl;
        
        //cerrar el archivo
        archivoSalida.close();
        cout << "Texto escrito en el archivo con éxito" << endl;
    }
    else
    {
        cout << "No se puede abrir el archivo" << endl;
    }
    return 0;
}
