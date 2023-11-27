#pragma once
#include "PizzaDecorator.h"

class Pineapple : public PizzaDecorator
{
public:
    Pineapple(Pizza *pizza)
    {
        this->pizza = pizza;
    }

    double getCost()
    {
        return pizza->getCost() + 2.00;
    }

    string getDescription()
    {
        return pizza->getDescription() + ", Pineapple";
    }
};
