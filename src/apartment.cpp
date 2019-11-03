#include "include/apartment.h"
#include <cstdlib>

Apartment::Apartment()
{
    rent = (rand() % 5000) + 1;
    rooms = (rand() % 10) + 1;
    occupiedRooms = rooms;
    value = 300000 + (rand() % 300000) + 1;
    propTax = value * 1.5;
    mortgage_total = value;
    mortgage_monthly = (rand() % 5000) + 1;
    mortgage_length = mortgage_total / mortgage_monthly;
}

int Apartment::getRent()
{
    return rent * occupiedRooms;
}
