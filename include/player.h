#include "property.h"
#ifndef PLAYER_H
#define PLAYER_H

class Player
{
public:
  void collectRent();
  void addProp(Property &prop);
  // void buyProp(Property *prop);
  // void sellProp(Property *prop);
  // void changeRent(int);
  int getNumOfProps();
  void showProps();

  Player();
  ~Player();
  // Player(const Player &house);
  // Player & operator=(const Player &right);

  Property **props;
private:
  int money;
  int propsOwned;
};

#endif