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
    bool canSell();
    std::string getLocation();

    void modPropVal(float);
    void showTenants();

    Property();
    virtual ~Property();

protected:
    int mortgage_total;
    int mortgage_length;
    int mortgage_monthly;
    int numOfTenants;
    float propTax;
    float value;
    int rent;
    std::string location;
};
#endif
