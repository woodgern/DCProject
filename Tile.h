
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
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Tile ();

  /**
   * Empty Destructor
   */
  virtual ~Tile ();

  // Static Public attributes
  //  

  // Public attributes
  //  

  bool isStairs;

  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  


  /**
   * Set the value of isStairs
   * @param new_var the new value of isStairs
   */
  void setIsStairs (bool new_var)   {
      isStairs = new_var;
  }

  /**
   * Get the value of isStairs
   * @return the value of isStairs
   */
  bool getIsStairs ()   {
    return isStairs;
  }


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
   * @return char
   */
  char getEntity ()
  {
  }

protected:

  // Static Protected attributes
  //  

  // Protected attributes
  //  

public:


  // Protected attribute accessor methods
  //  

protected:

public:


  // Protected attribute accessor methods
  //  

protected:


private:

  // Static Private attributes
  //  

  // Private attributes
  //  

  bool isPassable;
  char symbol;
  int xLoc;
  int yLoc;
  Entity occupyingEntity;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of isPassable
   * @param new_var the new value of isPassable
   */
  void setIsPassable (bool new_var)   {
      isPassable = new_var;
  }

  /**
   * Get the value of isPassable
   * @return the value of isPassable
   */
  bool getIsPassable ()   {
    return isPassable;
  }

  /**
   * Set the value of symbol
   * @param new_var the new value of symbol
   */
  void setSymbol (char new_var)   {
      symbol = new_var;
  }

  /**
   * Get the value of symbol
   * @return the value of symbol
   */
  char getSymbol ()   {
    return symbol;
  }

  /**
   * Set the value of xLoc
   * @param new_var the new value of xLoc
   */
  void setXLoc (int new_var)   {
      xLoc = new_var;
  }

  /**
   * Get the value of xLoc
   * @return the value of xLoc
   */
  int getXLoc ()   {
    return xLoc;
  }

  /**
   * Set the value of yLoc
   * @param new_var the new value of yLoc
   */
  void setYLoc (int new_var)   {
      yLoc = new_var;
  }

  /**
   * Get the value of yLoc
   * @return the value of yLoc
   */
  int getYLoc ()   {
    return yLoc;
  }

  /**
   * Set the value of occupyingEntity
   * @param new_var the new value of occupyingEntity
   */
  void setOccupyingEntity (Entity new_var)   {
      occupyingEntity = new_var;
  }

  /**
   * Get the value of occupyingEntity
   * @return the value of occupyingEntity
   */
  Entity getOccupyingEntity ()   {
    return occupyingEntity;
  }
private:


  void initAttributes () ;

};

#endif // TILE_H
