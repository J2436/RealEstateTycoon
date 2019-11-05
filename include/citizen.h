#include "tenant.h"
#ifndef CITIZEN_H
#define CITIZEN_H

class Citizen:public Tenant{
public:
    Citizen();
    Citizen(const Citizen &orig);
    Citizen & operator=(const Citizen &orig);
};

#endif