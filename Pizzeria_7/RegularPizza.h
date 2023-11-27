#include <stdlib.h>
#include <string>
#include "Pizza.h"
using namespace std;

class RegularPizza : public Pizza
{
    using Pizza::Pizza;

    double getCost()
    {
        return 5.00;
    }

    string getDescription()
    {
        return "Pizzabrot";
    }
};
