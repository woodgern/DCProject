#include "Player.h"

// Constructors/Destructors
//  

Player::Player (string race) {
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
  void Player::applyPotion(ItemPotion * potion) {
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
  string Player::getClassName ()
  {
  	return "Player";
  }


  /**
   * @return int
   */
  int* Player::getPosition ()
  {
  	int a[2] = {xLoc, yLoc};
  	return a;
  }


