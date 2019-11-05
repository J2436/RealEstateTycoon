#include "player.h"
#include "property.h";
#include "house.h"
#include "apartment.h"
#include "complex.h"
#include "space.h"

#ifndef GAME_H
#define GAME_H

class Game 
{
public:
    void randomEvent();
    void buyProperty();
    void sellProperty();
    Game();
    ~Game();
private:
    int turn;
    House* houses;
    Apartment* apts;
    Complex* complexes;
};

#endif 