
#ifndef GOBLIN_H
#define GOBLIN_H

#include <string>
#include "Ability.h"
#include "Player.h"

/**
  * class Goblin
  * 
  */

class Goblin : public Ability
{
public:
  Goblin ();
  void applyAbility (char trigger, Player *actingCharacter, Character *targetCharacter);
};

#endif // GOBLIN_H
