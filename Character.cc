#include "Character.h"

// Constructors/Destructors
//  

<<<<<<< HEAD
/*Character::Character (string race) {
	this->race = race;
	symbol = 
	if(race == "") {
		specialAbility = new Orc();
	}
	else if(race == "") {
		specialAbility = new Drow();
	}
	else if(race == "") {
		specialAbility = new Vampire();
	}
	else if(race == "") {
		specialAbility = new Troll();
	}
	else if(race == "") {
		specialAbility = new Halfling();
	}
	else if(race == "") {
		specialAbility = new Elf();
	}
	else if(race == "") {
		specialAbility = new Goblin();
	}
	else {
		specialAbility = NULL;
	}
}*/

Character::~Character () {
	if(specialAbility != NULL) {
		delete specialAbility;
	} 
}

 /**
   * @param  trigger
   */
  void Character::applyAbility (string trigger, Character* target)
  {
  	if(specialAbility != NULL) {
  		specialAbility.applyAbility(trigger,this, target);
  	}
  }


  /**
   * @return bool
   */
  bool Character::isDead ()
  {
  	if(health <= 0) {
  		return true;
  	}
  	return false;
  }


  /**
   * @return string
   * @param  target
   */
  string Character::attack (Character target)
  {

  }


  /**
   * @return int
   * @param  accuracy
   */
  int Character::applyHit (int accuracy)
  {
  	
  }


  /**
   */
  void Character::moveCharacter ()
  {
  }


  /**
   * @return string
   */
  string Character::doAction ()
  {
  }


  /**
   * @return string
   */
  string Character::getRace ()
  {
  	return 
  }


  /**
   * @return int
   */
  int Character::baseDefense ()
  {
  	return baseDefense;
  }


  /**
   */
  void Character::resetStats ()
  {
  	attack = baseAttack;
  	defense = baseDefense;

  }

  void Character::usePotion(ItemPotion * potion) {
  	int type = potion->getType();
  	if(type == 0 || type == 3) {
  		attack += potion->getPotency();
  	}
  	else if(type == 1 || type == 4) {
  		defense += potion->getPotency();
  	}
  	else if(type == 2 || type == 5) {
  		health += potion->getPotency();
  	}
  }
=======
Character::Character () {
initAttributes();
}

Character::~Character () { }

//  
// Methods
//  


// Accessor methods
//  


// Other methods
//  

void Character::initAttributes () {
}

>>>>>>> 4e7201a8a4982e247de03cd1d032a8f52cc5d525
