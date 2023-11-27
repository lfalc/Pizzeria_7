#include "Pizza.h"

#ifndef PIZZADECORATOR_H
#define PIZZADECORATOR_H

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
        else {
            return 0.0;
        }
    }

    string getDescription() {
        if (pizza != NULL) {
            return pizza->getDescription();
        }
        else {
            return ".";
        }
    }

    ~PizzaDecorator() {
        delete pizza;
    }
};

#endif // !PIZZADECORATOR_H