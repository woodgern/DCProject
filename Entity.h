
#ifndef ENTITY_H
#define ENTITY_H

#include <string>
#include vector



/**
  * class Entity
  * 
  */

class Entity
{
<<<<<<< HEAD
  char symbol;
=======
>>>>>>> 4e7201a8a4982e247de03cd1d032a8f52cc5d525
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Entity ();

  /**
   * Empty Destructor
   */
  virtual ~Entity ();

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
  char getSymbol ()
  {
  }


  /**
   * @return char
   */
  virtual char getClassName ()
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

  char symbol;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of symbol
   * @param new_var the new value of symbol
   */
  void setSymbol (char new_var)   {
      symbol = new_var;
  }

  /**
   * Get the value of symbol
   * @return the value of symbol
   */
  char getSymbol ()   {
    return symbol;
  }
private:


  void initAttributes () ;

>>>>>>> 4e7201a8a4982e247de03cd1d032a8f52cc5d525
};

#endif // ENTITY_H
