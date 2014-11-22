#include "TextDisplay.h"
#include <iostream>

using namespace std;

TextDisplay::TextDisplay(Tile *newMap[][], Player *player){
	this.map = newMap;
	this.player = player;
}

void TextDisplay::draw (string action, int floorCount){
	drawMap();
	drawStatus(action, floorCount);
}

void TextDisplay::drawMap(){
	for(int i = 0; i < 25; i++){
		for(int j = 0; j < 79; j++){
			cout << map[i][j].getSymbol();
		}
		cout << endl;
	}
}

void TextDisplay::drawStatus(string action, int floorCount){
	cout << left << "Race: " << player.getRace();
	cout << " Gold: " << player.getGold();
	cout << setw(72) << "Floor " << floorCount << endl;
	cout << "HP: " << player.getHP() << endl;
	cout << "Atk: " << player.getAtk() << endl;
	cout << "Def: " << player.getDef() << endl;
	cout << "Action: " << action << endl;
}
