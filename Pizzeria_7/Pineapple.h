#pragma once
#include "PizzaDecorator.h"

class Pineapple :
    public PizzaDecorator
{
public:
    using PizzaDecorator::PizzaDecorator;

    double getCost() {
        return pizza->getCost() + 2.00;
    }

    string getDescription() {
        return pizza->getDescription() + ", Pineapple";
    }
};
