
#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>
#include "Entity.h"


/******************************* Abstract Class ****************************
Character does not have any pure virtual methods, but its author
  defined it as an abstract class, so you should not use it directly.
  Inherit from it instead and create only objects from the derived classes
*****************************************************************************/

class Character : public Entity
{
protected:
  int health;
  int attack;
  int defense;
  int accuracy;
  std::string race;
  int baseDefense;
  int baseAttack;
  int maxHealth;
  int baseAccuracy;

public:
  Character ();
  virtual ~Character ();
  bool isDead ();
  std::string doCombat (Character *target);

  void applyHit (int accuracy);
  std::string getRace ();
  int getHealth ();
  void resetStats ();
  int getDefense();
  int getAttack();
  int getAccuracy();
};

#endif // CHARACTER_H
