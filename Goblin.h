
#ifndef GOBLIN_H
#define GOBLIN_H

#include <string>
#include "Ability.h"

/**
  * class Goblin
  * 
  */

class Goblin : public Ability
{
public:
  Goblin ();
  virtual ~Goblin ();
  void applyAbility (char trigger, Character *actingCharacter, Character *targetCharacter);
};

#endif // GOBLIN_H
