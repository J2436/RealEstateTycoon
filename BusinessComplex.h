#include "Property.h"

#ifndef BUSINESSCOMPLEX_H
#define BUSINESSCOMPLEX_H
class BusinessComplex : public Property {
    public:
        BusinessComplex();
        ~BusinessComplex();
        BusinessComplex(const BusinessComplex &orig);
        BusinessComplex & operator=(const BusinessComplex& orig);
    private:
};

#endif