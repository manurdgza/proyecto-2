//
//  carrito.h
//  proyecto 2 (nuevo)
//
//  Created by Manuel Rodriguez on 28/11/24.
//

#ifndef CARRITO_H
#define CARRITO_H

#include "cartas.h"

// Clase Carrito
class Carrito {
private:
    Carta sobres[10];  // Con esto vamos a poner el limite de sobres que se pueden vender, para asi evitar los revendedores
    int contador;      // Con este vamos a poner el contador para evitar que excedan el limite

public:
    // Constructor
    Carrito() : contador(0) {} // aqui asignamos el valor inicial al contador que es de 0 ya que no hay nada en el carrito

    // Agregar un sobre al carrito, aqui primero analiza que no exceda el limite, y despues ajusta el contador, despues va a imprimir el nombre del producto que se selecciono, y en caso que el carrito este lleno va a decirle eso al cliente
    void agregarSobre(Carta sobre) {
        if (contador < 10) {
            sobres[contador] = sobre;  // Guardamos la copia del objeto
            contador++;
            cout << "Se agregó un sobre: " << sobres[contador - 1].getNombre() << " al carrito.\n";
        } else {
            cout << "El carrito está lleno. No se pueden agregar más sobres.\n";
        }
    }

    // Mostrar contenido del carrito, en esta opcion vamos a imrpimir el carrito que ya tenga, en caso de que el contador aqui sea 0 no va a imprimir ya que no hay nada, y en caso de que si haya se suma uno al contador y la copia guardada se va a imprimir
    void mostrarCarrito() {
        cout << "Contenido del carrito:\n";
        if (contador == 0) {
            cout << "El carrito está vacío.\n";
        } else {
            for (int i = 0; i < contador; i++) {
                cout << "\n--- Sobre #" << i + 1 << " ---\n";
                sobres[i].mostrarInformacion();  // Llamada a mostrarInformacion() del objeto
            }
        }
    }

    // Calcular el precio total, con esta va a tomar todos los objetos que este guardados y asi va a sumar solamente lso precios con un get, y va a desplegar el precio total ya sumado.
    float calcularTotal() {
        float total = 0;
        for (int i = 0; i < contador; i++) {
            total += sobres[i].getPrecio();  // Usamos el objeto directamente
        }
        return total;
    }

    // Vaciar el carrito, con esta opcion el contador lo va a convertir en cero asi eliminando cualquier objeto que estuviera guardado
    void vaciarCarrito() {
        contador = 0;  // Solo reinicia el contador
        cout << "El carrito ha sido vaciado.\n";
    }
};

#endif

