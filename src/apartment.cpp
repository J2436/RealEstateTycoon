#include "../include/apartment.h"
#include <cstdlib>

Apartment::Apartment()
{
    rent = 500 + (rand() % 4500) + 1;
    rooms = (rand() % 10) + 1;
    occupiedRooms = rooms;
    value = 300000 + (rand() % 300000) + 1;
    propTax = value * 1.5;
    mortgage_total = value;
    mortgage_monthly = (rand() % 5000) + 1;
    mortgage_length = mortgage_total / mortgage_monthly;
}

int Apartment::getRent()
{
    return rent * occupiedRooms;
}

std::string Apartment::toString(){
  std::string out = "";
  out += "Apartment\n  Rent: " + std::to_string(rent) + "\n" + 
         "  Rooms: " + std::to_string(rooms) + "\n" + 
         "  Occupied Rooms: " + std::to_string(occupiedRooms) + "\n" + 
         "  Value: " + std::to_string(value) + "\n" + 
         "  Mortgage: " + std::to_string(mortgage_total) + "\n" +
         "  Monthly Mortgage Payments: " + std::to_string(mortgage_monthly) + "\n" +
         "  Turns to pay off mortgage: " + std::to_string(mortgage_length);
  return out;
}