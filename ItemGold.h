
#ifndef ITEMGOLD_H
#define ITEMGOLD_H

#include <string>

/**
  * class ItemGold
  * 
  */

class ItemGold
{
  int value;
  char symbol;
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  ItemGold ();

  /**
   * Empty Destructor
   */
  virtual ~ItemGold ();

  char getSymbol() {
    
  }
  /**
   * @return char
   */
  char getClassName ()
  {
  }


  /**
   * @return int
   */
  int getValue ()
  {
  }


};

#endif // ITEMGOLD_H
