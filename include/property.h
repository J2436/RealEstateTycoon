#include "tenant.h"
#include <string>

#ifndef PROPERTY_H
#define PROPERTY_H
class Property
{
public:
    virtual int getRent() = 0;
    virtual std::string toString() = 0;
    void setRent(int);
    void setLocation();
    bool isVacant();
    std::string getLocation();

    void modPropVal(float);

    Property();
    virtual ~Property();
    int numOfTenants;
protected:
    int mortgage_total;
    int mortgage_length;
    int mortgage_monthly;
    float propTax;
    float value;
    int rent;
    std::string location;
};
#endif
