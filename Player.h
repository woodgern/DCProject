
#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include vector



/**
  * class Player
  * 
  */

class Player
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Player ();

  /**
   * Empty Destructor
   */
  virtual ~Player ();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  



  /**
   * @param  amountToAdd
   */
  void pickUpGold (int amountToAdd)
  {
  }


  /**
   * @return int
   */
  int getGold ()
  {
  }


  /**
   * @return bool
   * @param  potionType
   */
  bool isPotionKnown (int potionType)
  {
  }


  /**
   * @param  toApply
   */
  void applyPotion (ItemPotion toApply)
  {
  }


  /**
   * @return string
   */
  string getClassName ()
  {
  }


  /**
   * @return int
   */
  int getPosition ()
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

  int goldCount;
  bool potionKnowledge;
  int xLoc;
  int yLoc;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of goldCount
   * @param new_var the new value of goldCount
   */
  void setGoldCount (int new_var)   {
      goldCount = new_var;
  }

  /**
   * Get the value of goldCount
   * @return the value of goldCount
   */
  int getGoldCount ()   {
    return goldCount;
  }

  /**
   * Set the value of potionKnowledge
   * @param new_var the new value of potionKnowledge
   */
  void setPotionKnowledge (bool new_var)   {
      potionKnowledge = new_var;
  }

  /**
   * Get the value of potionKnowledge
   * @return the value of potionKnowledge
   */
  bool getPotionKnowledge ()   {
    return potionKnowledge;
  }

  /**
   * Set the value of xLoc
   * @param new_var the new value of xLoc
   */
  void setXLoc (int new_var)   {
      xLoc = new_var;
  }

  /**
   * Get the value of xLoc
   * @return the value of xLoc
   */
  int getXLoc ()   {
    return xLoc;
  }

  /**
   * Set the value of yLoc
   * @param new_var the new value of yLoc
   */
  void setYLoc (int new_var)   {
      yLoc = new_var;
  }

  /**
   * Get the value of yLoc
   * @return the value of yLoc
   */
  int getYLoc ()   {
    return yLoc;
  }
private:


  void initAttributes () ;

};

#endif // PLAYER_H
