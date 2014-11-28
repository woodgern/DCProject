#include "Character.h"
#include <cmath>
#include <cstdlib>

  Character::Character(){

  }

  Character::~Character(){
    
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
  std::string Character::doCombat (Character *target)
  {
    string message = "";
    string attacker;
    string defender;
    if(this->getSymbol() == '@') {
      attacker = "PC";
    }
    else {
      attacker = this->getSymbol();
    }
    if(target->getSymbol() == '@') {
      defender = "PC";
    }
    else {
      defender = target->getSymbol();
    }
    int ev = target->getEvasive();
    int attk = this->getAttack();
    int def = target->getDefense();
    int damage = ceil((((double)100)/((double)def + 100)) * ((double)attk + 100));
    if(race == "orc" && target->getRace() == "goblin") {
      damage *= 1.5;
    }
    int random = (rand() % 100) + 1;
    if(random < (100 - ev)) {
      target->applyHit(damage);
      message = attacker + " deals " + damage + " damage to " + defender;
    }
    else {
      message = attacker + " missed " + defender;
    }
    
    return message;
  }


  /**
   * @return int
   * @param  accuracy
   */
  void Character::applyHit (int damage)
  {
  	health -= damage;
    if(health < 0) {
      health = 0;
    }
    else if(health > maxHealth) {
      health = maxHealth;
    }
  }


  /**
   * @return string
   */
  std::string Character::getRace ()
  {
  	return race;
  }


  /**
   * @return int
   */
  int Character::getHealth()
  {
  	return health;
  }


  /**
   */
  void Character::resetStats ()
  {
  	attack = baseAttack;
  	defense = baseDefense;

  }

  int Character::getDefense() {
    return defense;
  }
  int Character::getAttack() {
    return attack;
  }
  int Character::getEvasive() {
    return evasive;
  }




