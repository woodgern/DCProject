
#ifndef NPC_H
#define NPC_H

#include <string>
#include "Character.h"



/**
  * class NPC
  * 
  */

/******************************* Abstract Class ****************************
NPC does not have any pure virtual methods, but its author
  defined it as an abstract class, so you should not use it directly.
  Inherit from it instead and create only objects from the derived classes
*****************************************************************************/

class NPC : public Character
{
public:
  NPC ();
  NPC(std::string type);
  void onDeath ();
  char getClassName ();
};

#endif // NPC_H
