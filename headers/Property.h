#include <string>
#include "Tenant.h"

#ifndef PROPERTY_H
#define PROPERTY_H
class Property
{
public:
    virtual int getRent() = 0;
    void setRent(int);
    void setLocation();
    void setValue(int);

    virtual ~Property();

protected:
    int mortgage;
    float propertyTax;
    int rooms;
    int mortgage_length;
    int value;
    int rent;
    std::string location;
    Tenant *tenants;

private:
};
#endif
