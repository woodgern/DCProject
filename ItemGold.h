
#ifndef ITEMGOLD_H
#define ITEMGOLD_H

#include <string>
#include "Item.h"

/**
  * class ItemGold
  * 
  */

class ItemGold : public Item
{
  int value;
  char symbol;
public:
  /**
   * Empty Constructor
   */
  ItemGold ();
  ItemGold(int amount);

  /**
   * Empty Destructor
   */
  virtual ~ItemGold ();

  char getSymbol();
  /**
   * @return char
   */
  char getClassName ();

  int getValue ();

  void setValue (int new_var)   {
      value = new_var;
  }
private:


  void initAttributes () ;

};

#endif // ITEMGOLD_H
