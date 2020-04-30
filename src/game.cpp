#include "../include/game.h"
#include <cstdlib>
#include <ctype.h>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

Game::Game() {
  houseCount = 3;
  aptCount = 3;
  complexCount = 3;
  houses = new House[houseCount];
  apts = new Apartment[aptCount];
  complexes = new Complex[aptCount];
}

Game::~Game() {
  delete[] houses;
  houses = nullptr;
  delete[] apts;
  apts = nullptr;
  delete[] complexes;
  complexes = nullptr;
}

void Game::gameLoop() {
  int turn = 1;
  do {
    std::cout
        << "-----------------------------------------------------------------"
        << std::endl;
    if (player.getNumOfProps() != 0) {
      player.collectRent();
      player.payMortgages();
      if (turn % 12 == 0) {
        player.payTaxes();
      }
      randomEvent();
    }
    if (player.getMoney() <= 0 || player.getMoney() >= 1000000) {
      break;
    }
    std::cout << "Current player balance: " << player.getMoney() << std::endl;
    playerTurn();
    turn++;
  } while (player.getMoney() > 0 || player.getMoney() < 1000000);

  if (player.getMoney() >= 1000000) {
    std::cout << "YOU WIN!!!" << std::endl;
  } else if (player.getMoney() <= 0) {
    std::cout << "YOU LOSE!!!" << std::endl;
  }
}

void Game::playerTurn() {
  std::string choice = "0";
  bool repeat = false;
  int checkInput = 0;
  do {
    repeat = false;
    std::cout << "1. Buy a property" << std::endl;
    std::cout << "2. Sell a property" << std::endl;
    std::cout << "3. Change rent of a property" << std::endl;
    std::cout << "Please choose an action by entering a number: ";
    do {
      getline(std::cin, choice);
      std::cout << std::endl;
      if (strlen(choice.c_str()) > 1 || strlen(choice.c_str()) == 0 ||
          isdigit(choice.at(0)) == 0) {
        checkInput = -1;
      } else {
        checkInput = stoi(choice);
      }
    } while (checkInput < 1 || checkInput > 3);
    switch (checkInput) {
    case 1:
      buyProperty();
      break;
    case 2:
      if (player.canSell()) {
        sellProperty();
      } else {
        std::cout << "No properties available to sell!\n" << std::endl;
        repeat = true;
      }
      break;
    case 3:
      if (player.getNumOfProps() == 0) {
        std::cout << "No properties to change rent on!\n" << std::endl;
      } else {
        changeRent();
      }
      break;
    default:
      break;
    }
  } while (repeat == true);
}

void Game::randomEvent() {
  int rand = std::rand() % 7;
  switch (rand) {
  case 0:
    player.hurricane();
    break;
  case 1:
    player.tornado();
    break;
  case 2:
    player.tornado();
    break;
  case 3:
    player.earthquake();
    break;
  case 4:
    player.wildfire();
    break;
  case 5:
    player.marketCrash();
    break;
  case 6:
    player.gentrification();
    break;
  }
}

void Game::buyProperty() {
  int randHouse = rand() % houseCount;
  int randApt = rand() % aptCount;
  int randComplex = rand() % complexCount;
  std::string choice = "0";
  int checkInput = 0;
  std::cout << "Properties for sale: " << std::endl;
  std::cout << "1. " << houses[randHouse].toString() << std::endl;
  std::cout << "2. " << apts[randApt].toString() << std::endl;
  std::cout << "3. " << complexes[randComplex].toString() << std::endl;

  do {
    std::cout << "Choose a property to buy: ";
    getline(std::cin, choice);
    if (strlen(choice.c_str()) > 1 || isdigit(choice.at(0)) == 0) {
      checkInput = -1;
    } else {
      checkInput = stoi(choice);
    }
  } while (checkInput < 0 || checkInput > 3);

  switch (checkInput) {
  case 1:
    buyHouse(randHouse);
    break;
  case 2:
    buyApt(randApt);
    break;
  case 3:
    buyComplex(randComplex);
    break;
  default:
    break;
  }
}

void Game::sellProperty() {
  std::string priceStr = "";
  int price = 0;
  std::string choice = "";
  int checkInput = 0;
  player.showVacantProps();
  std::cout << "\nPlease choose which property to sell: ";
  do {
    getline(std::cin, choice);
    if (strlen(choice.c_str()) > 1 || isdigit(choice.at(0)) == 0) {
      checkInput = -1;
    } else {
      checkInput = stoi(choice);
    }
  } while (checkInput < 0 || checkInput > 50);
  std::cout << "\nHow much would you like to sell it for?";
  getline(std::cin, priceStr);
  price = stoi(priceStr);
  player.sellProp(checkInput, price);
}

void Game::changeRent() {
  player.showProps();
  std::string choice = "";
  std::string priceStr = "";
  int checkInput = 0;
  int price = 0;
  do {
    std::cout << "Change rent of which property? :";
    getline(std::cin, choice);
    if (strlen(choice.c_str()) > 1 || strlen(choice.c_str()) == 0 ||
        isdigit(choice.at(0)) == 0) {
      checkInput = -1;
    } else {
      checkInput = stoi(choice);
    }
  } while (checkInput < 1 || checkInput > player.getNumOfProps());
  do {
    std::cout << "New rent value: ";
    getline(std::cin, priceStr);
    price = stoi(priceStr);
  } while (price < 0);
  player.changeRent(checkInput - 1, price);
}

void Game::buyHouse(int n) {
  player.buyProp(houses[n]);
  houses[n] = House();
  std::cout << "Congratulations on your new house!" << std::endl;
}

void Game::buyApt(int n) {
  player.buyProp(apts[n]);
  apts[n] = Apartment();
  std::cout << "Congratulations on your new apartment!" << std::endl;
}

void Game::buyComplex(int n) {
  player.buyProp(complexes[n]);
  complexes[n] = Complex();
  std::cout << "Congratulations on your new business complex!" << std::endl;
}
