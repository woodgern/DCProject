
#ifndef ITEMPOTION_H
#define ITEMPOTION_H

#include <string>
#include "Item.h"

/**
  * class ItemPotion
  * 
  */

class ItemPotion : public Item
{
  char attribute;
  int potency;
public:
  ItemPotion (char atrb, int pot);
  ~ItemPotion ();
  char getClassName ();
  std::string getDescription ();
  int getType ();
  int getPotency ();
private:


  void initAttributes () ;
};

#endif // ITEMPOTION_H
