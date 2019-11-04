#include "../include/house.h"
#include <cstdlib>
#include <iostream>
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

std::string House::toString()
{
  std::string out = "";
  out += "House \n  Rent: " + std::to_string(rent) + "\n" + 
         "  Value: " + std::to_string(value) + "\n" + 
         "  Mortgage: " + std::to_string(mortgage_total) + "\n" +
         "  Monthly Mortgage Payments: " + std::to_string(mortgage_monthly) + "\n" +
         "  Turns to pay off mortgage: " + std::to_string(mortgage_length);
  return out;
}

House::~House(){
  std::cout << "Deleted House" << std::endl;
}