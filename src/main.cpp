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
  House h1;
  Apartment a1;
  cout << h1.toString() << endl;
  cout << a1.toString() << endl;
  return 0;
}
