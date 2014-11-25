#include "TextDisplay.h"
#include <iostream>
#include <iomanip>

using namespace std;

TextDisplay::TextDisplay(Tile *newMap[25][79], Player *player){
	this->map = newMap;
	this->player = player;
}

void TextDisplay::draw (string action, int floorCount){
	drawMap();
	drawStatus(action, floorCount);
}

void TextDisplay::drawMap(){
	for(int i = 0; i < 25; i++){
		for(int j = 0; j < 79; j++){
			cout << map[i][j]->getSymbol();
		}
		cout << endl;
	}
}

void TextDisplay::drawStatus(string action, int floorCount){
	cout << left << "Race: " << player->getRace();
	cout << " Gold: " << player->getGold();
	cout << setw(72) << "Floor " << floorCount << endl;
	cout << "HP: " << player->getHealth() << endl;
	cout << "Atk: " << player->getAttack() << endl;
	cout << "Def: " << player->getDefense() << endl;
	cout << "Action: " << action << endl;
}
