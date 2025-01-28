
#include "Order.h"

Order::Order() {}

Order::~Order() {
    for (auto food : foods) {
        delete food;
    }
    for (auto drink : drinks) {
        delete drink;
    }
}

void Order::addFood(Food* food) {
    foods.push_back(food);
}

void Order::addDrink(Drink* drink) {
    drinks.push_back(drink);
}
