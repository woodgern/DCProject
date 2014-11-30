
#ifndef LEVEL_H
#define LEVEL_H

#include <string>
#include "Chamber.h"
#include "Tile.h"
#include "Player.h"

/**
  * class Level
  * 
  */

class Level
{
  Chamber **chambers;
  Tile ***map;
  int chamberCount;
  int capacity;
  void generateEnemies ();
  void generatePotions ();
  void generateGold ();
  void generatePlayerAndStairs (Player *toPlace);
  void generateEntities (Player *toPlace);
  void buildLevel ();
  void createChambers ();
  void addChamber(Chamber *toAdd);
public:
  Level (Player *toPlace);
  virtual ~Level ();
  Tile *getTile(int x, int y);
};

#endif // LEVEL_H
