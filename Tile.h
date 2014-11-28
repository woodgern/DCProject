
#ifndef TILE_H
#define TILE_H

#include <string>
#include "Entity.h"
#include "Player.h"
/**
  * class Tile
  * 
  */

class Tile
{
  bool passable;
  char symbol;
  Entity *occupyingEntity;
public:
  bool isStairs;
  Tile (char symbol);
  ~Tile ();
  bool addEntity (Entity* toPlace);

  int moveEntity (Tile* targetTile);

  void removeEntity ();
  /**
   * @return bool
   */
  bool isOccupied ();


  /**
   * @return char
   */
  char getSymbol ();


  /**
   * @return string
   */
  std::string getEntity ();
  bool isPassable();
  bool isNPC();
  bool isGold();
  int getAmount();
  std::string usePotion(Player* play);
  Entity* getEntity();
};

#endif // TILE_H
