#include <iostream>
using namespace std;
 void datos(int &num1 ,int &num2){
    cout<<"1: ";
    cin>>num1;
    cout<<"2: ";
    cin>>num2;
 }

void suma(){
    int suma;
    int num1,num2;
    datos(num1,num2);
    suma=num1 + num2;
    cout<<"reaspuesta: "<<suma<<endl;
}
main(){
    suma();
}