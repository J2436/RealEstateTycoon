#include "Property.h"

#ifndef HOUSE_H
#define HOUSE_H
class House: public Property {
   public:
        House();
        ~House();
        House(const House &house);
   private: 

};
#endif