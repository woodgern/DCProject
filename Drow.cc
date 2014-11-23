#include "Drow.h"

// Constructors/Destructors
//  

Drow::Drow () {
<<<<<<< HEAD
	trigger = "potion";
=======
>>>>>>> 4e7201a8a4982e247de03cd1d032a8f52cc5d525
}

Drow::~Drow () { }

<<<<<<< HEAD
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
=======
//  
// Methods
//  


// Accessor methods
//  


// Other methods
//  
>>>>>>> 4e7201a8a4982e247de03cd1d032a8f52cc5d525


