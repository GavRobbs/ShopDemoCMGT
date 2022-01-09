#include<iostream>
#include "../../include/shop/shop.h"

int main(int argc, char **argv)
{
    Shop myShop{"Friar Truck"};
    myShop.Init();
    myShop.Prompt();
    return 0;
}