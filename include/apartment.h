#include "property.h"

#ifndef APARTMENT_H
#define APARMENT_H
class Apartment : public Property
{
public:
    virtual int getRent();
    // Big 3
    Apartment();
    ~Apartment();

private:
};

#endif