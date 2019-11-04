#include "include/citizen.h"
#include <cstdlib>

Citizen::Citizen(){
    agreeability = (rand() % 5) + 1;
    budget = 500 + (rand() % 4500) + 1;
}