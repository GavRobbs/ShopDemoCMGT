#include "../../include/shop/shop.h"
#include "../../include/antique/antique.h"
#include <iostream>

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

void Shop::Init()
{
    std::cout << "Hello intrepid adventurer! Welcome to my remodelled shop! I used to be a potion seller, but I'm no longer in that line of work due to a run in with a youtube celebrity." << std::endl;
}

void Shop::Prompt()
{
    //Our infinite prompt loop to do whatever we want in the store
    do
    {
        std::cout << "What can I do for you today?" << std::endl;
        displayOptions();
        char c = std::cin.get();
        try
        {
            int option = std::stoi(&c);

            switch(option)
            {
                case 1:
                {
                    break;
                }
                case 2:
                {
                    break;
                }
                case 3:
                {
                    break;
                }
                case 4:
                {
                    isRunning = false;
                    std::cout << "Alright, have a good day then" << std::endl;
                    break;
                }
                default:{
                    throw std::invalid_argument{""};
                }
            }
        } catch(const std::exception &e)
        {
            std::cout << "I'm sorry, could you please repeat that?" << std::endl;
        }
    } while (isRunning);
    
}

void Shop::displayOptions()
{
    std::cout << "1) Making a purchase" << std::endl;
    std::cout << "2) Requesting a refund" << std::endl;
    std::cout << "3) Just browsing" << std::endl;
    std::cout << "4) I'm leaving now" << std::endl;
}