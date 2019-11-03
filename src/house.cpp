#include "include/house.h"

House::House()
{
  rent = 500 + (rand() % 4500) + 1;
  value = 100000 + (rand() % 500000);
  mortgage_total = value;
  mortgage_monthly = (rand() % 5000) + 1;
  mortgage_length = mortgage_total / mortgage_monthly;
  propTax = 1.5 * value;
  setLocation();
}

int House::getRent()
{
  return rent;
}
