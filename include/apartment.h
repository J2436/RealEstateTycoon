#include "property.h"

#ifndef APARTMENT_H
#define APARMENT_H
class Apartment : public Property
{
public:
    virtual int getRent();
    virtual std::string toString();

    // Big 3
    Apartment();
    // ~Apartment();

private:
    int rooms;
    int occupiedRooms;
};

#endif