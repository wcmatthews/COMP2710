#include <iostream>
#include <string>
#include "Player.h"

using namespace std;

Player::Player()
{
  name = "";
  moves = 0;
}

Player::Player(string pname)
{
  name = pname;
  moves = 0;
}

Player::setPlayerName(string pname)
{
  name = pname;
}

string Player::getPlayerName()
{
  return name;
}

int Player::chooseDirection(int direction)
{
  if (direction > 4)
    cout << "Not a valid direction";
  else
    return direction;
}

int Player::getNumberOfMoves()
{
  return moves;
}

void Player::move()
{
  moves++;
}
