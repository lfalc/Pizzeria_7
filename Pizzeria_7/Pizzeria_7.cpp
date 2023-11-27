#include <stdlib.h>
#include <string>
#include <iostream>
#include "RegularPizza.h"
#include "AmericanStyle.h"
#include "Pineapple.h"
#include "TomatoSauce.h"
#include "Mozzarella.h"
#include "Ham.h"
#include "Pepperoni.h"

int main() {
    // Create a pineapple pizza
    Pizza* hawai = new Ham(new Pineapple(new TomatoSauce(new RegularPizza())));
    // Print the description and the cost
    std::cout << hawai->getDescription() << ". Preis in Kubanischen Pesos: " << hawai->getCost() << "." << endl;

    // Create an american style pizza
    Pizza* american = new Pepperoni(new Mozzarella(new TomatoSauce(new AmericanStyle())));
    // Print the description and the cost
    std::cout << american->getDescription() << ". Preis in Kubanischen Pesos: " << american->getCost() << "." << endl;
}