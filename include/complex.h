#include "property.h"
#include "business.h"
#include "space.h"

#ifndef BUSINESSCOMPLEX_H
#define BUSINESSCOMPLEX_H

class Complex : public Property
{
public:
    virtual int getRent();
    virtual std::string toString();

    Complex();
    ~Complex();
    Complex(const Complex &orig);
    Complex & operator=(const Complex &orig);

    int numOfSpaces;
    Space* spaces;
private:
    // Property** spaces;
};

#endif