#include <iostream>
#include <string>
using namespace std;

int main()
{
    string nombre = "Pedro";
    string apellido = ("Perez");
    string inicial(1, 'p');
    string cadena = "Juan Jose Arturo";


    string nombre2(cadena, 5, 4);
    cout << "La longitusd de nombre 2 es: " << nombre2.length() << endl;
    inicial += "edro";
    cout << inicial[0] << endl;
    cout << inicial << endl;
    inicial = "cad";
    cout << inicial << endl;
    cout << nombre2 << endl;
    return 0;
}