#include <string>
#include "Tenant.h"

#ifndef PROPERTY_H
#define PROPERTY_H
class Property {
    public:
        int collectRent();
        void setRent(int);
        void setLocation();
        Property* props;

    protected:
        int mortgage;
        std::string location;
        float propertyTax;
        int spaces;
        int mortgage_length;
     
    private:
        int value;
        int rent;
};
#endif 
