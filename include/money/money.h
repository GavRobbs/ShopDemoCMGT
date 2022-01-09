#ifndef MONEY_H
#define MONEY_H

#include <string>

struct Wallet{
    float contents;
    std::string ownerName;

    Wallet(std::string owner, float val = 1000.0f);
    void Spend(float amount);
};

#endif