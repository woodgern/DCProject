#include "TextDisplay.h"
#include "Player.h"
#include "NPC.h"
#include "Tile.h"
#include "Level.h"
#include "ItemPotion.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

Player *player = NULL;
Tile ****fullDungeon;
TextDisplay *display;
bool isQuitting = false;
bool reRun = false;
int currentFloor = 0;

Tile * getTargetTile(string desired){
	int x = player->getX();
	int y = player->getY();
	if (desired == "no"){
		if (y > 0){
			return fullDungeon[currentFloor][y-1][x];
		}
	}
	else if (desired == "so"){
		if (y < 24){
			return fullDungeon[currentFloor][y+1][x];
		}
	}
	else if (desired == "ea"){
		if (x < 78){
			return fullDungeon[currentFloor][y][x+1];
		}
	}
	else if (desired == "we"){
		if (x > 0){
			return fullDungeon[currentFloor][y][x-1];
		}
	}
	else if (desired == "nw"){
		if (x > 0 && y > 0){
			return fullDungeon[currentFloor][y-1][x-1];
		}
	}
	else if (desired == "ne"){
		if (x < 78 && y > 0){
			return fullDungeon[currentFloor][y-1][x+1];
		}
	}
	else if (desired == "sw"){
		if (x > 0 && y < 24){
			return fullDungeon[currentFloor][y+1][x-1];
		}
	}
	else if (desired == "se"){
		if (x < 78 && y < 24){
			return fullDungeon[currentFloor][y+1][x+1];
		}
	}
	return NULL;
}

void findPlayer(){
	for (int i = 0; i < 25; i++){
		for(int j = 0; j < 79; j++){
			if (fullDungeon[currentFloor][i][j]->getSymbol() == '@'){
				player->setPosition(j, i);
			}
		}
	}
}

void changeFloors(){
	delete display;
	currentFloor++;
	display = new TextDisplay(fullDungeon[currentFloor], player);
	findPlayer();
}

void reset(){
	delete player;
	isQuitting = true;
	reRun = true;
}

Entity *getMatchingEntity(char symbol){
	Entity *entity;
	if (symbol == '@'){
		entity = player;
	}
	else if (symbol == 'W'){
		entity = new NPC("dwarf");
	}
	else if (symbol == 'D'){
		entity = new NPC("dragon");
	}
	else if (symbol == 'H'){
		entity = new NPC("human");
	}
	else if (symbol == 'E'){
		entity = new NPC("elf");
	}
	else if (symbol == 'O'){
		entity = new NPC("orc");
	}
	else if (symbol == 'M'){
		entity = new NPC("merchant");
	}
	else if (symbol == 'L'){
		entity = new NPC("halfling");
	}
	else if (symbol == '0'){
		entity = new ItemPotion('h', 10);
	}
	else if (symbol == '1'){
		entity = new ItemPotion('a', 5);
	}
	else if (symbol == '2'){
		entity = new ItemPotion('d', 5);
	}
	else if (symbol == '3'){
		entity = new ItemPotion('h', -10);
	}
	else if (symbol == '4'){
		entity = new ItemPotion('a', -5);
	}
	else if (symbol == '5'){
		entity = new ItemPotion('d', -5);
	}
	else if (symbol == '6'){
		//entity = new ItemGold(2);
	}
	else if (symbol == '7'){
		//entity = new ItemGold(1);
	}
	else if (symbol == '8'){
		//entity = new ItemGold(4);
	}
	else if (symbol == '9'){
		//entity = new ItemGold(6);
	}
	return entity;
}

/**
 * Creates a Player of the race the player selects
 */
void buildPlayer(){
	cout << "Choose your character's race or quit:" << endl;
	cout << "S(hade), D(row), V(ampire), T(roll), G(oblin), or Q(uit)" << endl;
	char chosenRace;
	cin >> chosenRace;
	if (chosenRace == 'S' || chosenRace == 's'){
		player = new Player("shade");
	}
	else if (chosenRace == 'D' || chosenRace == 'd'){
		player = new Player("drow");
	}
	else if (chosenRace == 'V' || chosenRace == 'v'){
		player = new Player("vampire");
	}
	else if (chosenRace == 'T' || chosenRace == 't'){
		player = new Player("troll");
	}
	else if (chosenRace == 'G' || chosenRace == 'g'){
		player = new Player("goblin");
	}
	else if (chosenRace == 'Q' || chosenRace == 'q'){
		isQuitting = true;
		reRun = false;
	}
}

void readInLevels(string fileName){
	string currentLine;
	stringstream parser;
	Tile *temp;
	char tileSymbol;
	ifstream toLoad(fileName.c_str());
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 25; j++){
			getline(toLoad, currentLine);
			parser.str(currentLine);
			int k = 0;
			while (parser >> tileSymbol){
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
					if (tileSymbol == '\\'){
						temp->isStairs = true;
					}
					else{
						temp->addEntity(getMatchingEntity(tileSymbol));
					}
				}
				fullDungeon[i][j][k] = temp;
				k++;
			}
		}
	}
}

void generateLevels(){
	/*for(int i = 0; i < 5; i++){
		Level *temp = new Level();
		Tile *** tempMap = temp->getMap();
		for (int j = 0; j < 25; j++){
			for (int k = 0; k < 79; k++){
				fullDungeon[i][j][k] = tempMap[j][k];
			}
		}
		delete temp;
	}*/
}

void execute(string &action){
	string desiredMove;
	getline(cin, desiredMove);
	stringstream stream;
	stream << desiredMove;
	int x = player->getX();
	int y = player->getY();

	if (stream.peek() == 'r'){
		isQuitting == true;
		reRun = true;
	}
	else if (stream.peek() == 'a'){
		stream.ignore();
		string dir;
		stream >> dir;
		Tile *target = getTargetTile(dir);
		if (target == NULL){
			action = "";
			execute(action);
		}
		else{
			//Do combat here or whatever
		}
	}
	else if (stream.peek() == 'u'){
		stream.ignore();
		string dir;
		stream >> dir;
		Tile *target = getTargetTile(dir);
		if (target == NULL || target->getSymbol() != 'P'){
			action = "";
			execute(action);
		}
		else{
			string potType = target->usePotion(player);
			action = "PC uses " + potType;
		}
	}
	else{
		Tile *target = getTargetTile(desiredMove);
		if (target == NULL){
			action = "";
			execute(action);
		}
		else{
			int success = fullDungeon[currentFloor][y][x]->moveEntity(target);
			if (success == -1){
				changeFloors();
			}
		}
	}
}

void updateEnemies(string &action){

}

void getFinalScore(){
	int score = player->getGold();
	if (player->getRace() == "shade"){
		score *= 1.5;
	}
}

int main(int argc, char* argv[]){
	fullDungeon = new Tile ***[5];
	for (int i = 0; i < 5; i++){
		fullDungeon[i] = new Tile **[25];
		for (int j =0; j < 25;j++){
			fullDungeon[i][j] = new Tile *[79];
		}
	}
	do{
		reRun = false;
		currentFloor = 0;
		string action = "";

		buildPlayer();
		if (argc == 2){
			readInLevels(argv[1]);
		}
		else{
			generateLevels();
		}
		findPlayer();
		display = new TextDisplay(fullDungeon[currentFloor], player);
		while (!isQuitting){
			display->draw(action, currentFloor);
			action = "";
			execute(action);
			updateEnemies(action);
		}
		if (!reRun && player != NULL){
			getFinalScore();
		}
	}while (reRun);
	return 0;
}