#include "Property.h"

#ifndef APARTMENT_H
#define APARMENT_H
class Apartment : public Property {
    public:
        Apartment();
        virtual int collectRent();
        virtual int setValue();
    private:
};  

#endif