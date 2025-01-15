/*Pregunta 6
Rafael Yépez*/
#include <iostream>
using namespace std;
int main()
{
    int numero;
    bool s; 
    cout<<"Ingresa un número: ";
    cin>> numero;

    /*
    (Algoritmo original)
    if (numero != 0)
    {
        cout<<"verdadero"<<endl;
    }
    else
    {
        cout<<"falso"<<endl;
    }*/
   
   //Correccion
   s=(numero !=0);
   cout<<boolalpha<<s;
    return 0;
}