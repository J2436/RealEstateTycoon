#include "Property.h";

#ifndef Player_H
#define PLAYER_H

class Player
{
public:
  void collectRent(Property);
  void payDues();
  void purchaseProp();
  void sellProp();

  Property *props;
  Player();
  ~Player();

private:
  int money;
};

#endif