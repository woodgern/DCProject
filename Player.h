
#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include "Character.h"
#include "ItemPotion.h"



/**
  * class Player
  * 
  */

class Player : public Character
{
  int goldCount;
  bool* potionKnowledge;
  int xLoc;
  int yLoc;
public:
  Player (std::string race);
  ~Player ();
  void pickUpGold (int amountToAdd);
  int getGold ();
  bool isPotionKnown (int potionType);
  void applyPotion (ItemPotion *toApply);
  char getClassName ();
  int getX();
  int getY();
  void setPosition(int x, int y);

};

#endif // PLAYER_H
