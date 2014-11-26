#include "Goblin.h"

// Constructors/Destructors
//  

Goblin::Goblin () {
	trigger = 'k';
}

void Goblin::applyAbility (char trigger, Character *actingCharacter, Character *targetCharacter)
  {
  	if(this->trigger == trigger) {
  		actingCharacter->pickUpGold(5);
  	}
  }


