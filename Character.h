
#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>

/**
  * class Character
  * 
  */

/******************************* Abstract Class ****************************
Character does not have any pure virtual methods, but its author
  defined it as an abstract class, so you should not use it directly.
  Inherit from it instead and create only objects from the derived classes
*****************************************************************************/

class Character
{

  int health;
  int attack;
  int defense;
  Ability specialAbility;
  int accuracy;
  string race;
  int baseAttack;
  int maxHealth;
  int baseAccuracy;

public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Character ();

  /**
   * Empty Destructor
   */
  virtual ~Character ();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  



  /**
   * @param  trigger
   */
  void applyAbility (string trigger)
  {
  }


  /**
   * @return bool
   */
  bool isDead ()
  {
  }


  /**
   * @return string
   * @param  target
   */
  string attack (Character target)
  {
  }


  /**
   * @return int
   * @param  accuracy
   */
  int applyHit (int accuracy)
  {
  }


  /**
   * @return string
   */
  string getRace ()
  {
  }


  /**
   * @return int
   */
  int baseDefense ()
  {
  }


  /**
   */
  void resetStats ()
  {
  }


  void usePotion()
  {
  }







};

#endif // CHARACTER_H
