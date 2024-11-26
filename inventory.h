#ifndef INVENTORY_H
#define INVENTORY_H

#include <string>
#include <unordered_map>

using namespace std;

class Inventory {
    private:
        unordered_map<string, int> products;


    public: 
        void addProduct(string& name, int cantidad);
        int getProduct(string& name);
        bool removePorduct(string& name);
};


#endif //INVENTORY_H