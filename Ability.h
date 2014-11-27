
#ifndef ABILITY_H
#define ABILITY_H

#include <string>
#include "Character.h"

/**
  * class Ability
  * 
  */

class Ability
{
protected:
  void initAttributes () ;
  char triggerAction;
public:
  Ability ();
  virtual ~Ability ();

  /**
   * @param  trigger
   * @param  actingCharacter
   * @param  targetCharacter
   */
  virtual void applyAbility (char trigger, Character *actingCharacter, Character *targetCharacter)
  {
  }

  /**
   * Set the value of triggerAction
   * @param new_var the new value of triggerAction
   */
  void setTriggerAction (char new_var)   {
      triggerAction = new_var;
  }

  /**
   * Get the value of triggerAction
   * @return the value of triggerAction
   */
  char getTriggerAction ()   {
    return triggerAction;
  }
};

#endif // ABILITY_H
