#include "ItemPotion.h"

// Constructors/Destructors
//  


ItemPotion::ItemPotion (char attrib, int pot) {
	attribute = attrib;
	symbol = 'P';
	potency = pot;
}

ItemPotion::~ItemPotion(){
  
}

char ItemPotion::getClassName ()
  {
  	return 't';
  }
  /**
   * @return string
   */
  std::string ItemPotion::getDescription ()
  {
  	if(getType() == 0) {
  		return "BA";
  	}
  	else if(getType() == 1) {
  		return "BD";
  	}
  	else if(getType() == 2) {
  		return "RH";
  	}
  	else if(getType() == 3) {
  		return "RA";
  	}
  	else if(getType() == 4) {
  		return "RD";
  	}
  	else {
  		return "PH";
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

