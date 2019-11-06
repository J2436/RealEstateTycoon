#include "property.h"
#ifndef PLAYER_H
#define PLAYER_H

class Player
{
public:
  void collectRent();
  void addProp(Property &prop);
  void buyProp(Property &prop);
  void sellProp(int, int);
  void payMortgages();
  void payTaxes();
  // Random Events
  void hurricane();
  void tornado();
  void earthquake();
  void wildfire();
  void marketCrash();
  void gentrification();
  bool canSell();
  // void changeRent(int);
  int getNumOfProps();
  void showProps();
  int getMoney();
  Player();
  ~Player();
  // Player(const Player &house);
  // Player & operator=(const Player &right);

private:
  int propsOwned;
  Property **props;
  int money;
};

#endif