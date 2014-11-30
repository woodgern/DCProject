#include "Chamber.h"
#include <cstdlib>

Chamber::Chamber () {
	size = 0;
	capacity = 20;
	contents = new Tile *[20];
	generator = new EntityFactory();
}

void Chamber::addTile(Tile *toAdd){
	if (size == capacity){
		Tile **temp = new Tile*[capacity * 2];
		for (int i = 0; i < capacity; i++){
			temp[i] = contents[i];
		}
		capacity *=2;
		delete[] contents;
		contents = temp;
	}
	contents[size] = toAdd;
	size++;
}

void Chamber::placeStairs(){
	int choice = (rand() % size);
	if (contents[choice]->getSymbol() == '.'){
		contents[choice]->isStairs = true;
	}
	else{
		placeStairs();
	}
}

void Chamber::placePlayer(Player *toPlace){
	int choice = (rand() % size);
	if (contents[choice]->getSymbol() == '.'){
		contents[choice]->addEntity(toPlace);
	}
	else{
		placePlayer(toPlace);
	}
}

void Chamber::generateGold(){
	int choice = (rand() % size);
	if (contents[choice]->getSymbol() == '.'){
		contents[choice]->addEntity(generator->generateGold());
	}
	else{
		generateGold();
	}
}

void Chamber::generatePotion(){
	int choice = (rand() % size);
	if (contents[choice]->getSymbol() == '.'){
		contents[choice]->addEntity(generator->generatePotion());
	}
	else{
		generatePotion();
	}
}

void Chamber::generateEnemy(){
	int choice = (rand() % size);
	if (contents[choice]->getSymbol() == '.'){
		contents[choice]->addEntity(generator->generateEnemy());
	}
	else{
		generateEnemy();
	}
}

Chamber::~Chamber () {
	contents = NULL;
	delete generator;
}

