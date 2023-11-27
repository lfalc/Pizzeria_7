#pragma once
#include "Pizza.h"

class AmericanStyle :
    public Pizza
{
    AmericanStyle() {
    }

    double getCost() {
        return 6.00 + pizza->getCost();
    }

    string getDescription() {
        return "Dicker Teig mit Kaeserand und" + pizza->getDescription();
    }

};