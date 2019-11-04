#include "../include/complex.h"
#include <iostream>

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

Complex::~Complex()
{
    std::cout << "Deleted Complex" << std::endl;
}

Complex::Complex(const Complex &orig)
{
    rent = orig.rent;
    value = orig.value;
    propTax = orig.propTax;
    location = orig.location;
    mortgage_total = orig.mortgage_total;
    mortgage_monthly = orig.mortgage_monthly;
    mortgage_length = orig.mortgage_length;
    spaces = orig.spaces;
}

