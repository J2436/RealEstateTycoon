#include "../include/property.h"
#include <string>
#include <cstdlib>
#include <iostream>

void Property::setRent(int n)
{
    rent = n;
}

void Property::modPropVal(float n)
{
    value += (value * n);
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
        location = "MW";
        break;
    case 3:
        location = "SW";
        break;
    case 4:
        location = "NW";
        break;
    }
};

std::string Property::getLocation()
{
    return location;
}

int Property::getMortgage(){
    return mortgage_monthly;
}

int Property::getTax(){
    return propTax;
}

Property::~Property()
{

}

bool Property::isVacant(){
    if (numOfTenants == 0){
        return true;
    } else {
        return false;
    }
}

int Property::getValue(){
    return value;
}