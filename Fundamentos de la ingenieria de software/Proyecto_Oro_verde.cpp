#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


bool esNumero(string str) {
    for (char c : str) {
        if (!isdigit(c)) {
            return false;
        }
    }
    return true;
}

int main() {
    // Datos de las habitaciones
    string nombres[] = {
        "Deluxe King",
        "Deluxe Queen",
        "Deluxe 2 camas twin",
        "Leading Suite Junior",
        "Leading Suite Business",
        "Leading Suite Ejecutiva",
        "Suite Oro Verde"
    };
    int capacidades[] = {2, 2, 2, 4, 4, 4, 2};
    double precios[] = {89.0, 89.0, 89.0, 149.0, 159.0, 169.0, 349.0};
    string dimensiones[] = {
        "24 m2 / 258 ft2",
        "24 m2 / 258 ft2",
        "34 m2 / 366 ft2",
        "45 m2 / 484 ft2",
        "73 m2 / 786 ft2",
        "73 m2 / 786 ft2",
        "78 m2 / 840 ft2"
    };

    char continuarReserva = 'S';

    while (continuarReserva == 'S' || continuarReserva == 's') {

        cout << "====================================\n";
        cout << "     Bienvenido a hotel Oroverde!   \n";
        cout << "====================================\n";


        cout << "Esta listo para hacer su reserva? (Si/No): ";
        string respuesta;
        getline(cin, respuesta);

        if (respuesta != "Si" && respuesta != "si") {
            cout << "Gracias por visitarnos. Esperamos verlo pronto!" << endl;
            return 0;
        }

        // info huesped
        string nombre, apellidos, email, telefono, direccion, ciudad, provincia, codigoPostal;
        cout << "Nombre: ";
        getline(cin, nombre);
        cout << "Apellidos: ";
        getline(cin, apellidos);
        cout << "Direccion de correo electronico: ";
        getline(cin, email);


        do {
            cout << "Numero de telefono: ";
            getline(cin, telefono);
            if (!esNumero(telefono)) {
                cout << "Error: El numero de telefono solo puede contener numeros. Intente nuevamente.\n";
            }
        } while (!esNumero(telefono));


        do {
            cout << "Codigo postal: ";
            getline(cin, codigoPostal);
            if (!esNumero(codigoPostal)) {
                cout << "Error: El codigo postal solo puede contener numeros. Intente nuevamente.\n";
            }
        } while (!esNumero(codigoPostal));

        cout << "Direccion: ";
        getline(cin, direccion);
        cout << "Ciudad: ";
        getline(cin, ciudad);
        cout << "Provincia: ";
        getline(cin, provincia);


        string fechaEntrada, fechaSalida;
        do {
            cout << "Fecha de entrada (DD/MM/AAAA): ";
            getline(cin, fechaEntrada);
            cout << "Fecha de salida (DD/MM/AAAA): ";
            getline(cin, fechaSalida);

            if (fechaSalida <= fechaEntrada) {
                cout << "Error: La fecha de salida debe ser posterior a la fecha de entrada. Intente nuevamente.\n";
            }
        } while (fechaSalida <= fechaEntrada);


        int noches;
        cout << "Numero de noches de estancia: ";
        cin >> noches;


        int adultos, ninos;
        do {
            cout << "Numero de adultos: ";
            cin >> adultos;
            cout << "Numero de ninos: ";
            cin >> ninos;

            if (adultos + ninos > 4) {
                cout << "El total de personas no puede ser mayor a 4 por habitacion. \n"" Por favor haga otra reservacion aparte para el resto de personas\n";
                cout << "Por favor, ingrese nuevamente el numero de personas adecuado.\n";
            }
        } while (adultos + ninos > 4);

        // habitaciones
        cout << "\nSeleccione una habitacion:\n";
        for (int i = 0; i < 7; i++) {
            cout << i + 1 << ") " << nombres[i] << ", "
                << "Capacidad: " << capacidades[i] << ", "
                << "Precio: $" << precios[i] << ", "
                << "Dimensiones: " << dimensiones[i] << endl;
        }

        // Seleccionar habitación
        int seleccion;
        cout << "Ingrese el numero de la habitacion que desea: ";
        cin >> seleccion;

        while (seleccion < 1 || seleccion > 7 || (adultos + ninos > capacidades[seleccion - 1])) {
            if (seleccion < 1 || seleccion > 7) {
                cout << "Seleccion invalida. Intente de nuevo: ";
            } else {
                cout << "La habitacion seleccionada no tiene suficiente capacidad. Intente de nuevo: ";
            }
            cin >> seleccion;
        }

        // habitacion seleccionada
        string habitacionSeleccionada = nombres[seleccion - 1];
        double precioPorNoche = precios[seleccion - 1];
        double precioBase = precioPorNoche * noches;

        // costos extra
        double impuestos = precioBase * 0.12;  // 12% de impuestos
        double servicio = precioBase * 0.10;  // 10% de costo por servicio
        double precioFinal = precioBase + impuestos + servicio;

        // PAGO
        cin.ignore();
        cout << "\nSeleccione el metodo de pago:\n1) MasterCard\n2) VISA\n3) Discover\n4) AmericanExpress\n";
        int metodo;
        cin >> metodo;

        string metodoPago;
        switch (metodo) {
            case 1: metodoPago = "MasterCard"; break;
            case 2: metodoPago = "VISA"; break;
            case 3: metodoPago = "Discover"; break;
            case 4: metodoPago = "AmericanExpress"; break;
            default:
                while (metodo < 1 || metodo > 4) {
                    cout << "Seleccion invalida. Elija un metodo de pago valido (1-4): ";
                    cin >> metodo;
                }
                if (metodo == 1) metodoPago = "MasterCard";
                if (metodo == 2) metodoPago = "VISA";
                if (metodo == 3) metodoPago = "Discover";
                if (metodo == 4) metodoPago = "AmericanExpress";
        }

        cin.ignore(); // Limpiar el buffer
        string titularTarjeta;
        cout << "Titular de la tarjeta: ";
        getline(cin, titularTarjeta);

        // Imprimir factura
        cout << "\n--- Factura de Compra ---\n";
        cout << "Huesped: " << nombre << " " << apellidos << endl;
        cout << "Email: " << email << endl;
        cout << "Telefono: " << telefono << endl;
        cout << "Direccion: " << direccion << ", " << ciudad << ", " << provincia << ", " << codigoPostal << endl;
        cout << "Fecha de entrada: " << fechaEntrada << endl;
        cout << "Fecha de salida: " << fechaSalida << endl;
        cout << "Habitacion: " << habitacionSeleccionada << endl;
        cout << "Adultos: " << adultos << ", Ninos: " << ninos << endl;
        cout << "Noches de estancia: " << noches << endl;
        cout << "Costo base: $" << fixed << setprecision(2) << precioBase << endl; //para q no sea mas de 2 decimales set presition
        cout << "Impuestos: $" << fixed << setprecision(2) << impuestos << endl;
        cout << "Costo por servicio: $" << fixed << setprecision(2) << servicio << endl;
        cout << "Costo total: $" << fixed << setprecision(2) << precioFinal << endl;
        cout << "Metodo de pago: " << metodoPago << endl;
        cout << "Titular de la tarjeta: " << titularTarjeta << endl;
        cout << "Gracias por su reserva. Que tenga una excelente estadia!" << endl;

        // otra reserva?
        cout << "\n¿Desea hacer otra reserva? (Si/No): ";
        string continuar;
        getline(cin, continuar);
        while (continuar != "Si" && continuar != "si" && continuar != "No" && continuar != "no") {
            cout << "Respuesta no valida. Por favor ingrese 'Si' o 'No': ";
            getline(cin, continuar);
        }

        if (continuar == "No" || continuar == "no") {
            continuarReserva = 'N';
        }
    }

    cout << "¡Gracias por usar el sistema de reservas! Hasta luego." << endl;
    return 0;
}

