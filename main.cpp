//
//  main.cpp
//  Proyecto 2
//
//  Created by Manuel Rodriguez on 07/11/24.
//

#include "proyecto 2.h"

int main() {
    // Crear objetos Marca
    Marca dellMarca("Dell");
    Marca hpMarca("HP");
    Marca samsungMarca("Samsung");
    Marca appleMarca("Apple");
    Marca sonyMarca("Sony");
    Marca boseMarca("Bose");

    // Crear objetos de cada clase con diferentes marcas, precios y garantías
    Computadora dell(dellMarca, 1200.0, 24);
    Computadora hp(hpMarca, 1100.0, 18);

    Telefono samsung(samsungMarca, 900.0, 12);
    Telefono apple(appleMarca, 1300.0, 24);

    Audifonos sony(sonyMarca, 200.0, 6);
    Audifonos bose(boseMarca, 250.0, 12);

    // Mostrar la información
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
