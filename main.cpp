#include <iostream>
#include "inventory.h"
#include "inventory.cpp"

using namespace std;

int main(){
    Inventory inv;

    string name = "audifonos";

    inv.addProduct(name, 3);
    inv.getProduct(name);
    

    return 0;
}