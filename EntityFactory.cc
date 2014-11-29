#include "EntityFactory.h"

// Constructors/Destructors
//  

EntityFactory::EntityFactory () {
}

/*
make sure to free whatever is return by this function
*/
ItemGold* EntityFactory::generateGold () {
	int random = rand() % 2;
	ItemGold* treasure = NULL;
	if(random == 0) {
		treasure = new ItemGold(1);
	}
	else if(random == 1) {
		treasure = new ItemGold(2);
	}
	else {
		treasure = new ItemGold(6);
	}
	return treasure;
}
/*
make sure to free whatever is return by this function
*/
Item* EntityFactory::generateDrops (char killedEntity) {
	ItemGold* treasure = NULL;
	if(killedEntity == 'M') {
		treasure = new ItemGold(4);
	}
	else if(killedEntity == 'H') {
		treasure = new ItemGold(2);
	}
	else {
		int random = rand() % 1;
		if(random == 0) {
			treasure = new ItemGold(1);
		}
		else {
			treasure = new ItemGold(2);
		}
	}
	return treasure;
}
/*
make sure to free whatever is return by this function
*/
NPC* EntityFactory::generateEnemy () {
	int random = rand() % 5;
	NPC* enemy = NULL;
	if(random == 0) {
		enemy = new NPC("human");
	}
	else if(random == 1) {
		enemy = new NPC("elf");
	}
	else if(random == 1) {
		enemy = new NPC("dwarf");
	}
	else if(random == 1) {
		enemy = new NPC("orc");
	}
	else if(random == 1) {
		enemy = new NPC("merchant");
	}
	else {
		enemy = new NPC("halfling");
	}
	return enemy;	
}
/*
make sure to free whatever is return by this function
*/
ItemPotion* EntityFactory::generatePotion () {
	int random = rand() % 5;
	ItemPotion* pot = NULL;
	if(rand == 0) {
		pot = new ItemPotion('A', 5);
	}
	else if(random == 1) {
		pot = new ItemPotion('A', -5);
	}
	else if(random == 1) {
		pot = new ItemPotion('D', 5);
	}
	else if(random == 1) {
		pot = new ItemPotion('D', -5);
	}
	else if(random == 1) {
		pot = new ItemPotion('H', 10);
	}
	else {
		pot = new ItemPotion('H', -10);
	}
	return pot;	
}


