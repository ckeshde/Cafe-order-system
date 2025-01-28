
#include "Drink.h"
#include <iostream>

void Coffee::addSugar(int amount) {
    sugar += amount;
    std::cout << "Added " << amount << " sugar to the coffee. Current sugar level: " << sugar << std::endl;
}

void BlackCoffee::addSugar(int amount) {
    Coffee::addSugar(amount);
}

void WhiteCoffee::addSugar(int amount) {
    Coffee::addSugar(amount);
}
