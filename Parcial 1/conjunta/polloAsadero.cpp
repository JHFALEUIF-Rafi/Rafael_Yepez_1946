#include <iostream>
using namespace std; 
main(){
    /*int num1; 
    cout<<"ingresa cualquier valor"; cin>>num1;
    if(num1<0||num1>0){
        if(num1!=0){
            cout<<"verdaero";

        }else{
            cout<<"falso";

        }
    }else{
        cout<<"No hay numero insertado"; 
    }*/
    int num;
    bool s;
    cout<<"Ingresar valor :";
    cin>>num;
    s=(num !=0)? true:false;
    cout<<boolalpha<<s;



}