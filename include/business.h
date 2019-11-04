#include "property.h"

#ifndef BUSINESS_H
#define BUSINESS_H

class Business
{
public: 
    Business();
    Business(const Business &orig);
    // Business & operator=(const Business &orig);
    ~Business();

private:
    int budget;
    int agreeability;    
};

#endif