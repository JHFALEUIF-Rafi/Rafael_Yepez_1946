#include <iostream>
#include <vector>
using namespace std;

void cambiarVector(vector<int> &num)
{
    num[0] = 100;
}

int main()
{
    vector<int> dato, datos1;
    vector<float> notas(3, 4.5);

    dato.push_back(10);
    dato.push_back(20);
    dato.push_back(30);
    dato.push_back(40);
    dato.push_back(50);

    for (int i = 0; i < dato.size(); i++)
    {
        cout << dato[i] << " ";
    }
    cout << endl;
    for (auto x : dato)
    {
        cout << x << " ";
    }
    cout << "\n";
    for (auto y : notas)
    {
        cout << y << " ";
    }
    cout << "datos1\n";
    for (auto x : datos1)
    {
        cout << x << " ";
    }
    dato.erase(dato.begin() + 2, dato.begin() + 4);
    cout << "Nuevos elementos de datos: " << endl;
    for (auto x : dato)
    {
        cout << x << " ";
    }
    dato.erase(dato.begin() + 1, dato.begin() + 2);
    cout << "Nuevos elementos de datos: " << endl;
    for (auto x : dato)
    {
        cout << x << " ";
    }
    cout << "Insertando elemento entre elemenetos: " << endl;
    dato.insert(dato.begin() + 1, 80);
    cout << "Nuevos elementos de datos: " << endl;
    for (auto x : dato)
    {
        cout << x << " ";
    }
    cout << "Insertando valores en una posicion n veces: " << endl;
    dato.insert(dato.begin() + 2, 3, 23);
    cout << "Nuevos elementos de datos: " << endl;
    for (auto x : dato)
    {
        cout << x << " ";
    }
    cambiarVector(dato);
    cout << "Nuevos elementos de datos despues de llamar a la funcion: " << endl;
    for (auto x : dato)
    {
        cout << x << " ";
    }
    dato.pop_back();
    cout << "Nuevos elementos de datos despues de llamar a la funcion: " << endl;
    for (auto x : dato)
    {
        cout << x << " ";
    }
    cout << boolalpha << endl;
    cout << dato.empty();

    return 0;
}