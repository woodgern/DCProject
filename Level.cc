#include "Level.h"
#include <cstdlib>
#include <iostream>
#include "NPC.h"
#include <fstream>
#include <sstream>

Level::Level (Player *toPlace) {
	srand (time(NULL));
	chamberCount = 0;
	capacity = 5;
	chambers = new Chamber *[capacity];
	map = new Tile **[25];
	for (int i = 0; i < 25; i++){
		map[i] = new Tile *[79];
	}
	buildLevel();
	createChambers();
	generateEntities(toPlace);
}

void Level::generateEnemies (){
	int toGenerate = 20;
	for (int i = 0; i < 25; i++){
		for (int j = 0; j < 79; j++){
			if (map[i][j]->getSymbol() == 'G' && ((ItemGold *) map[i][j]->getEntity())->getValue() == 6){
				int success = 0;
				do{
					int xMod = (rand() % 3 - 1);
					int yMod = (rand() % 3 - 1);
					success = map[i+yMod][j+xMod]->addEntity(new NPC("dragon"));
				}while(success != 1);
				toGenerate--;
			}
		}
	}
	for (int i = 0; i < toGenerate; i++){
		int chamberChoice = (rand() % chamberCount);
		chambers[chamberChoice]->generateEnemy();
	}
}

void Level::generatePotions (){
	for (int i = 0; i < 10; i++){
		int chamberChoice = (rand() % chamberCount);
		chambers[chamberChoice]->generatePotion();
	}
}

void Level::generateGold (){
	for (int i = 0; i < 10; i++){
		int chamberChoice = (rand() % chamberCount);
		chambers[chamberChoice]->generateGold();
	}
}

void Level::generatePlayerAndStairs (Player *toPlace){
	int playerChoice = (rand() % chamberCount);
	chambers[playerChoice]->placePlayer(toPlace);
	int stairChoice = (rand() % chamberCount);

	while(stairChoice == playerChoice){
		stairChoice = (rand() % chamberCount);
	}
	chambers[stairChoice]->placeStairs();
}

void Level::generateEntities (Player *toPlace){
	generatePlayerAndStairs(toPlace);
	generateGold();
	generatePotions();
	generateEnemies();
}

void Level::buildLevel (){
	std::string currentLine;
	Tile *temp;
	char tileSymbol;
	std::ifstream toLoad("baseFloor.txt");
	for(int i = 0; i < 25; i++){
		std::stringstream parser;
		std::getline(toLoad, currentLine);
		parser.str(currentLine);
		int j = 0;
		while (parser.get(tileSymbol)){
			if (tileSymbol == ' ' ||
				tileSymbol == '.' ||
				tileSymbol == '-' ||
				tileSymbol == '|' ||
				tileSymbol == '+' ||
				tileSymbol == '#'){
				temp = new Tile(tileSymbol);
			}
			else{
				temp = new Tile('.');
			}
			map[i][j] = temp;
			j++;
		}
	}
}

void Level::createChambers (){
	Chamber *first = new Chamber();
	for (int i = 3; i < 7; i++){
		for (int j = 3; j < 29; j++){
			first->addTile(map[i][j]);
		}
	}
	addChamber(first);

	Chamber *second = new Chamber();
	for (int i = 15; i < 22; i++){
		for (int j = 4; j < 25; j++){
			second->addTile(map[i][j]);
		}
	}
	addChamber(second);

	Chamber *third = new Chamber();
	for (int i = 10; i < 13; i++){
		for (int j = 38; j < 50; j++){
			third->addTile(map[i][j]);
		}
	}
	addChamber(third);

	Chamber *fourth = new Chamber();
	for (int i = 19; i < 22; i++){
		for (int j = 37; j < 65; j++){
			fourth->addTile(map[i][j]);
		}
	}
	for (int i = 16; i < 22; i++){
		for (int j = 66; j < 77; j++){
			fourth->addTile(map[i][j]);
		}
	}
	addChamber(fourth);

	Chamber *fifth = new Chamber();
	// Needs fixing
	for (int i = 3; i < 7; i++){
		for (int j = 40; j < 63; j++){
			fifth->addTile(map[i][j]);
		}
	}
	for (int i = 7; i < 13; i++){
		for (int j = 62; j < 77; j++){
			fifth->addTile(map[i][j]);
		}
	}
	for (int i = 5; i < 7; i++){
		for (int j = 63; j < 71; j++){
			fifth->addTile(map[i][j]);
		}
	}
	// End needs fixing
	fifth->addTile(map[6][72]);
	fifth->addTile(map[6][71]);
	addChamber(fifth);
}

void Level::addChamber(Chamber *toAdd){
	if (chamberCount == capacity){
		Chamber **temp = new Chamber *[capacity*2];
		for (int i = 0; i < chamberCount; i++){
			temp[i] = chambers[i];
		}
		capacity *= 2;
	}
	chambers[chamberCount] = toAdd;
	chamberCount++;
}

Tile *Level::getTile(int x, int y){
	return map[y][x];
}

Level::~Level () {
	for (int i = 0; i < chamberCount; i++){
		delete chambers[i];
	}
	delete[] chambers;
}

