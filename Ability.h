
#ifndef ABILITY_H
#define ABILITY_H

#include <string>
#include vector



/**
  * class Ability
  * 
  */

class Ability
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Ability ();

  /**
   * Empty Destructor
   */
  virtual ~Ability ();

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
  virtual void applyAbility (char trigger, Character actingCharacter, Character targetCharacter)
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

  char triggerAction;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of triggerAction
   * @param new_var the new value of triggerAction
   */
  void setTriggerAction (char new_var)   {
      triggerAction = new_var;
  }

  /**
   * Get the value of triggerAction
   * @return the value of triggerAction
   */
  char getTriggerAction ()   {
    return triggerAction;
  }
private:


  void initAttributes () ;

};

#endif // ABILITY_H
