#pragma once
#include "PizzaDecorator.h"


class Ham :
    public PizzaDecorator
{
public:
    Ham(Pizza* pizza) {
        this->pizza = pizza;
    }
    double getCost() {
        return pizza->getCost() + 2.00;
    }

    string getDescription() {
        return pizza->getDescription() + ", Ham";
    }
};
