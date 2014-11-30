
#ifndef CHAMBER_H
#define CHAMBER_H

#include <string>
#include "Tile.h"
#include "Player.h"
#include "EntityFactory.h"

/**
  * class Chamber
  * 
  */

class Chamber
{
  Tile **contents;
  EntityFactory *generator;
  int size;
  int capacity;
public:
  Chamber ();
  ~Chamber ();
  void placePlayer (Player *toPlace);
  void generateGold ();
  void generatePotion ();
  void generateEnemy ();
  void placeStairs ();
  void addTile (Tile *newTile);
};

#endif // CHAMBER_H
