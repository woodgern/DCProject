
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
   */
  void moveCharacter ()
  {
  }


  /**
   * @return string
   */
  string doAction ()
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






  /**
   * Get the value of health
   * @return the value of health
   */
  int getHealth ()   {
    return health;
  }

  /**
   * Get the value of attack
   * @return the value of attack
   */
  int getAttack ()   {
    return attack;
  }

  /**
   * Get the value of defense
   * @return the value of defense
   */
  int getDefense ()   {
    return defense;
  }

  /**
   * Get the value of accuracy
   * @return the value of accuracy
   */
  int getAccuracy ()   {
    return accuracy;
  }

  /**
   * Get the value of race
   * @return the value of race
   */
  string getRace ()   {
    return race;
  }

  /**
   * Get the value of baseAttack
   * @return the value of baseAttack
   */
  int getBaseAttack ()   {
    return baseAttack;
  }

  /**
   * Get the value of maxHealth
   * @return the value of maxHealth
   */
  int getMaxHealth ()   {
    return maxHealth;
  }

  /**
   * Get the value of baseAccuracy
   * @return the value of baseAccuracy
   */
  int getBaseAccuracy ()   {
    return baseAccuracy;
  }

};

#endif // CHARACTER_H
