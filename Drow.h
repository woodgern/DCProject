
#ifndef DROW_H
#define DROW_H

#include <string>
#include "Ability.h"
#include "Player.h"

/**
  * class Drow
  * 
  */

class Drow : public Ability
{
public:
  Drow ();
  virtual ~Drow ();
  /**
   * @param  trigger
   * @param  actingCharacter
   * @param  targetCharacter
   */
  void applyAbility (char trigger, Player *actingCharacter, int type);
};

#endif // DROW_H
