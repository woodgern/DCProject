#include "Character.h"
#include "Ability.h"
#include <cmath>
#include <cstdlib>
#include <sstream>

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
    std::string message = "";
    std::string attacker;
    std::string defender;
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
    int damage = ceil((((double)100)/((double)def + 100)) * ((double)attk));
    if(race == "orc" && target->getRace() == "goblin") {
      damage *= 1.5;
    }
    int random = (rand() % 100) + 1;
    if(random < (100 - ev)) {
      target->applyHit(damage);
      std::ostringstream convert;   // stream used for the conversion
      convert << damage;
      message = attacker + " deals " + convert.str() + " damage to " + defender;
      if (defender != "PC"){
        std::ostringstream healthConvert;
        healthConvert << target->getHealth();
        message += "(" + healthConvert.str() + " HP)";
      }
      message += ".";
      message += applyAbility('h', this, target);
    }
    else {
      message = attacker + " missed " + defender + ".";
    }
    message += applyAbility('a', this, target);
    return message;
  }

  std::string Character::doSecondCombat (Character *target)
  {
    std::string message = "";
    std::string attacker;
    std::string defender;
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
    int damage = ceil((((double)100)/((double)def + 100)) * ((double)attk));
    if(race == "orc" && target->getRace() == "goblin") {
      damage *= 1.5;
    }
    int random = (rand() % 100) + 1;
    if(random < (100 - ev)) {
      target->applyHit(damage);
      std::ostringstream convert;   // stream used for the conversion
      convert << damage;
      message = attacker + " deals " + convert.str() + " damage to " + defender  + ".";
    }
    else {
      message = attacker + " missed " + defender + ".";
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
