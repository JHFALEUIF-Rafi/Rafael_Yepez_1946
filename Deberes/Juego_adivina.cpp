#include <iostream>
#include <cstdlib>
#include <ctime>
#include "libreriaparajuego.h"

using namespace std;
using namespace gen;


int main() {
    int cantidad;
    cout << "¿Cuántos números deseas generar? ";
    cin >> cantidad;
    
    if (cantidad <= 0) {
        cout << "La cantidad debe ser mayor que 0." << endl;
        return 1;
    }
    
    jugar(cantidad);
    return 0;
}
