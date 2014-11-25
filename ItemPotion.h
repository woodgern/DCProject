
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
  virtual ~ItemPotion ();
  char getClassName ();
  char getSymbol ();
  std::string getDescription ();
  int getType ();

  /**
   * Set the value of attribute
   * @param new_var the new value of attribute
   */
  void setAttribute (char new_var)   {
      attribute = new_var;
  }

  /**
   * Get the value of attribute
   * @return the value of attribute
   */
  char getAttribute ()   {
    return attribute;
  }

  /**
   * Set the value of potency
   * @param new_var the new value of potency
   */
  void setPotency (int new_var)   {
      potency = new_var;
  }
  int getPotency ();
private:


  void initAttributes () ;
};

#endif // ITEMPOTION_H
