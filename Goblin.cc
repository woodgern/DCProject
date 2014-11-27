#include "Goblin.h"

// Constructors/Destructors
//  

Goblin::Goblin () {
	triggerAction = 'k';
}

void Goblin::applyAbility (char trigger, Player *actingCharacter, Character *targetCharacter)
  {
  	if(this->triggerAction == trigger) {
  		actingCharacter->pickUpGold(5);
  	}
  }


