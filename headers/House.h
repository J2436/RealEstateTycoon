#include "Property.h"

#ifndef HOUSE_H
#define HOUSE_H
class House : public Property
{
public:
   virtual int getRent();


   // Big 3
   House();
   ~House();
   House(const House &house);

private:
};
#endif