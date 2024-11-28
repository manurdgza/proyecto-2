//
//  cartas.h
//  proyecto 2 (nuevo)
//
//  Created by Manuel Rodriguez on 26/11/24.
//

#ifndef CARTAS_H
#define CARTAS_H

#include <string>
#include <iostream>
using namespace std;

// Clase Nombre, esta se hace para identificar en el main la diferencia entre las cajas y los sobres de cada rareza
class Nombre {
private:
    string nombre_producto;

public: // En esta se consigue el string del nombre de cada producto
    Nombre(string np) : nombre_producto(np) {}
    string getNombreProducto() { return nombre_producto; }
};

// Clase base Carta // Con esta clase vamos a asignar el nombre, posiblidad de legendaria, precio, contenido y el tipo de empaque, cada clase de herencia va a tener un nuevo atributo que la distinga
class Carta {
protected:
    Nombre nombre;
    float posibilidad_legendaria;
    float precio;
    int contenido;
    string tipo_empaque;

public:
    // Esto es para hacer el constructor sin haber llenado los datos para que nos ayude a intergarlo al carrito
    Carta() : nombre(""), posibilidad_legendaria(0), precio(0), contenido(0), tipo_empaque("") {}

    // Con esta ya vamos a hacer que el constructor ya asigne la informacion de cada producto
    Carta(Nombre n, float pl, float p, int c, string empaque)
        : nombre(n), posibilidad_legendaria(pl), precio(p), contenido(c), tipo_empaque(empaque) {}

    // Getters
    string getNombre() { return nombre.getNombreProducto(); }
    float getPosibilidadLegendaria() { return posibilidad_legendaria; }
    float getPrecio() { return precio; }
    int getContenido() { return contenido; }
    string getTipoEmpaque() { return tipo_empaque; }

    // Setters
    void setNombre(Nombre n) { nombre = n; }
    void setPosibilidadLegendaria(float pl) { posibilidad_legendaria = pl; }
    void setPrecio(float p) { precio = p; }
    void setContenido(int c) { contenido = c; }
    void setTipoEmpaque(string empaque) { tipo_empaque = empaque; }

    // Mostrar información, con esto vamos a imprimir la calidad, que seria el nombre, la posibilidad, el precio, el numero de cartas y el empaque en el que viene
    void mostrarInformacion() {
        cout << "Calidad: " << getNombre() << endl;
        cout << "Posibilidad de legendaria: " << getPosibilidadLegendaria() << endl;
        cout << "Precio: $" << getPrecio() << endl;
        cout << "Número de cartas: " << getContenido() << endl;
        cout << "Empaque: " << getTipoEmpaque() << endl;
    }
};

// Clases de calidad, esta va a tener como objeto la caja comun y el sobre comun, tiene de diferencia el daño que van a sumar las cartas
class Comun : public Carta {
private:
    int daño;
public:
    Comun(Nombre n, float pl, float p, int c, string empaque,int d)
        : Carta(n, pl, p, c, empaque), daño(d) {}

    int getDaño() { return daño; }
    void setDaño(int d) { daño = d; }

    void mostrarInformacion() {
        Carta::mostrarInformacion();
        cout << "Daño de las cartas: " << daño << endl;
    }
};

class Rara : public Carta { // esta es la clase rara de la caja y el sobre, el cual el atributo diferente es la defensa que tienen las cartas, primero asigna la informacion que le damos en la clase carta que da lo basico como el nombre, posibilidad, precio, cantidad y el empaque, y tambien da la defensa
private:
    int defensa;
public:
    Rara(Nombre n, float pl, float p, int c, string empaque, int d)
        : Carta(n, pl, p, c, empaque), defensa(d) {}

    int getDefensa() { return defensa; }
    void setDefensa(int d) { defensa = d; }

    void mostrarInformacion() {
        Carta::mostrarInformacion();
        cout << "Defensa de las cartas: " << defensa << endl;
    }
};

class Epica : public Carta { // en esta clase el atributo unico de la clase de herencia es la carta de entrenador que va a incluir el sobre.
private:
    string entrenador;
public:
    Epica(Nombre n, float pl, float p, int c, string empaque, string e)
        : Carta(n, pl, p, c, empaque), entrenador(e) {}

    string getEntrenador() { return entrenador; }
    void setEntrenador(string e) { entrenador = e; }

    void mostrarInformacion() {
        Carta::mostrarInformacion();
        cout << "Entrenador en el sobre: " << entrenador << endl;
    }
};

class Legendaria : public Carta { // en esta clase el atributo unico es la carta especial, la cual va a sumar bonificadores a las cartas que ya existen
private:
    string carta_especial;
public:
    Legendaria(Nombre n, float pl, float p, int c, string empaque, string ce)
        : Carta(n, pl, p, c, empaque), carta_especial(ce) {}

    string getCarta_especial() { return carta_especial; }
    void setCarta_especial(string ce) { carta_especial = ce; }

    void mostrarInformacion() {
        Carta::mostrarInformacion();
        cout << "Cartas especiales que contiene: " << carta_especial << endl;
    }
};

#endif



