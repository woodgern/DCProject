#include "Character.h"
#include <cmath>
#include <cstdlib>
// Constructors/Destructors
//  


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
  string Character::attack (Character * target)
  {
    int acc = this->getAccuracy();
    int attk = this->getAttack();
    int def = target->getDefense();
    int damage = ceil((((double)100)/((double)def + 100)) * ((double)attk + 100));
    int random = (rand() % 100) + 1;
    if(random < acc) {
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
  }


  /**
   * @return string
   */
  string Character::getRace ()
  {
  	return race;
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
      if(health < 0) {
        health = 0;
      }
  	}
  }
  int Character::getDefense() {
    return defense;
  }
  int Character::getAttack() {
    return attack;
  }
  int Character::getAccuracy() {
    return accuracy;
  }




