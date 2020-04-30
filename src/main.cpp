//#include "../include/tenant.h"
//#include "../include/citizen.h"
//#include "../include/business.h"
// #include "../include/player.h"
#include "../include/game.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

// using namespace std;

int main(int argc, char const *argv[]) {
  srand(time(NULL));
  Game g;
  g.gameLoop();
  return 0;
}
