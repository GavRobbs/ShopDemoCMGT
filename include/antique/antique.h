#ifndef ANTIQUE_H
#define ANTIQUE_H

#include <string>

struct Antique{
    
    std::string name;
    float cost;
    bool isCursed;

    Antique(std::string Name, float val, bool cursed);
};

#endif