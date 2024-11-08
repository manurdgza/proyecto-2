//
//  proyecto 2.h
//  Proyecto 2
//
//  Created by Manuel Rodriguez on 07/11/24.
//

#ifndef proyecto_2
#define proyecto_2

#include <string>
#include <iostream>
using namespace std;

// Clase Computadora
class Computadora {
private:
    string marca;
    float precio;
    int garantia;

public:
    Computadora(string m, float p, int g) : marca(m), precio(p), garantia(g) {}

    //  getter
    string getMarca() { return marca; }
    float getPrecio() { return precio; }
    int getGarantia() { return garantia; }

    //  setter
    void setMarca(string m) { marca = m; }
    void setPrecio(float p) { precio = p; }
    void setGarantia(int g) { garantia = g; }

    // mostrar la información de la computadora
    void mostrarInformacion() {
        cout << "Computadora: " << marca << endl;
        cout << "Precio: $" << precio << endl;
        cout << "Garantía: " << garantia << " meses" << endl;
    }
};

// Clase Telefono
class Telefono {
private:
    string marca;
    float precio;
    int garantia;

public:
    Telefono(string m, float p, int g) : marca(m), precio(p), garantia(g) {}

    //  getter
    string getMarca() { return marca; }
    float getPrecio() { return precio; }
    int getGarantia() { return garantia; }

    //  setter
    void setMarca(string m) { marca = m; }
    void setPrecio(float p) { precio = p; }
    void setGarantia(int g) { garantia = g; }

    // mostrar la información del teléfono
    void mostrarInformacion() {
        cout << "Teléfono: " << marca << endl;
        cout << "Precio: $" << precio << endl;
        cout << "Garantía: " << garantia << " meses" << endl;
    }
};

// Clase Audifonos
class Audifonos {
private:
    string marca;
    float precio;
    int garantia;

public:
    Audifonos(string m, float p, int g) : marca(m), precio(p), garantia(g) {}

    //  getter
    string getMarca() { return marca; }
    float getPrecio() { return precio; }
    int getGarantia() { return garantia; }

    //  setter
    void setMarca(string m) { marca = m; }
    void setPrecio(float p) { precio = p; }
    void setGarantia(int g) { garantia = g; }

    // mostrar la información de los audífonos
    void mostrarInformacion() {
        cout << "Audífonos: " << marca << endl;
        cout << "Precio: $" << precio << endl;
        cout << "Garantía: " << garantia << " meses" << endl;
    }
};

#endif
