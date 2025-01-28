
#ifndef CAFE_PART1_MANAGER_H
#define CAFE_PART1_MANAGER_H

class Order;
class FoodMaker;
class CoffeeMaker;
class Host;

class Manager {
public:
    void receiveOrder(const Order& order);
    void notifyFoodMaker(const Order& order, FoodMaker& foodMaker);
    void notifyCoffeeMaker(const Order& order, CoffeeMaker& coffeeMaker);
    void notifyHost(Host& host);
};


#endif
