#include "Apartment.h"
#include <cstdlib>

Apartment::Apartment()
{
    setRent(rand() % 5000);
    rooms = rand() % 10;
    mortgage = 300000 + (rand() % (600000 - 300000 + 1));
    propertyTax = mortgage * 1.5;
    mortgage_length = mortgage / int(propertyTax);
}
