
#include "Order.h"
#include "FoodMaker.h"
#include "CoffeeMaker.h"
#include "Manager.h"
#include "Host.h"

int main() {
    FoodMaker foodMaker;
    CoffeeMaker coffeeMaker;
    Manager manager;
    Host host;

    Order order;
    order.addFood(new Food());
    order.addDrink(new BlackCoffee());

    host.takeOrder(order);

    manager.receiveOrder(order);

    manager.notifyFoodMaker(order, foodMaker);
    manager.notifyCoffeeMaker(order, coffeeMaker);

    manager.notifyHost(host);

    return 0;
}
