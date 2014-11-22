
#ifndef ENTITYFACTORY_H
#define ENTITYFACTORY_H

#include <string>
#include vector



/**
  * class EntityFactory
  * 
  */

class EntityFactory
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  EntityFactory ();

  /**
   * Empty Destructor
   */
  virtual ~EntityFactory ();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  



  /**
   * @return ItemGold
   */
  ItemGold generateGold ()
  {
  }


  /**
   * @return Item
   * @param  killedEntity
   */
  Item generateDrops (char killedEntity)
  {
  }


  /**
   * @return NPC
   */
  NPC generateEnemy ()
  {
  }


  /**
   * @return ItemPotion
   */
  ItemPotion generatePotion ()
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

public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  

private:



};

#endif // ENTITYFACTORY_H
