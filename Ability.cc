/*#include "Ability.h"

//drow potion
void applyAbility (char trigger, Player* actingCharacter, int type)
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

  //goblin kill
  void applyAbility (char trigger, Player *actingCharacter, Character *targetCharacter)
  {
  	if(this->triggerAction == trigger) {
  		actingCharacter->pickUpGold(5);
  	}
  }
//troll turn
  void applyAbility (char trigger, Character *actingCharacter, Character *targetCharacter)
  {
  	if(this->triggerAction == trigger) {
  		actingCharacter->applyHit(-5);
  	}
  }  

//vampire hit
  void applyAbility (char trigger, Character *actingCharacter, Character *targetCharacter)
{
	if(triggerAction == trigger) {
		int dwarf = -1;
		if(targetCharacter->getSymbol() == 'W') {
			dwarf = 1;
		}
		actingCharacter->applyHit(dwarf * 5);
	}
}*/

