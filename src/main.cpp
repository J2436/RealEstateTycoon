#include "include/Property.h"
#include "include/House.h"
#include "include/Apartment.h"
#include "include/Business.h"
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
  Property *props;
  House h1;
  h1.setRent(2000);
  props[0] = h1;

  std::cout << props[1].getRent() << std::endl;
  return 0;
}
