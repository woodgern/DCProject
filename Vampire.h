
#ifndef VAMPIRE_H
#define VAMPIRE_H

#include <string>
#include "Ability.h"

/**
  * class Vampire
  * 
  */

class Vampire : public Ability
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Vampire ();

  /**
   * Empty Destructor
   */
  virtual ~Vampire ();

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

#endif // VAMPIRE_H
