
#ifndef NPC_H
#define NPC_H

#include <string>
#include vector



/**
  * class NPC
  * 
  */

/******************************* Abstract Class ****************************
NPC does not have any pure virtual methods, but its author
  defined it as an abstract class, so you should not use it directly.
  Inherit from it instead and create only objects from the derived classes
*****************************************************************************/

class NPC
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  NPC ();

  /**
   * Empty Destructor
   */
  virtual ~NPC ();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  



  /**
   */
  void onDeath ()
  {
  }


  /**
   * @return string
   */
  string getClassName ()
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

#endif // NPC_H
