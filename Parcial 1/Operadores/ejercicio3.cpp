/*uso de operadores de incremento y decremento*/
#include <iostream>
using namespace std;
int main()
{
    int n1 = 10, n2 = 20, resultado;

    n1++; // n1 = n1 + 1
    ++n2; // n2 = n2 + 1
    cout << "n1= " << n1 << endl;
    cout << "n2= " << n2 << endl;
    // operaciondes de preincremento
    resultado = ++n1;
    cout << "resultado= " << resultado << endl;
    resultado = n2++;
    cout << "n2=" << n2 << endl;
    cout << "resultado= " << resultado << endl;
    return 0;
}