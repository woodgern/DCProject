
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
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Level ();

  /**
   * Empty Destructor
   */
  virtual ~Level ();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  



  /**
   * @return Tile
   */
  Tile getMap ()
  {
  }


  /**
   */
  void createChambers ()
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

  Chamber chambers;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of chambers
   * @param new_var the new value of chambers
   */
  void setChambers (Chamber new_var)   {
      chambers = new_var;
  }

  /**
   * Get the value of chambers
   * @return the value of chambers
   */
  Chamber getChambers ()   {
    return chambers;
  }
private:



  /**
   */
  void generateEnemies ()
  {
  }


  /**
   */
  void generatePotions ()
  {
  }


  /**
   */
  void generateGold ()
  {
  }


  /**
   * @param  toPlace
   */
  void generatePlayerAndStairs (Player toPlace)
  {
  }


  /**
   */
  void generateEntities ()
  {
  }


  /**
   */
  void buildLevel ()
  {
  }

  void initAttributes () ;

};

#endif // LEVEL_H
