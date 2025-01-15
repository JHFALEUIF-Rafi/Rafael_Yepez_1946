#include <iostream>
using namespace std;
int main()
{
    /*Operadores relacionales*/
    int a = 5, b = 10;
    bool c = true, d = false;
    cout << "a < b: " << (a < b) << endl;
    cout << "a > b: " << (a > b) << endl;
    cout << "a >= b: " << (a >= b) << endl;
    cout << "a <= b: " << (a <= b) << endl;
    cout << "a == b: " << (a == b) << endl;
    cout << "a != b: " << (a != b) << endl;

    /*Operadores Lógicos*/
    cout << "c && d: " << boolalpha << (c && d) << endl;
    cout << "c || d: " <<(c || d) << endl;
    cout << "!c: " << (!c) << endl;
    cout << "!d: " << (!d) << endl;
    cout << "c && !d: " << (c && !d) << endl;
    cout << "c || !d: " << (c || !d) << endl;
    cout << "!c && d: " << (!c && d) << endl;
    cout << "!c || d: " << (!c || d) << endl;

    return 0;
}