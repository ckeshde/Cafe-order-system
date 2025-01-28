
#include "CoffeeMaker.h"
#include "Drink.h"
#include <iostream>

void CoffeeMaker::makeCoffee(const Order& order) {
    for (auto drink : order.drinks) {
        WhiteCoffee* whiteCoffee = dynamic_cast<WhiteCoffee*>(drink);
        if (whiteCoffee) {
            std::string milkType = whiteCoffee->getMilkType();
            if (dynamic_cast<Latte*>(whiteCoffee)) {
                std::cout << "Making Latte with " << milkType << " milk..." << std::endl;
            } else if (dynamic_cast<Cappuccino*>(whiteCoffee)) {
                std::cout << "Making Cappuccino with " << milkType << " milk..." << std::endl;
            } else if (dynamic_cast<FlatWhite*>(whiteCoffee)) {
                std::cout << "Making Flat White with " << milkType << " milk..." << std::endl;
            } else {
                std::cout << "Making White Coffee with " << milkType << " milk..." << std::endl;
            }
        } else if (dynamic_cast<BlackCoffee*>(drink)) {
            std::cout << "Making Black Coffee..." << std::endl;
        } else {
            std::cout << "Unknown coffee type..." << std::endl;
        }
    }
}
