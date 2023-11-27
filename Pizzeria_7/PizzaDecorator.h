#pragma once
#include "Pizza.h"

class PizzaDecorator :
    public Pizza
{
protected:
    PizzaDecorator() {
        this->pizza = NULL;
    }

    PizzaDecorator(Pizza* pizza) {
        this->pizza = pizza;
    }

public:
    Pizza* pizza;

    double getCost() {
        if (pizza != NULL){
            return pizza->getCost();
        }
    }

    string getDescription() {
        return pizza->getDescription();
    }

    ~PizzaDecorator() {
        delete pizza;
    }

};