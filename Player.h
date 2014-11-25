
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

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Player (std::string race);

  /**
   * Empty Destructor
   */
  ~Player ();

 
  /**
   * @param  amountToAdd
   */
  void pickUpGold (int amountToAdd);
  int getGold ();
  bool isPotionKnown (int potionType);
  void applyPotion (ItemPotion *toApply);
  char getClassName ();
  int getX();
  int getY();

};

#endif // PLAYER_H
