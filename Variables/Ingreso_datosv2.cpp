#include<iostream>
main(){
    int i,
    short valor;
    char letra;
    bool bandera;
    float peso;
    double altura;
    
    cout << "Ingrese valor entero:\t";
    cin >> i;
    cout << "Ingrese un valor char";
    cin >> letra;
    cout << "Ingrese valor short";
    cin >> valor;
    cout << "Ingrese valor bool";
    cin >> bandera;
    cout << "Ingrese valor float";
    cin >> peso;
    cout << "Ingrese valor double";
    cin >> altura;
    cout << "Valores ingresados:\n";
    cout << "El valor entero es " << i << endl;
    cout << "El valor short es " << valor << endl;
    cout << "El valor char es " << letra << endl;
    cout << "El valor bool es " << bandera << endl;
    cout << "El valor float es " << peso << endl;
    cout << "El valor double es " << altura << endl;

}