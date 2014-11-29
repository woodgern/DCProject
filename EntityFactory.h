
#ifndef ENTITYFACTORY_H
#define ENTITYFACTORY_H

#include <string>
#include "ItemGold.h"
#include "ItemPotion.h"
#include "NPC.h"



/**
  * class EntityFactory
  * 
  */

class EntityFactory
{
public:
  EntityFactory ();
  /**
   * @return ItemGold
   */
  ItemGold generateGold ();
  Item generateDrops (char killedEntity);
  NPC generateEnemy ();
  ItemPotion generatePotion ();
};

#endif // ENTITYFACTORY_H
