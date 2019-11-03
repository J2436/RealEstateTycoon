#include "include/apartment.h"
#include <cstdlib>

// Apartment::Apartment()
// {
//     setRent(rand() % 5000);
//     rooms = rand() % 10;
//     mortgage = 300000 + (rand() % (600000 - 300000 + 1));
//     propertyTax = mortgage * 1.5;
//     mortgage_length = mortgage / int(propertyTax);
// }

Apartment::Apartment()
{
    rent = 0;
    value = 0;
    mortgage = 0; // random number < 5000
    mortgage_length = value / mortgage;
    propertyTax = 1.5 * value;
    rooms = 0;
    setLocation();
}

int Apartment::getRent()
{
    return rent * occupiedRooms;
}
