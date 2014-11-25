
#ifndef TROLL_H
#define TROLL_H

#include <string>
#include "Ability.h"

/**
  * class Troll
  * 
  */

class Troll : public Ability
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Troll ();

  /**
   * Empty Destructor
   */
  virtual ~Troll ();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  



  /**
   * @param  trigger
   * @param  actingCharacter
   * @param  targetCharacter
   */
  void applyAbility (char trigger, Character *actingCharacter, Character *targetCharacter)
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

#endif // TROLL_H
