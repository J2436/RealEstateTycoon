#include "../include/complex.h"
#include "../include/space.h"

Complex::Complex()
{
  rent = 2000 + (rand() % 8000) + 1;
  value = 400000 + (rand() % 200000) + 1;
  mortgage_total = value;
  mortgage_monthly = (rand() % 5000) + 1;
  mortgage_length = mortgage_total / mortgage_monthly;
  propTax = 1.5 * value;
  numOfSpaces = (rand() % 5) + 1;
  numOfTenants = numOfSpaces; 
  spaces = new Space[numOfSpaces];
  for(int i = 0; i < numOfTenants; i++){
    Space tmp;
    spaces[i] = tmp;
  }
  setLocation();
}

Complex::~Complex()
{
    delete[] spaces;
    spaces = nullptr;
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
    numOfSpaces = orig.numOfSpaces;
}

Complex & Complex::operator=(const Complex &orig)
{
  if(&orig == this){
    return (*this);
  }
  rent = orig.rent;
  value = orig.value;
  propTax = orig.propTax;
  location = orig.location;
  mortgage_total = orig.mortgage_total;
  mortgage_monthly = orig.mortgage_monthly;
  mortgage_length = orig.mortgage_length;
  numOfSpaces = orig.numOfSpaces;

  return (*this);
}

int Complex::getRent(){
  int result = 0;
  for(int i = 0; i < numOfTenants; i++){
    if (spaces[i].getTenant().getBudget() >= rent){
      result += rent;
      modPropVal(.015);
    } else if(spaces[i].getTenant().getBudget() < rent && spaces[i].getTenant().getAgreeability() >= 2){
      //Evict tenant
      std::copy(spaces + (i+1), spaces+numOfTenants, spaces + i);
      numOfTenants--;
      i--;
    }
  }
  return result;
}

std::string Complex::toString()
{
  std::string out = "";
  out += "Business Complex\n      Rent: " + std::to_string(rent) + "\n" + 
         "      Spaces: " + std::to_string(numOfSpaces) + "\n" + 
         "      Occupied Spaces: " + std::to_string(numOfTenants) + "\n" + 
         "      Value: " + std::to_string(value) + "\n" + 
         "      Mortgage: " + std::to_string(mortgage_total) + "\n" +
         "      Monthly Mortgage Payments: " + std::to_string(mortgage_monthly) + "\n" +
         "      Location: " + getLocation();
  return out;
}