#include "property.h"
#include "business.h"

#ifndef SPACE_H
#define SPACE_H

class Space : public Property
{
public:
    Space();
    Tenant getTenant();
    int virtual getRent();
    std::string virtual toString();
protected:
    std::string size;
    Tenant shop;
};

#endif