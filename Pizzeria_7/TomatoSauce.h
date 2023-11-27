#pragma once
#include "PizzaDecorator.h"

class TomatoSauce :
    public PizzaDecorator
{
public:
    using PizzaDecorator::PizzaDecorator;

    double getCost() {
        return pizza->getCost() + 1.00;
    }

    string getDescription() {
        return pizza->getDescription() + ", Tomatosauce";
    }
};