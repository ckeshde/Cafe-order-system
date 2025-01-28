
#ifndef CAFE_PART2_DRINK_H
#define CAFE_PART2_DRINK_H

#include <string>

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

};

class WhiteCoffee : public Coffee {
private:
    std::string milkType;

public:
    WhiteCoffee(const std::string& milkType);
    void setMilkType(const std::string& milkType);
    std::string getMilkType() const;
};

class Latte : public WhiteCoffee {
public:
    Latte(const std::string& milkType);
};

class Cappuccino : public WhiteCoffee {
public:
    Cappuccino(const std::string& milkType);
};

class FlatWhite : public WhiteCoffee {
public:
    FlatWhite(const std::string& milkType);
};


#endif
