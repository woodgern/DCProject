#include "ItemGold.h"
#include <iostream>
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

void ItemGold::initAttributes () {
}
