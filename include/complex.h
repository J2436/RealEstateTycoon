#include "property.h"

#ifndef BUSINESSCOMPLEX_H
#define BUSINESSCOMPLEX_H

class Complex : public Property
{
public:
    virtual int getRent();
    virtual std::string toString();

    //Big 3
    Complex();
    ~Complex();
    Complex(const Complex &house);
    // Complex & operator=(const Complex &right);

private:
    int spaces;
    Property *businesses;
};

#endif