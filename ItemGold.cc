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

void ItemGold::initAttributes () {
}
