#include "../include/house.h"
#include <cstdlib>
House::House()
{
  rent = 500 + (rand() % 4500) + 1;
  value = 100000 + (rand() % 500000);
  mortgage_total = value;
  mortgage_monthly = (rand() % 5000) + 1;
  mortgage_length = mortgage_total / mortgage_monthly;
  propTax = 1.5 * value;
  numOfTenants = 1;
  tenant = new Citizen();
  setLocation();
}

int House::getRent()
{
  if (numOfTenants == 0 || (tenant->getBudget() < rent && tenant->getAgreeability() < 2 )) { 
    return 0;
  } else if (tenant->getBudget() < rent && tenant->getAgreeability() >= 2) {
    tenant = NULL;
    numOfTenants = 0;
    return 0;
  } else { 
    return rent;
  }
}

std::string House::toString()
{
  std::string out = "";
  out += "House \n      Value: " + std::to_string(value) + "\n" + 
         "      Rent: " + std::to_string(rent) + "\n" + 
         "      Number of Tenants: " + std::to_string(numOfTenants) + "\n" +
         "      Mortgage: " + std::to_string(mortgage_total) + "\n" +
         "      Monthly Mortgage Payments: " + std::to_string(mortgage_monthly) + "\n" +
         "      Location:  " + getLocation();
  return out;
}

House::House(const House &orig)
{
  rent = orig.rent;
  value = orig.value;
  propTax = orig.propTax;
  location = orig.location;
  mortgage_total = orig.mortgage_total;
  mortgage_monthly = orig.mortgage_monthly;
  mortgage_length = orig.mortgage_length;
}

House & House::operator=(const House &orig)
{
  if (&orig == this){
    return (*this);
  }
  rent = orig.rent;
  value = orig.value;
  propTax = orig.propTax;
  location = orig.location;
  mortgage_total = orig.mortgage_total;
  mortgage_monthly = orig.mortgage_monthly;
  mortgage_length = orig.mortgage_length;
  return (*this);
}

House::~House()
{
  delete tenant;
  tenant = nullptr;
}