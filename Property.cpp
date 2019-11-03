#include "Property.h"

void Property::setRent(int n)
{
    rent = n;
}

void Property::setLocation()
{
    srand(time(0));
    int r = rand() % 5;
    switch (r)
    {
    case 0:
        location = "SE";
        break;
    case 1:
        location = "NE";
        break;
    case 2:
        location = "Midwest";
        break;
    case 3:
        location = "SW";
        break;
    case 4:
        location = "NW";
        break;
    }
};