#include "PizzaDecorator.h"

class TomatoSauce : public PizzaDecorator
{
public:
    TomatoSauce(Pizza *pizza)
    {
        this->pizza = pizza;
    }
    double getCost()
    {
        return pizza->getCost() + 1.00;
    }

    string getDescription()
    {
        return pizza->getDescription() + ", Tomatosauce";
    }
};