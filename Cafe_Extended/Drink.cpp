
#include "Drink.h"
#include <iostream>

void Coffee::addSugar(int amount) {
    sugar += amount;
    std::cout << "Added " << amount << " sugar(s) to the coffee. Current sugar level: " << sugar << std::endl;
}

WhiteCoffee::WhiteCoffee(const std::string& milkType) : milkType(milkType) {}

void WhiteCoffee::setMilkType(const std::string& milkType) {
    this->milkType = milkType;
}

std::string WhiteCoffee::getMilkType() const {
    return milkType;
}

Latte::Latte(const std::string& milkType) : WhiteCoffee(milkType) {}

Cappuccino::Cappuccino(const std::string& milkType) : WhiteCoffee(milkType) {}

FlatWhite::FlatWhite(const std::string& milkType) : WhiteCoffee(milkType) {}


