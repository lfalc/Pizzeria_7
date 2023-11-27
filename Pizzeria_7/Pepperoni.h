#pragma once
#include "PizzaDecorator.h"


class Pepperoni :
    public PizzaDecorator
{
public:
    Pepperoni(Pizza* pizza) {
        this->pizza = pizza;
    }
    
    double getCost() {
        return pizza->getCost() + 2.00;
    }

    string getDescription() {
        return pizza->getDescription() + ", Pepperoni";
    }
};
