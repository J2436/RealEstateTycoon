#include "property.h"
#include "citizen.h"

#ifndef APARTMENT_H
#define APARMENT_H
class Apartment : public Property
{
public:
    virtual int getRent();
    virtual std::string toString();

    Apartment();
    ~Apartment();
    Apartment(const Apartment &orig);
    Apartment & operator=(const Apartment &orig);

private:
    int rooms;
    Tenant* tenant;
};

#endif