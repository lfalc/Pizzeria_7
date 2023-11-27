#pragma once
#include "Pizza.h"

class AmericanStyle : public Pizza
{
    using Pizza::Pizza;

    double getCost()
    {
        return 6.00;
    }

    string getDescription()
    {
        return "Dicker Teig mit Kaeserand und";
    }
};