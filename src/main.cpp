// #include "include/buildings.h"
#include "../include/property.h"
#include "../include/house.h"
#include "../include/apartment.h"

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc, char const *argv[])
{
  srand(time(NULL));
  Apartment a1;
  
  cout << a1.getRent() << endl;
  return 0;
}
