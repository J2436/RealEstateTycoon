#include "include/house.h"

House::House()
{
  rent = 0;
  value = 0;
  mortgage = 0; // random number < 5000
  mortgage_length = value / mortgage;
  propertyTax = 1.5 * value;
  rooms = 0;
  setLocation();
}

int House::getRent()
{
  return rent * occupiedRooms;
}
