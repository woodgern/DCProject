
#ifndef ITEMPOTION_H
#define ITEMPOTION_H

#include <string>

/**
  * class ItemPotion
  * 
  */

class ItemPotion
{
  char attribute;
  int potency;
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  ItemPotion ();

  /**
   * Empty Destructor
   */
  virtual ~ItemPotion ();

 



  /**
   * @return char
   */
  char getClassName ()
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
  string getDescription ()
  {
  }


  /**
   * @return int
   */
  int getType ()
  {
  }




};

#endif // ITEMPOTION_H
