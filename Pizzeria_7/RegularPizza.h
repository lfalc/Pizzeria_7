#include <stdlib.h>
#include <string>
#include "Pizza.h"
using namespace std;


class RegularPizza :
    public Pizza
{
    RegularPizza() {
    }

    double getCost() {
        return 5.00 + pizza->getCost();
    }

    string getDescription() {
        return "Pizzabrot " + pizza->getDescription();
    }

};
