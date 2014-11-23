
#ifndef TEXTDISPLAY_H
#define TEXTDISPLAY_H

#include <string>

/**
  * class TextDisplay
  * 
  */

class TextDisplay
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  TextDisplay ();

  /**
   * Empty Destructor
   */
  virtual ~TextDisplay ();

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
  void drawMap ()
  {
  }


  /**
   * @param  action
   * @param  floorCount
   */
  void draw (string action, int floorCount)
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

  Tile map;
  Player player;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of map
   * @param new_var the new value of map
   */
  void setMap (Tile new_var)   {
      map = new_var;
  }

  /**
   * Get the value of map
   * @return the value of map
   */
  Tile getMap ()   {
    return map;
  }

  /**
   * Set the value of player
   * @param new_var the new value of player
   */
  void setPlayer (Player new_var)   {
      player = new_var;
  }

  /**
   * Get the value of player
   * @return the value of player
   */
  Player getPlayer ()   {
    return player;
  }
private:



  /**
   * @param  action
   * @param  floorCount
   */
  void drawStatus (string action, int floorCount)
  {
  }

  void initAttributes () ;

};

#endif // TEXTDISPLAY_H
