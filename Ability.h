
#ifndef ABILITY_H
#define ABILITY_H

#include <string>
#include vector



/**
  * class Ability
  * 
  */

class Ability
{
  char triggerAction;
public:

  
  Ability ();

  /**
   * Empty Destructor
   */
  virtual ~Ability ();

  
  virtual void applyAbility (char trigger, Character actingCharacter, Character targetCharacter)
  {
  }



  


#endif // ABILITY_H
