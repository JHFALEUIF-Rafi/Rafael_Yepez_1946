#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> numeros(10);
    for (int i = 0; i < 10; i++)
    {
        numeros[i] = i + 1;
    }

    cout << "Los elementos del vector: " << endl;
    for (auto x : numeros)
    {
        cout << x << " ";
    }

    cout << "\nTamanio del vector: " << numeros.size() << endl;
    numeros.erase(numeros.begin() + 3, numeros.begin() + 6);
    for (auto x : numeros)
    {
        cout << x << " ";
    }
    cout << endl;
    cout << "\nTamanio del vector: " << numeros.size() << endl;

    return 0;
}