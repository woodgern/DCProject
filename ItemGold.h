
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
public:
  ItemGold(int amount);
  virtual ~ItemGold ();
  /**
   * @return char
   */
  char getClassName ();

  int getValue ();
private:


  void initAttributes () ;

};

#endif // ITEMGOLD_H
