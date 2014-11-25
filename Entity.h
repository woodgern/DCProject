
#ifndef ENTITY_H
#define ENTITY_H

#include <string>

/**
  * class Entity
  * 
  */

class Entity
{
protected:
  void initAttributes () ;
  char symbol;
public:
  Entity ();
  virtual ~Entity ();

  /**
   * @return char
   */
  virtual char getClassName ();
  void setSymbol (char new_var)   {
      symbol = new_var;
  }
  char getSymbol ();
};

#endif // ENTITY_H
