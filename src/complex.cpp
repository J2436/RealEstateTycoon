#include "../include/complex.h"

Complex::Complex()
{
  rent = 2000 + (rand() % 8000) + 1;
  value = 400000 + (rand() % 200000) + 1;
  mortgage_total = value;
  mortgage_monthly = (rand() % 5000) + 1;
  mortgage_length = mortgage_total / mortgage_monthly;
  propTax = 1.5 * value;
  spaces = (rand() & 5) + 1;
  setLocation();
}