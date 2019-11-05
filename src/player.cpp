#include "../include/player.h"
#include <iostream>
Player::Player()
{
    money = 500000;
    props = new Property*[5];
    propsOwned = 0;
}

Player::~Player()
{
    delete[] props;
    props = nullptr;
}

void Player::collectRent(){
   for (int i = 0; i < propsOwned; i++){
      money += props[i]->getRent();
   }
}

void Player::addProp(Property &prop){
    props[propsOwned] = &prop;
    propsOwned++;
}

// void Player::buyProp(Property *prop)
// {
//     if (propsOwned % 5 != 0){
//         props[propsOwned] = prop;
//     } else {
        // 
//     }
// }

int Player::getNumOfProps(){
    return propsOwned;
}

void Player::showProps(){
    std::cout << "Properties Owned: " << std::endl;
    for(int i = 0; i < propsOwned; i++){
        std::cout << "  " << props[i]->toString() << std::endl;
    }
}