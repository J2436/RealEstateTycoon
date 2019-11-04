#include "../include/player.h"

Player::Player()
{
    money = 500000;
    props = new Property*[5];
    propsOwned = 0;
}

Player::~Player()
{
    delete[] props;
}
void Player::buyProp(Property *prop)
{
    if (propsOwned % 5 != 0){
        props[propsOwned] = prop;
    } else {
        
    }
}

