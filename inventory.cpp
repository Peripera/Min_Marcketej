#include "inventory.h"

void Inventory::addProduct(string &name, int cantidad) {
    products[name] += cantidad; 
}

int Inventory::getProduct(string &name) {
    auto id = products.find(name);
    if (id != products.end()) {
        return id -> second; // referenciación a segundo elemento
    }
    return -1;
}

bool Inventory::removePorduct(string &name) {
    return products.erase(name) > 0; 
}