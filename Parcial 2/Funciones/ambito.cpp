#include <iostream>
using namespace std;
float gravedad = 9.8;

void funcion1(int a)
{
    cout << "Gravedad en funcion1: " << gravedad << endl;
    cout << "A " << a << endl;
}

void funcion2(float x)
{
    cout << "Gravedad en funcion2: " << gravedad << endl;
    cout << "X: " << x << endl;
}

int main()
{
    int num1 = 10;
    float num2 = 20.5;
    {
        char letra = 'a';
        cout << "Letra: " << letra << endl;
    }
    cout << "Gravedad en main " << gravedad << endl;
    funcion1(num1);
    funcion2(num2);
    return 0;
}