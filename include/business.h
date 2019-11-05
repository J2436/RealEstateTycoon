#include "tenant.h"
#ifndef BUSINESS_H
#define BUSINESS_H

class Business: public Tenant
{
public: 
    Business();
    Business(const Business &orig);
    Business & operator=(const Business &orig);
};

#endif