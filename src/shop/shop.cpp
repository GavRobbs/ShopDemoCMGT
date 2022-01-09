#include "../../include/shop/shop.h"
#include "../../include/antique/antique.h"

Shop::Shop(std::string propName):proprietor{propName}
{
    inventory.push_back(Antique{
        "Longsword of Brilliance", 
        50.0f,
        false
    });

    inventory.push_back(Antique{
        "Cursed dagger of balding",
        20.0f,
        true
    });
}