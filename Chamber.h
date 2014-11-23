
#ifndef CHAMBER_H
#define CHAMBER_H

#include <string>

/**
  * class Chamber
  * 
  */

class Chamber
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Chamber ();

  /**
   * Empty Destructor
   */
  virtual ~Chamber ();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  



  /**
   * @param  toPlace
   */
  void placePlayer (Player toPlace)
  {
  }


  /**
   */
  void generateGold ()
  {
  }


  /**
   */
  void generatePotion ()
  {
  }


  /**
   */
  void generateEnemy ()
  {
  }


  /**
   */
  void placeStairs ()
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

  Tile Contents;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Contents
   * @param new_var the new value of Contents
   */
  void setContents (Tile new_var)   {
      Contents = new_var;
  }

  /**
   * Get the value of Contents
   * @return the value of Contents
   */
  Tile getContents ()   {
    return Contents;
  }
private:


  void initAttributes () ;

};

#endif // CHAMBER_H
