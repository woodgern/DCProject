
#ifndef ELF_H
#define ELF_H

#include <string>
#include "Ability.h"

/**
  * class Elf
  * 
  */

class Elf : public Ability
{
public:
  Elf ();
  virtual ~Elf ();
  void applyAbility (char trigger, Character *actingCharacter, Character *targetCharacter);
};

#endif // ELF_H
