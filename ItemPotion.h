
#ifndef ITEMPOTION_H
#define ITEMPOTION_H

#include <string>

/**
  * class ItemPotion
  * 
  */

class ItemPotion
{
<<<<<<< HEAD
  char attribute;
  int potency;
=======
>>>>>>> 4e7201a8a4982e247de03cd1d032a8f52cc5d525
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

<<<<<<< HEAD
 
=======
  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  
>>>>>>> 4e7201a8a4982e247de03cd1d032a8f52cc5d525



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

<<<<<<< HEAD


=======
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

  char attribute;
  int potency;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


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

  /**
   * Get the value of potency
   * @return the value of potency
   */
  int getPotency ()   {
    return potency;
  }
private:


  void initAttributes () ;
>>>>>>> 4e7201a8a4982e247de03cd1d032a8f52cc5d525

};

#endif // ITEMPOTION_H
