#include "EntityFactory.h"

// Constructors/Destructors
//  

EntityFactory::EntityFactory () {
}

/*
make sure to free whatever is return by this function
*/
ItemGold* EntityFactory::generateGold () {
	ItemGold* treasure = NULL;
	int random = rand() % 8;
		if(random == 0) {
			treasure = new ItemGold(6);
		}
		else if (random <= 2){
			treasure = new ItemGold(1);
		}
		else {
			treasure = new ItemGold(2);
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
		int random = rand() % 2;
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
	int random = rand() % 18;
	NPC* enemy = NULL;
	if(random <= 3) {
		enemy = new NPC("human");
	}
	else if(random <= 5) {
		enemy = new NPC("elf");
	}
	else if(random <= 8) {
		enemy = new NPC("dwarf");
	}
	else if(random <= 10) {
		enemy = new NPC("orc");
	}
	else if(random <= 12) {
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
	if(random == 0) {
		pot = new ItemPotion('A', 5);
	}
	else if(random == 1) {
		pot = new ItemPotion('A', -5);
	}
	else if(random == 2) {
		pot = new ItemPotion('D', 5);
	}
	else if(random == 3) {
		pot = new ItemPotion('D', -5);
	}
	else if(random == 4) {
		pot = new ItemPotion('H', 10);
	}
	else {
		pot = new ItemPotion('H', -10);
	}
	return pot;	
}


