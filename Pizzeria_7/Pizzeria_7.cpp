#include "Pizza.h"
#include <stdlib.h>
#include <string>


int main() {
    // Create a Margherita pizza
    Pizza* margherita = new Margherita();
    cout << "Pizza: " << margherita->getDescription() << ", Cost: $" << margherita->getCost() << endl;

    // Create a Margherita pizza with pepperoni
    Pizza* margheritaWithPepperoni = new Pepperoni(new Margherita());
    cout << "Pizza: " << margheritaWithPepperoni->getDescription() << ", Cost: $" << margheritaWithPepperoni->getCost() << endl;

    // Create a Margherita pizza with mozzarella and ham
    Pizza* margheritaWithMozzarellaAndHam = new Ham(new Mozzarella(new Margherita()));
    cout << "Pizza: " << margheritaWithMozzarellaAndHam->getDescription() << ", Cost: $" << margheritaWithMozzarellaAndHam->getCost() << endl;

    // Clean up memory
    delete margherita;
    delete margheritaWithPepperoni;
    delete margheritaWithMozzarellaAndHam;

    return 0;
}