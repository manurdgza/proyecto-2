//
//  proyecto 2.h
//  Proyecto 2
//
//  Created by Manuel Rodriguez on 07/11/24.
//

#ifndef PROYECTO_2
#define PROYECTO_2

#include <string>
#include <iostream>
#include <vector>
using namespace std;


class Marca {
private:
    string nombre;

public:
    Marca(string m) : nombre(m) {}

    string getNombre() { return nombre; }
};

// Clase Producto (clase base para herencia)
class Producto {
private:
    Marca marca;
    float precio;
    int garantia;

public:
    Producto(Marca m, float p, int g) : marca(m), precio(p), garantia(g) {}

    // Getters
    string getMarca() { return marca.getNombre(); }
    float getPrecio() { return precio; }
    int getGarantia() { return garantia; }

    // Setters
    void setMarca(Marca m) { marca = m; }
    void setPrecio(float p) { precio = p; }
    void setGarantia(int g) { garantia = g; }

    //  mostrar la información 
    void mostrarInformacion() {
        cout << "Marca: " << getMarca() << endl;
        cout << "Precio: $" << getPrecio() << endl;
        cout << "Garantía: " << getGarantia() << " meses" << endl;
    }
};

// Clase Computadora (hereda de Producto)
class Computadora : public Producto {
public:
    Computadora(Marca m, float p, int g) : Producto(m, p, g) {}

    void mostrarInformacion() {
        cout << "Computadora: " << getMarca() << endl;
        cout << "Precio: $" << getPrecio() << endl;
        cout << "Garantía: " << getGarantia() << " meses" << endl;
    }
};

// Clase Telefono (hereda de Producto)
class Telefono : public Producto {
public:
    Telefono(Marca m, float p, int g) : Producto(m, p, g) {}

    void mostrarInformacion() {
        cout << "Teléfono: " << getMarca() << endl;
        cout << "Precio: $" << getPrecio() << endl;
        cout << "Garantía: " << getGarantia() << " meses" << endl;
    }
};

// Clase Audifonos (hereda de Producto)
class Audifonos : public Producto {
public:
    Audifonos(Marca m, float p, int g) : Producto(m, p, g) {}

    void mostrarInformacion() {
        cout << "Audífonos: " << getMarca() << endl;
        cout << "Precio: $" << getPrecio() << endl;
        cout << "Garantía: " << getGarantia() << " meses" << endl;
    }
};

#endif
