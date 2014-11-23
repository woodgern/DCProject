#include "Drow.h"

// Constructors/Destructors
//  

Drow::Drow () {
	trigger = "potion";
}

Drow::~Drow () { }

 void Drow::applyAbility (char trigger, Character* actingCharacter, int type)
  {
  	if(trigger = this->trigger) {
  		if(type == 0) {
  			ItemPotion *temp = new ItemPotion('A', 5);
  			actingCharacter->usePotion(temp);
  		}
  		else if(type == 1) {
  			ItemPotion *temp = new ItemPotion('D', 5);
  			actingCharacter->usePotion(temp);
  		}
  		else if(type == 2) {
  			ItemPotion *temp = new ItemPotion('H', 5);
  			actingCharacter->usePotion(temp);
  		}
  		else if(type == 3) {
  			ItemPotion *temp = new ItemPotion('A', -5);
  			actingCharacter->usePotion(temp);	
  		}
  		else if(type == 4) {
  			ItemPotion *temp = new ItemPotion('D', -5);
  			actingCharacter->usePotion(temp);
  		}
  		else {
  			ItemPotion *temp = new ItemPotion('H', -5);
  			actingCharacter->usePotion(temp);
  		}
  	}
  }


