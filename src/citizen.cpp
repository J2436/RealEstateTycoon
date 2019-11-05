#include "../include/citizen.h"
#include <cstdlib>

Citizen::Citizen(){
    agreeability = (rand() % 5) + 1;
    budget = 500 + ((rand() % 4500) + 1);
}

Citizen::Citizen(const Citizen &orig){
    agreeability = orig.agreeability;
    budget = orig.budget;
}

Citizen & Citizen::operator=(const Citizen &orig){
    if (&orig == this){
        return (*this);
    }
    agreeability = orig.agreeability;
    budget = orig.budget;
    return (*this);
}