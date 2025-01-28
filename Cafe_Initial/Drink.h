
#ifndef CAFE_PART1_DRINK_H
#define CAFE_PART1_DRINK_H

class Drink {
public:
    virtual ~Drink() {}
};

class Coffee : public Drink {
private:
    int sugar;

public:
    Coffee() : sugar(0) {}
    void addSugar(int amount);
};

class BlackCoffee : public Coffee {
public:
    void addSugar(int amount);
};

class WhiteCoffee : public Coffee {
public:
    void addSugar(int amount);
};


#endif
