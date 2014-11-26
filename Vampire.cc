#include "Vampire.h"

// Constructors/Destructors
//  

Vampire::Vampire () {
	trigger = 'h';
}

  
void Vampire::applyAbility (char trigger, Character *actingCharacter, Character *targetCharacter)
{
	if(trigger == this->trigger) {
		int dwarf = -1;
		if(targetCharacter->getSymbol() == 'W') {
			dwarf = 1;
		}
		actingCharacter->applyHit(dwarf * 5);
	}
}


