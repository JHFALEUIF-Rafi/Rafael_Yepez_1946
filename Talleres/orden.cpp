// Algoritmo orden
#include <iostream>
using namespace std;
int main()
{
    int n1, n2, n3, aux;
    cout << "Ingrese primer valor ";
    cin >> n1;
    cout << "Ingrese segundo valor ";
    cin >> n2;
    cout << "Ingrese tercer valor ";
    cin >> n3;

    aux = n1;
    n1 = n2;
    n2 = n3;
    n3 = aux;

    cout<< "El nuevo valor uno es: " << n1 << endl;
    cout << "El nuevo valor dos es: " << n2 << endl;
    cout << "El nuevo valor tres es: " << aux << endl;
    return 0;
}