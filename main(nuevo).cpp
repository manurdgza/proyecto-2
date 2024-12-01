//
//  main.cpp
//  proyecto 2 (nuevo)
//
//  Created by Manuel Rodriguez on 26/11/24.
//

#include "cartas.h"
#include "carrito.h"

int main() {
    Carrito carrito;
    
    // Crear objetos Nombre, con esto asignamos la calidad que seria comun, rara epica o legendaria.
    Nombre comunNombre("Común");
    Nombre raraNombre("Rara");
    Nombre epicaNombre("Épica");
    Nombre legendariaNombre("Legendaria");

    // Crear objetos de cada tipo con sobres y cajas, aqui creamos los objetos comunes con sus respectivos atributos
    Comun comunSobre(comunNombre, 0.05, 2.0, 5, "Sobre", 15);
    Comun comunCaja(comunNombre, 0.25, 8.0, 25, "Caja", 75);

    // aqui damos la informacion de los objetos raros con su respectiva informacion
    Rara raraSobre(raraNombre, 0.09, 5.0, 5, "Sobre", 10);
    Rara raraCaja(raraNombre, 0.36, 20.0, 25, "Caja", 50);

    // aqui damos la informacion de los objetos epicos con su respectiva informacion
    Epica epicaSobre(epicaNombre, 0.5, 10.0, 5, "Sobre", "comun y raro");
    Epica epicaCaja(epicaNombre, 2.5, 40.0, 25, "Caja", "2 epicos");

    // aqui damos la informacion de los objetos legendarios con su respectiva informacion
    Legendaria legendariaSobre(legendariaNombre, 1.5, 20.0, 5, "Sobre", "suma 30 de dano a todas las cartas de ataque");
    Legendaria legendariaCaja(legendariaNombre, 7.5, 80.0, 25, "Caja", "Suma 30 de dano a las cartas de ataque y 30 de defensa a las cartas defensa");

    // aqui imrpimimos la informacion de todos los objetos para que el cliente pueda ver la informacion
    cout << "Información de las cartas:\n" << endl;

    comunSobre.mostrarInformacion();
    cout << endl;

    comunCaja.mostrarInformacion();
    cout << endl;

    raraSobre.mostrarInformacion();
    cout << endl;

    raraCaja.mostrarInformacion();
    cout << endl;

    epicaSobre.mostrarInformacion();
    cout << endl;

    epicaCaja.mostrarInformacion();
    cout << endl;

    legendariaSobre.mostrarInformacion();
    cout << endl;

    legendariaCaja.mostrarInformacion();
    
    int opcion = -1; // esto lo hacemos para que no sea igual a 0, y cuando de las opciones de preguntar si las imprima ya que se usa un while opcion=0

    while (opcion != 0) { //aqui imrpimimos las opciones que se pueden hacer
        cout << "\n--- Menú del Carrito de Compras ---\n";
        cout << "1. Agregar sobre Común\n";
        cout << "2. Agregar caja Común\n";
        cout << "3. Agregar sobre Raro\n";
        cout << "4. Agregar caja Rara\n";
        cout << "5. Agregar sobre Épico\n";
        cout << "6. Agregar caja Épica\n";
        cout << "7. Agregar sobre Legendario\n";
        cout << "8. Agregar caja Legendaria\n";
        cout << "9. Mostrar carrito\n";
        cout << "10. Calcular total del carrito\n";
        cout << "11. Vaciar carrito\n";
        cout << "0. Salir\n";
        cout << "Seleccione una opción: ";
        cin >> opcion;

        if (opcion == 1) { //aqui vamos a asignar cada numero de opcion a su respectivo producto, por lo que con esto usamos un carrito.agregarsobre y dentro del parentesis va el producto que se va a anadir al carrito.
            carrito.agregarSobre(comunSobre);
        } else if (opcion == 2) {
            carrito.agregarSobre(comunCaja);
        } else if (opcion == 3) {
            carrito.agregarSobre(raraSobre);
        } else if (opcion == 4) {
            carrito.agregarSobre(raraCaja);
        } else if (opcion == 5) {
            carrito.agregarSobre(epicaSobre);
        } else if (opcion == 6) {
            carrito.agregarSobre(epicaCaja);
        } else if (opcion == 7) {
            carrito.agregarSobre(legendariaSobre);
        } else if (opcion == 8) {
            carrito.agregarSobre(legendariaCaja);
        } else if (opcion == 9) {
            carrito.mostrarCarrito(); // aqui da para mostrar el carrito
        } else if (opcion == 10) {
            cout << "Total: $" << carrito.calcularTotal() << endl; //aqui manda a llamar para calcular el total del precio
        } else if (opcion == 11) {
            carrito.vaciarCarrito(); //aqui da para eliminar los articulos del carrito
        } else if (opcion == 0) {
            // Salir del programa
            cout << "Saliendo...\n";
        } else {
            cout << "Opción no válida.\n"; // en caso que de un numero invalido imprime esto y da la opcion de nuevo 
        }
    }
    
    return 0;
}




