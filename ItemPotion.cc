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
  	return 'p';
  }
  /**
   * @return string
   */
  std::string ItemPotion::getDescription ()
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

