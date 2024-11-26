#include <iostream>
#include "inventory.h"
#include "inventory.cpp"
#include "history.h"
#include "history.cpp"

using namespace std;

int main(){
    Inventory inv;
    History historial;

    string name = "audifonos";

    int choice;

    do {
        cout << "Inventario Nozama 2024" << endl;
        cout << "1. Agregar producto" << endl;
        cout << "5. Salir del inventario" << endl;
        cout << "Elige una opción: ";
        cin >> choice; 

        string nombre;
        int cantidad;
        switch(choice) {
            case 1:
                cout << "Nombre del producto: " << endl; 
                cin >> nombre;
                cout << "Cantidad: " << endl;
                cin >> cantidad;
                inv.addProduct(nombre, cantidad);
                break;
            case 5: 
                cout << "Saliendo del inventario. " << endl;
                break;
            default: 
                cout << "Opción no válida" << endl;
                break;
        }

    } while (choice != 5);


    return 0;
}