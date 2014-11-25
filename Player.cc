#include "Player.h"
#include "Drow.h"
#include "Orc.h"
#include "Troll.h"
#include "Vampire.h"
#include "Goblin.h"

// Constructors/Destructors
//  

Player::Player (std::string race) {
	this->race = race;
	symbol = '@';
  health=100;
  attack=100;
  defense=100;
  accuracy=100;
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
		specialAbility = new Goblin();
	}
	else {
		specialAbility = NULL;
	}
}

Player::~Player () {
	if(specialAbility != NULL) {
		delete specialAbility;
	}
}
void Player::pickUpGold (int amountToAdd)
  {
  	goldCount += amountToAdd;
  }


  /**
   * @return int
   */
  int Player::getGold ()
  {
  	return goldCount;
  }


  /**
   * @return bool
   * @param  potionType
   */
  bool Player::isPotionKnown (int potionType)
  {
  	return potionKnowledge[potionType];
  }


  /**
   * @param  toApply
   */
  void Player::applyPotion(ItemPotion *potion) {
  	int type = potion->getType();
  	if(type == 0 || type == 3) {
  		attack += potion->getPotency();
  	}
  	else if(type == 1 || type == 4) {
  		defense += potion->getPotency();
  	}
  	else if(type == 2 || type == 5) {
  		health += potion->getPotency();
      if(health < 0) {
        health = 0;
      }
  	}
  }


  /**
   * @return string
   */
  char Player::getClassName ()
  {
  	return 'P';
  }


  /**
   * @return int
   */
  int Player::getX()
  {
  	return xLoc;
  }
  /**
   * @return int
   */
  int Player::getY()
  {
    return yLoc;
  }
