
#include "CoffeeMaker.h"
#include "Order.h"
#include <iostream>

void CoffeeMaker::makeCoffee(const Order& order) {
    for (auto drink : order.drinks) {
        if (dynamic_cast<BlackCoffee*>(drink)) {
            std::cout << "Making Black Coffee..." << std::endl;
        } else if (dynamic_cast<WhiteCoffee*>(drink)) {
            std::cout << "Making White Coffee..." << std::endl;
        } else {
            std::cout << "Unknown coffee type..." << std::endl;
        }
    }
}
