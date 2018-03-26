#include <iostream>
#include <string>

#ifndef PLAYER_H
#define PLAYER_H

using namespace std;

class Player
{
public:
  Player(string pname, int moves);
  Player();

  void setPlayerName(string pname);
  string getPlayerName();
  int chooseDirection(int directionChoice); //need?
  int getNumberOfMoves();
  void move();

private:
  string name;
  int moves;

};
#endif
