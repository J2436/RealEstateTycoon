#include "../include/space.h"

Space::Space(){
    Business b;
    shop = b;
    rent = 2001 + (rand() % 8000);
    numOfTenants = 1;
}

Tenant Space::getTenant(){
    return shop;
}

int Space::getRent(){
    if(numOfTenants == 0 || (shop.getBudget() < rent && shop.getAgreeability() < 2)){
        return 0;
    } else if (shop.getBudget() < rent && shop.getAgreeability() >= 2){
        numOfTenants--;
        return 0;
    } else {
        return rent;
    }
}

std::string Space::toString(){
    return "";
}