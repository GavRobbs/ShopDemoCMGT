#include "../../include/money/money.h"

Wallet::Wallet(std::string owner, float val):ownerName{owner}, contents{val}
{

};

void Wallet::Spend(float amount)
{
    contents -= amount;
}
