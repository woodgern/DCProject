
#ifndef ITEM_H
#define ITEM_H

#include <string>

/**
  * class Item
  * 
  */

/******************************* Abstract Class ****************************
Item does not have any pure virtual methods, but its author
  defined it as an abstract class, so you should not use it directly.
  Inherit from it instead and create only objects from the derived classes
*****************************************************************************/

class Item
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Item ();

  /**
   * Empty Destructor
   */
  virtual ~Item ();

};

#endif // ITEM_H
