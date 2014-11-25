
#ifndef ORC_H
#define ORC_H

#include <string>
#include "Ability.h"

/**
  * class Orc
  * 
  */

class Orc : public Ability
{
public:
  Orc ();
  virtual ~Orc ();
  /**
   * @param  trigger
   * @param  actingCharacter
   * @param  targetCharacter
   */
  void applyAbility (char trigger, Character *actingCharacter, Character *targetCharacter)
  {
  }
};

#endif // ORC_H
