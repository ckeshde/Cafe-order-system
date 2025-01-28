
#include "Order.h"
#include "FoodMaker.h"
#include "CoffeeMaker.h"
#include "Manager.h"
#include "Host.h"
#include "Drink.h"

int main() {

    FoodMaker foodMaker;
    CoffeeMaker coffeeMaker;
    Manager manager;
    Host host;

    Order order;
    order.addFood(new Food());
    order.addDrink(new BlackCoffee());
    order.addDrink(new Latte("almond"));
    order.addDrink(new Cappuccino("oat"));
    order.addDrink(new FlatWhite("soy"));

    host.takeOrder(order);

    manager.receiveOrder(order);

    manager.notifyFoodMaker(order, foodMaker);
    manager.notifyCoffeeMaker(order, coffeeMaker);

    manager.notifyHost(host);

    return 0;
}
