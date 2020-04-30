#include "player.h"

#ifndef GAME_H
#define GAME_H

class Game {
public:
  void randomEvent();
  void buyProperty();
  void sellProperty();
  void changeRent();
  void playerTurn();
  void gameLoop();
  void buyHouse(int);
  void buyApt(int);
  void buyComplex(int);
  Game();
  ~Game();

private:
  int houseCount;
  int aptCount;
  int complexCount;
  House *houses;
  Apartment *apts;
  Complex *complexes;
  Player player;
};

#endif
