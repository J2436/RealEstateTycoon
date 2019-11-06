// #include "../include/buildings.h"
// #include "../include/property.h"
// #include "../include/house.h"
// #include "../include/apartment.h"
// #include "../include/complex.h"
// #include "../include/space.h"

#include "../include/tenant.h"
#include "../include/citizen.h"
#include "../include/business.h"
// #include "../include/player.h"
#include "../include/game.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

// using namespace std;

int main(int argc, char const *argv[])
{ 
    srand(time(NULL));
    Game g;
    g.gameLoop();
    return 0;
}
