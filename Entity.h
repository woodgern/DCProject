
#ifndef ENTITY_H
#define ENTITY_H

#include <string>
#include vector



/**
  * class Entity
  * 
  */

class Entity
{
  char symbol;
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Entity ();

  /**
   * Empty Destructor
   */
  virtual ~Entity ();

  /**
   * @return char
   */
  char getSymbol ()
  {
  }


  /**
   * @return char
   */
  virtual char getClassName ()
  {
  }

};

#endif // ENTITY_H
