
#include "Host.h"
#include <iostream>

void Host::takeOrder(const Order& order) {
    std::cout << "Host takes order." << std::endl;
}

void Host::notifyCompletion() {
    std::cout << "Order is ready. Notifying the customer." << std::endl;
}
