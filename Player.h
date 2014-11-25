
#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include vector



/**
  * class Player
  * 
  */

class Player
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
  Player ();

  /**
   * Empty Destructor
   */
  ~Player ();

 
  /**
   * @param  amountToAdd
   */
  void pickUpGold (int amountToAdd)
  {
  }


  /**
   * @return int
   */
  int getGold ()
  {
  }


  /**
   * @return bool
   * @param  potionType
   */
  bool isPotionKnown (int potionType)
  {
  }


  /**
   * @param  toApply
   */
  void applyPotion (ItemPotion toApply)
  {
  }


  /**
   * @return string
   */
  string getClassName ()
  {
  }


  /**
   * @return int
   */
  int* getPosition ()
  {

  }

};

#endif // PLAYER_H
