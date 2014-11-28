#include "Player.h"
#include <climits>

// Constructors/Destructors
//  

Player::Player (std::string race) {
	this->race = race;
	symbol = '@';
  goldCount = 0;
  potionKnowledge = new bool[5];
	if(race == "shade") {
    baseAttack = 25;
    baseDefense = 25;
    maxHealth = 125;
	}
	else if(race == "drow") {
    baseAttack = 25;
    baseDefense = 15;
    maxHealth = 150;
	}
	else if(race == "vampire") {
    baseAttack = 25;
    baseDefense = 25;
    health = 50;
    maxHealth = INT_MAX;
	}
	else if(race == "troll") {
    baseAttack = 25;
    baseDefense = 15;
    maxHealth = 120;
	}
	else if(race == "goblin") {
    baseAttack = 15;
    baseDefense = 20;
    maxHealth = 110;
	}
  if(race != "vampire") {
    health = maxHealth;
  }
  attack = baseAttack;
  defense = baseDefense;
  evasive = 50;
}

Player::~Player(){
  delete []potionKnowledge;
}

void Player::setPosition(int x, int y){
  xLoc = x; yLoc = y;
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
    int factor = 1;
    if(race == "drow") {
        factor = 1.5;
    }
  	if(type == 0 || type == 3) {
  		attack += potion->getPotency() * factor;
  	}
  	else if(type == 1 || type == 4) {
  		defense += potion->getPotency() * factor;
  	}
  	else if(type == 2 || type == 5) {
  		health += potion->getPotency() * factor;
      if(health < 0) {
        health = 0;
      }
      else if(health > maxHealth) {
        health = maxHealth;
      }
  	}
    potionKnowledge[type] = true;
  }


  /**
   * @return string
   */
  char Player::getClassName ()
  {
  	return 'p';
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
