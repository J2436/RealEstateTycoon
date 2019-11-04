#include "../include/apartment.h"
#include <cstdlib>
#include <iostream>

Apartment::Apartment()
{
    rent = 500 + (rand() % 4500) + 1;
    rooms = (rand() % 10) + 1;
    numOfTenants = rooms;
    value = 300000 + (rand() % 300000) + 1;
    propTax = value * 1.5;
    mortgage_total = value;
    mortgage_monthly = (rand() % 5000) + 1;
    mortgage_length = mortgage_total / mortgage_monthly;
    tenant = new Citizen[rooms];
    for (int i = 0; i < rooms; i++){
        Citizen tmp;  
        tenant[i] = tmp;
    }
}

int Apartment::getRent()
{
    int result = 0;
    for (int i = 0; i < numOfTenants; i++){
        if (tenant[i].getBudget() >= rent){
            result += rent;
        } else if (tenant[i].getBudget() < rent && tenant[i].getAgreeability() >= 2){
            std::copy(tenant + (i + 1), tenant + numOfTenants, tenant + i);
            numOfTenants--;
            i--;
        }
    }
    return result;
}


std::string Apartment::toString()
{
  std::string out = "";
  out += "Apartment\n  Rent: " + std::to_string(rent) + "\n" + 
         "  Rooms: " + std::to_string(rooms) + "\n" + 
         "  Occupied Rooms: " + std::to_string(numOfTenants) + "\n" + 
         "  Value: " + std::to_string(value) + "\n" + 
         "  Mortgage: " + std::to_string(mortgage_total) + "\n" +
         "  Monthly Mortgage Payments: " + std::to_string(mortgage_monthly) + "\n" +
         "  Turns to pay off mortgage: " + std::to_string(mortgage_length);
  return out;
}

Apartment::~Apartment(){
    std::cout << "Deleted Apartment" << std::endl;
    delete[] tenant;
}

Apartment::Apartment(const Apartment &orig){
    rent = orig.rent;
    value = orig.value;
    propTax = orig.propTax;
    rooms = orig.rooms;
    numOfTenants= orig.numOfTenants;
    mortgage_total = orig.mortgage_total;
    mortgage_monthly = orig.mortgage_monthly;
    mortgage_length = orig.mortgage_length;
    tenant = new Citizen[numOfTenants];
    // for (int i = 0; i < occupiedRooms; i++){

    // }
}