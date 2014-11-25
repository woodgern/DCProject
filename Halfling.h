
#ifndef HALFLING_H
#define HALFLING_H

#include <string>
#include "Ability.h"

/**
  * class Halfling
  * 
  */

class Halfling : public Ability
{
public:
  Halfling ();  virtual ~Halfling ();
  void applyAbility (char trigger, Character *actingCharacter, Character *targetCharacter);
};

#endif // HALFLING_H
