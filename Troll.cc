#include "Troll.h"

// Constructors/Destructors
//  

Troll::Troll () {
	triggerAction = 't';
}

void Troll::applyAbility (char trigger, Character *actingCharacter, Character *targetCharacter)
  {
  	if(this->triggerAction == trigger) {
  		actingCharacter->applyHit(-5);
  	}
  }  


