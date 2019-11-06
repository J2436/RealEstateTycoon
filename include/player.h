#include "property.h"
#include "house.h"
#include "apartment.h"
#include "complex.h"
#include "space.h"
#ifndef PLAYER_H
#define PLAYER_H

class Player
{
public:
  //player actions
  void collectRent();
  void buyProp(Property& prop);
  void sellProp(int, int);
  void payMortgages();
  void payTaxes();
  void changeRent(int, int);
  // Random Events
  void hurricane();
  void tornado();
  void earthquake();
  void wildfire();
  void marketCrash();
  void gentrification();
  // Getters/Setters
  bool canSell();
  int getNumOfProps();
  int getMoney();
  void showProps();
  void showVacantProps();
  Player();
  ~Player();

private:
  int propsOwned;
  Property **props;
  int money;
};

#endif