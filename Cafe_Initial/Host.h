
#ifndef CAFE_PART1_HOST_H
#define CAFE_PART1_HOST_H

class Order;

class Host {
public:
    void takeOrder(const Order& order);
    void notifyCompletion();
};

#endif
