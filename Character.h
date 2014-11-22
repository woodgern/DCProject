
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

protected:

  // Static Protected attributes
  //  

  // Protected attributes
  //  

public:


  // Protected attribute accessor methods
  //  

protected:

public:


  // Protected attribute accessor methods
  //  

protected:


private:

  // Static Private attributes
  //  

  // Private attributes
  //  

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


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of health
   * @param new_var the new value of health
   */
  void setHealth (int new_var)   {
      health = new_var;
  }

  /**
   * Get the value of health
   * @return the value of health
   */
  int getHealth ()   {
    return health;
  }

  /**
   * Set the value of attack
   * @param new_var the new value of attack
   */
  void setAttack (int new_var)   {
      attack = new_var;
  }

  /**
   * Get the value of attack
   * @return the value of attack
   */
  int getAttack ()   {
    return attack;
  }

  /**
   * Set the value of defense
   * @param new_var the new value of defense
   */
  void setDefense (int new_var)   {
      defense = new_var;
  }

  /**
   * Get the value of defense
   * @return the value of defense
   */
  int getDefense ()   {
    return defense;
  }

  /**
   * Set the value of specialAbility
   * @param new_var the new value of specialAbility
   */
  void setSpecialAbility (Ability new_var)   {
      specialAbility = new_var;
  }

  /**
   * Get the value of specialAbility
   * @return the value of specialAbility
   */
  Ability getSpecialAbility ()   {
    return specialAbility;
  }

  /**
   * Set the value of accuracy
   * @param new_var the new value of accuracy
   */
  void setAccuracy (int new_var)   {
      accuracy = new_var;
  }

  /**
   * Get the value of accuracy
   * @return the value of accuracy
   */
  int getAccuracy ()   {
    return accuracy;
  }

  /**
   * Set the value of race
   * @param new_var the new value of race
   */
  void setRace (string new_var)   {
      race = new_var;
  }

  /**
   * Get the value of race
   * @return the value of race
   */
  string getRace ()   {
    return race;
  }

  /**
   * Set the value of baseAttack
   * @param new_var the new value of baseAttack
   */
  void setBaseAttack (int new_var)   {
      baseAttack = new_var;
  }

  /**
   * Get the value of baseAttack
   * @return the value of baseAttack
   */
  int getBaseAttack ()   {
    return baseAttack;
  }

  /**
   * Set the value of maxHealth
   * @param new_var the new value of maxHealth
   */
  void setMaxHealth (int new_var)   {
      maxHealth = new_var;
  }

  /**
   * Get the value of maxHealth
   * @return the value of maxHealth
   */
  int getMaxHealth ()   {
    return maxHealth;
  }

  /**
   * Set the value of baseAccuracy
   * @param new_var the new value of baseAccuracy
   */
  void setBaseAccuracy (int new_var)   {
      baseAccuracy = new_var;
  }

  /**
   * Get the value of baseAccuracy
   * @return the value of baseAccuracy
   */
  int getBaseAccuracy ()   {
    return baseAccuracy;
  }
private:


  void initAttributes () ;

};

#endif // CHARACTER_H
