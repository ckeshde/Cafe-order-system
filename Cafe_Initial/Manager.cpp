
#include "Manager.h"
#include "Host.h"
#include "FoodMaker.h"
#include "CoffeeMaker.h"
#include "Order.h"
#include <iostream>

void Manager::receiveOrder(const Order& order) {
    std::cout << "Manager receives order." << std::endl;
}

void Manager::notifyFoodMaker(const Order& order, FoodMaker& foodMaker) {
    foodMaker.makeFood(order);
}

void Manager::notifyCoffeeMaker(const Order& order, CoffeeMaker& coffeeMaker) {
    coffeeMaker.makeCoffee(order);
}

void Manager::notifyHost(Host& host) {
    host.notifyCompletion();
}
