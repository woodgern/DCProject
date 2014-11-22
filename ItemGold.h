
#ifndef ITEMGOLD_H
#define ITEMGOLD_H

#include <string>

/**
  * class ItemGold
  * 
  */

class ItemGold
{
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

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  



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

  int value;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of value
   * @param new_var the new value of value
   */
  void setValue (int new_var)   {
      value = new_var;
  }

  /**
   * Get the value of value
   * @return the value of value
   */
  int getValue ()   {
    return value;
  }
private:


  void initAttributes () ;

};

#endif // ITEMGOLD_H
