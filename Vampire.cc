#include "Vampire.h"

// Constructors/Destructors
//  

Vampire::Vampire () {
	triggerAction = 'h';
}

  
void Vampire::applyAbility (char trigger, Character *actingCharacter, Character *targetCharacter)
{
	if(triggerAction == trigger) {
		int dwarf = -1;
		if(targetCharacter->getSymbol() == 'W') {
			dwarf = 1;
		}
		actingCharacter->applyHit(dwarf * 5);
	}
}


