#include "../include/business.h"
#include "../include/tenant.h"
#include <cstdlib>

Business::Business(){
    agreeability = (rand() % 5) + 1;
    budget = 2000 + (rand() % 8000) + 1;
}

Business::Business(const Business &orig){
    agreeability = orig.agreeability;
    budget = orig.budget;
}

Business & Business::operator=(const Business &orig){
    if (&orig == this){
        return (*this);
    }
    agreeability = orig.agreeability;
    budget = orig.budget;
    return (*this);
}