#include <string>
#include "Tenant.h"

#ifndef PROPERTY_H
#define PROPERTY_H
class Property
{
public:
    virtual int getRent() = 0;
    std::string toString();
    void setRent(int);
    void setLocation();
    void modPropVal(float);
    void showTenants();
    Property();
    virtual ~Property();

protected:
    int mortgage_total;
    int mortgage_length;
    int mortgage_monthly;

    float propTax;
    float value;
    int rent;
    std::string location;
    Tenant *tenants;
};
#endif
