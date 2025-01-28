

#ifndef CAFE_PART2_ORDER_H
#define CAFE_PART2_ORDER_H

#include <vector>
#include "Food.h"
#include "Drink.h"

class Order {
private:
    std::vector<Food*> foods;
    std::vector<Drink*> drinks;

public:
    Order();
    ~Order();
    void addFood(Food* food);
    void addDrink(Drink* drink);

    friend class CoffeeMaker;
};


#endif
