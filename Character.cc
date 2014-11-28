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
    int ev = target->getEvasive();
    int attk = this->getAttack();
    int def = target->getDefense();
    int damage = ceil((((double)100)/((double)def + 100)) * ((double)attk + 100));
    int random = (rand() % 100) + 1;
    if(random < (100 - ev)) {
      target->applyHit(damage);
    }
    else {
      //missed
    }
    return "Yo you attacked it";
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




