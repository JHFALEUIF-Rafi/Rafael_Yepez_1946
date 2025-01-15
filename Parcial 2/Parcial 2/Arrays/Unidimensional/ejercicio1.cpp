#include <iostream>
using namespace std;

void llenarverctor(int vector[], int tamanio)
{
    for (int i = 0; i < tamanio; i++)
    {
        cout << "Introduce el valor del elemento " << i + 1 << ": ";
        cin >> vector[i];
    }
}
void verVector(int vector[], int tamanio)
{
    for (int i = 0; i < tamanio; i++)
    {
        cout<<"El elemento "<<i+1<<" del vector es: "<<vector[i]<<endl;
    }
}

int main()
{
    int ne;
    cout << "Cuantos elementos tiene el vector?: ";
    cin >> ne;
    int vector[ne];
    llenarverctor(vector,ne);
    verVector(vector,ne);
    return 0;
}