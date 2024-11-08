//
//  main.cpp
//  Proyecto 2
//
//  Created by Manuel Rodriguez on 07/11/24.
//

#include "proyecto 2.h"

int main() {
    // Crear objetos de cada clase con diferentes marcas, precios y garantías

    // Computadoras
    Computadora dell("Dell", 1200.0, 24);
    Computadora hp("HP", 1100.0, 18);

    // Teléfonos
    Telefono samsung("Samsung", 900.0, 12);
    Telefono apple("Apple", 1300.0, 24);

    // Audífonos
    Audifonos sony("Sony", 200.0, 6);
    Audifonos bose("Bose", 250.0, 12);

    // Mostrar la información de cada objeto
    cout << "Información de productos:\n" << endl;

    dell.mostrarInformacion();
    cout << endl;

    hp.mostrarInformacion();
    cout << endl;

    samsung.mostrarInformacion();
    cout << endl;

    apple.mostrarInformacion();
    cout << endl;

    sony.mostrarInformacion();
    cout << endl;

    bose.mostrarInformacion();

    return 0;
}

