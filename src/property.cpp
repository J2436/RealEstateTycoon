#include "../include/property.h"
#include <string>
#include <cstdlib>

void Property::setRent(int n)
{
    rent = n;
}

void Property::modPropVal(float n)
{
    if (n > 0)
    {
        value += (value * n);
    }
    else
    {
        value -= (value * n);
    }
}

Property::Property()
{
    setLocation();
};

void Property::setLocation()
{
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

std::string Property::toString()
{
    std::string result = "Rent: " + rent;
    return result;
}

std::string Property::getLocation(){
    return location;
}