#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void deficiente(int n)
{
    srand(time(NULL));
    n = 1 + rand() % 5;
    cout << n;
}
void regular(int n)
{
    srand(time(NULL));
    n = 6 + rand() % 4;
    cout << n;
}
void bueno(int n){
    srand(time(NULL));
    n = 11 + rand() % 15;
    cout << n;
}
void muyBueno(int n){
    srand(time(NULL));
    n = 16 + rand() % 2;
    cout << n;
}
void excelente(int n){
    srand(time(NULL));
    n = 19 + rand() % 1;
    cout << n;
}
void imprimir(int n)
{
    deficiente(n);
    cout << "---Valor deficiente" << endl;
    regular(n);
    cout << "---Valor regular" << endl;
    bueno(n);
    cout<<"--Valor bueno"<< endl;
    muyBueno(n);
    cout<<"--Valor muy bueno"<<endl;
    excelente(n);
    cout<<"--Valor excelente"<<endl;

}

int main()
{
    int n;
    imprimir(n);
}