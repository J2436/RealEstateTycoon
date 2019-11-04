#include "property.h";

#ifndef PLAYER_H
#define PLAYER_H

class Player
{
public:
  void collectRent();
  void buyProp(Property *prop);
  void sellProp(Property *prop);
  void changeRent(int);
  

  Player();
  ~Player();
  // Player(const Player &house);
  // Player & operator=(const Player &right);

private:
  int money;
  int propsOwned;
  Property **props;
};

#endif