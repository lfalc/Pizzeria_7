#include <stdlib.h>
#include <string>
using namespace std;

#ifndef PIZZA_H
#define PIZZA_H

class Pizza
{
public:
	Pizza()
	{
	}

	virtual double getCost() = 0;

	virtual string getDescription() = 0;
};

#endif // !PIZZA_H