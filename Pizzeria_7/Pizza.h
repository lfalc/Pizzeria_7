#include <stdlib.h>
#include <string>
using namespace std;

class Pizza
{
public:
	Pizza() {
	}

	virtual double getCost() = 0;

	virtual string getDescription() = 0;
};

