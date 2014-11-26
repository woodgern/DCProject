
#ifndef LEVEL_H
#define LEVEL_H

#include <string>
#include "Chamber.h"

/**
  * class Level
  * 
  */

class Level
{
  Chamber *chambers;
  void generateEnemies ();
  void generatePotions ();
  void generateGold ();
  void generatePlayerAndStairs (Player *toPlace);
  void generateEntities ();
  void buildLevel ();
  void initAttributes ();
public:
  Level ();
  virtual ~Level ();
  Tile ***getMap ();
  void createChambers ();
  void setChambers (Chamber new_var);
  Chamber *getChambers ();
};

#endif // LEVEL_H
