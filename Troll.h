
#ifndef TROLL_H
#define TROLL_H

#include <string>
#include "Ability.h"

/**
  * class Troll
  * 
  */

class Troll : public Ability
{
public:
  
  Troll ();

  void applyAbility (char trigger, Character *actingCharacter, Character *targetCharacter);


};

#endif // TROLL_H
