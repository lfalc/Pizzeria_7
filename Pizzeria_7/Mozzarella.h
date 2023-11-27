#pragma once
#include "PizzaDecorator.h"


class Mozzarella :
    public PizzaDecorator
{
public:
    Mozzarella(Pizza* pizza) {
        this->pizza = pizza;
    }
    
    double getCost() {
        return pizza->getCost() + 2.00;
    }

    string getDescription() {
        return pizza->getDescription() + ", Mozzarella";
    }
};

