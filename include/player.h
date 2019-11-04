#include "property.h";

#ifndef PLAYER_H
#define PLAYER_H

class Player
{
public:
  void collectRent(Property);
  void purchaseProp(Property);
  void sellProp();

  //Big 3
  Player();
  ~Player();
  Player(const Player &house);

private:
  int money;
  Property *props;
};

#endif