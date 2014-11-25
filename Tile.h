
#ifndef TILE_H
#define TILE_H

#include <string>
#include vector



/**
  * class Tile
  * 
  */

class Tile
{
  bool isPassable;
  char symbol;
  int xLoc;
  int yLoc;
  Entity occupyingEntity;
public:
  bool isStairs;
  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Tile ();

  /**
   * Empty Destructor
   */
  ~Tile ();

  // Static Public attributes
  //  

  // Public attributes
  //  

  

  


  /**
   * @return bool
   * @param  toPlace
   */
  bool addEntity (Entity* toPlace)
  {
  }


  /**
   * @return int
   * @param  targetTile
   */
  int moveEntity (Tile* targetTile)
  {
  }


  /**
   */
  void removeEntity ()
  {
  }


  /**
   * @return bool
   */
  bool isOccupied ()
  {
  }


  /**
   * @return char
   */
  char getSymbol ()
  {
  }


  /**
   * @return string
   */
  string getEntity ()
  {

  }

  bool isPassable() {
  }
  bool isGold() {
  }
  int getAmount() {
    
  }
  void usePotion(Player* play) {

  }
};

#endif // TILE_H
