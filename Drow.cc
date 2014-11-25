#include "Drow.h"
#include "ItemPotion.h"

// Constructors/Destructors
//  

Drow::Drow () {
	triggerAction = 'p';
}

Drow::~Drow () { }
 void Drow::applyAbility (char trigger, Player* actingCharacter, int type)
  {
  	if(trigger = this->triggerAction) {
      ItemPotion *temp;
  		if(type == 0) {
  			temp = new ItemPotion('A', 5);
  		}
  		else if(type == 1) {
  			temp = new ItemPotion('D', 5);
  		}
  		else if(type == 2) {
  			temp = new ItemPotion('H', 5);
  		}
  		else if(type == 3) {
  			temp = new ItemPotion('A', -5);
  		}
  		else if(type == 4) {
  			temp = new ItemPotion('D', -5);
  		}
  		else {
  			temp = new ItemPotion('H', -5);
  		}
      actingCharacter->applyPotion(temp);
  	}
  }
