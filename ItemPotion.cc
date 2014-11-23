#include "ItemPotion.h"

// Constructors/Destructors
//  

<<<<<<< HEAD
ItemPotion::ItemPotion (char attrib, int pot) {
	attribute = attrib;
	symbol = 'P';
	potency = pot;
=======
ItemPotion::ItemPotion () {
initAttributes();
>>>>>>> 4e7201a8a4982e247de03cd1d032a8f52cc5d525
}

ItemPotion::~ItemPotion () { }

<<<<<<< HEAD
char ItemPotion::getClassName ()
  {
  	return 'p';
  }


  /**
   * @return char
   */
  char ItemPotion::getSymbol ()
  {
  	return symbol;
  }


  /**
   * @return string
   */
  string ItemPotion::getDescription ()
  {
  	if(getType() == 0) {
  		return "";
  	}
  	else if(getType() == 1) {
  		return "";
  	}
  	else if(getType() == 2) {
  		return "";
  	}
  	else if(getType() == 3) {
  		return "";
  	}
  	else if(getType() == 4) {
  		return "";
  	}
  	else {
  		return "";
  	}
  }


  /**
   * @return int
   */
  int ItemPotion::getType ()
  {
  	if(potency > 0) {
  		if(attribute == 'A') {
  			return 0;
  		}
  		else if(attribute == 'D') {
  			return 1;
  		}
  		else {
  			return 2;
  		}
  	}
  	else {
  		if(attribute == 'A') {
  			return 3;
  		}
  		else if(attribute == 'D') {
  			return 4;
  		}
  		else {
  			return 5;
  		}
  	}
  }
  int ItemPotion::getPotency() {
  	return potency;
  }
=======
//  
// Methods
//  


// Accessor methods
//  


// Other methods
//  

void ItemPotion::initAttributes () {
}
>>>>>>> 4e7201a8a4982e247de03cd1d032a8f52cc5d525

