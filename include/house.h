#include "property.h"
#include "citizen.h"

#ifndef HOUSE_H
#define HOUSE_H
class House : public Property
{
public:
   virtual int getRent();
   virtual std::string toString();

   House();
   ~House();
   House(const House &orig);
   House & operator=(const House &orig);
private:
   Tenant *tenant;

};
#endif