
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
<<<<<<< HEAD
  char triggerAction;
public:

  
=======
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
>>>>>>> 4e7201a8a4982e247de03cd1d032a8f52cc5d525
  Ability ();

  /**
   * Empty Destructor
   */
  virtual ~Ability ();

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



  /**
   * @param  trigger
   * @param  actingCharacter
   * @param  targetCharacter
   */
>>>>>>> 4e7201a8a4982e247de03cd1d032a8f52cc5d525
  virtual void applyAbility (char trigger, Character actingCharacter, Character targetCharacter)
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
>>>>>>> 4e7201a8a4982e247de03cd1d032a8f52cc5d525

#endif // ABILITY_H
