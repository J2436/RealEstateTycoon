#include "property.h"

#ifndef HOUSE_H
#define HOUSE_H
class House : public Property
{
public:
   virtual int getRent();
   virtual std::string toString();
   // Big 3
   House();
   // ~House();
   // House(const House &house);

private:
};
#endif