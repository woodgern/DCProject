#include "ItemGold.h"

// Constructors/Destructors
//  


ItemGold::ItemGold (int value) {
	this->value = value;
	symbol = 'G';
}

ItemGold::~ItemGold () { }


 char ItemGold::getClassName ()
  {
  	return 'g';
  }


  /**
   * @return int
   */
  int ItemGold::getValue ()
  {
  	return value;
  }
  char ItemGold::getSymbol() {
  	return symbol;
  }

//  
// Methods
//  


// Accessor methods
//  


// Other methods
//  

void ItemGold::initAttributes () {
}

>>>>>>> 4e7201a8a4982e247de03cd1d032a8f52cc5d525
