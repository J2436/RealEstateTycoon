#include "../include/player.h"
#include <cstdlib>
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

void Player::buyProp(Property &prop)
{
    addProp(prop);
    money -= prop.getValue();
}

void Player::sellProp(int n, int price)
{
    if (props[n]->isVacant()){
        int rand = std::rand() % 3;
        switch (rand) {
            case 0:
                std::cout << "Congratulations your property sold for the asking price!" << std::endl;
                money += price;
                std::copy(props + (n+1), props + getNumOfProps(), props + n);
                propsOwned--;
                break;
            case 1:
                std::cout << "Congratulations your property sold for the original value of your property!" << std::endl;
                money += props[n]->getValue();
                std::copy(props + (n+1), props + getNumOfProps(), props + n);
                propsOwned--;
                break;
            case 2:
                std::cout << "Congratulations your property sold for a little less than its value!" << std::endl;
                props[n]->modPropVal(-.1);
                money += props[n]->getValue();
                std::copy(props + (n+1), props + getNumOfProps(), props + n);
                propsOwned--;
                break;
        }
    }
}

void Player::payMortgages(){
    for (int i = 0; i < propsOwned; i++){
        money -= props[i]->getMortgage();
    }
}

void Player::payTaxes(){
    for (int i = 0; i < propsOwned; i++){
        money -= props[i]->getTax();
    }
}

int Player::getNumOfProps(){
    return propsOwned;
}

int Player::getMoney()
{
    return money;
}

void Player::showProps()
{
    std::cout << "Properties Owned: " << std::endl;
    for(int i = 0; i < propsOwned; i++){
        std::cout << "  " << props[i]->toString() << std::endl;
    }
}

bool Player::canSell()
{
    for (int i = 0; i < propsOwned; i++){
        if (props[i]->isVacant()){
            return true;
        }
    }
    return false;
}

void Player::hurricane()
{
    for (int i = 0; i < propsOwned; i++){
        if(props[i]->getLocation() == "SE"){
            props[i]->modPropVal(-.5);
        }
    }
    std::cout << "Oh no a hurricane!" << std::endl;
}

void Player::tornado()
{
    for (int i = 0; i < propsOwned; i++){
        if(props[i]->getLocation() == "MW"){
            props[i]->modPropVal(-.3);
        }
    }
    std::cout << "Oh no a tornado!" << std::endl;
}

void Player::earthquake(){
    for (int i = 0; i < propsOwned; i++){
        if(props[i]->getLocation() == "NW"){
            props[i]->modPropVal(-.1);
        }
    }
    std::cout << "Oh no an earthquake!" << std::endl;
}

void Player::wildfire(){
    for (int i = 0; i < propsOwned; i++){
        if(props[i]->getLocation() == "SW"){
            props[i]->modPropVal(-.25);
        }
    }
    std::cout << "Oh no a wildfire!" << std::endl;
}

void Player::marketCrash(){
    for (int i = 0; i < propsOwned; i++){
        props[i]->modPropVal(-.3);
    }
    std::cout << "Oh no a market crash!" << std::endl;
}

void Player::gentrification(){
    std::string tmp = ""; 
    int rand = std::rand() % 5;
    switch (rand){
        case 0: tmp = "SE"; break;
        case 1: tmp = "NE"; break;
        case 2: tmp = "MW"; break;
        case 3: tmp = "SW"; break;
        case 4: tmp = "NW"; break;
    }
    for (int i = 0; i < propsOwned; i++){
        if (props[i]->getLocation() == tmp){
            props[i]->modPropVal(.3); 
        }
    }
    std::cout << "Gentrification in the " << tmp << "!!!" << std::endl;
}