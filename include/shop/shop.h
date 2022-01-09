#ifndef SHOP_H
#define SHOP_H

#include <vector>
#include <string>
#include "../antique/antique.h"

class Shop{
    private:
    std::vector<Antique> inventory;
    std::string proprietor;
    bool isRunning{true};
    
    void displayInventory();
    void displayOptions();

    public:
    Shop(std::string propName);
    void Init();
    void Prompt();
};

#endif