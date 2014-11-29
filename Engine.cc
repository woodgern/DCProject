#include "TextDisplay.h"
#include "Player.h"
#include "NPC.h"
#include "Tile.h"
#include "Level.h"
#include "ItemPotion.h"
#include "ItemGold.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cstdlib>
#include "Ability.h"
#include "EntityFactory.h"

using namespace std;

Player *player = NULL;
Tile ****fullDungeon;
TextDisplay *display;
bool hasAngeredMerchants = false;
bool isQuitting = false;
bool reRun = false;
int currentFloor = 0;
EntityFactory *factory;

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
	display = NULL;
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
		entity = new ItemGold(2);
	}
	else if (symbol == '7'){
		entity = new ItemGold(1);
	}
	else if (symbol == '8'){
		entity = new ItemGold(4);
	}
	else if (symbol == '9'){
		entity = new ItemGold(6);
	}
	return entity;
}

/**
 * Creates a Player of the race the player selects
 */
void buildPlayer(){
	if (player != NULL){
		delete player;
		player = NULL;
	}
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
	else{
		buildPlayer();
	}
}

void readInLevels(string fileName){
	string currentLine;
	Tile *temp;
	char tileSymbol;
	ifstream toLoad(fileName.c_str());
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 25; j++){
			stringstream parser;
			getline(toLoad, currentLine);
			parser.str(currentLine);
			int k = 0;
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
		isQuitting = true;
		reRun = true;
		return;
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
			if (target->isOccupied() && target->isNPC()){
				Character *tempEnemy = (Character *) target->getEntity();
				action = player->doCombat(tempEnemy);
				if(tempEnemy->getRace() == "merchant"){
					hasAngeredMerchants = true;
				}
				if(tempEnemy->isDead()){
					applyAbility('k', player, NULL);
					Item * drop = factory->generateDrops(tempEnemy->getSymbol());
					if(tempEnemy->getSymbol() == 'H'){
						player->pickUpGold(2);
					}
					target->removeEntity();
					target->addEntity(drop);
				}
			}
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
			action = target->usePotion(player);
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
				if (currentFloor == 5){
					isQuitting = true;
					return;
				}
				changeFloors();
			}
			findPlayer();
		}
	}
}

void updateEnemies(string &action){
	int playX = player->getX();
	int playY = player->getY();

	for (int i = 0; i < 25; i++){
		for (int j = 0; j < 79; j++){
			Tile *tile = fullDungeon[currentFloor][i][j];
			if(tile->isOccupied() && tile->getEntity()->getClassName() == 'n'){
				if ((tile->getSymbol() != 'M' || hasAngeredMerchants) && (i <= playY + 1 && i >= playY - 1) && (j <= playX + 1 && j >= playX - 1)){
					Character *temp = (Character *) tile->getEntity();
					if (action != ""){
						action += " ";
					}
					action += temp->doCombat(player);
					if (player->isDead()){
						isQuitting = true;
						return;
					}
				}
				else if (tile->getSymbol() != 'D'){
					int success = 0;
					do{
						int xMod = (rand() % 3) - 1;
						int yMod = (rand() % 3) - 1;
						success = tile->moveEntity(fullDungeon[currentFloor][i+yMod][j+xMod]);
					}while(success != 1);
				}
			}
		}
	}
}

void getFinalScore(){
	int score = player->getGold();
	if (player->getRace() == "shade"){
		score *= 1.5;
	}
	cout << "Final score: " << score << endl;
	cout << "Play again? y(es), n(o)" << endl;
	char choice;
	cin >> choice;
	if (choice == 'y' || choice == 'Y'){
		reRun = true;
	}
}

int main(int argc, char* argv[]){
	hasAngeredMerchants = false;
	factory = new EntityFactory();

	do{
		if (fullDungeon == NULL){
			fullDungeon = new Tile ***[5];
			for (int i = 0; i < 5; i++){
				fullDungeon[i] = new Tile **[25];
				for (int j =0; j < 25;j++){
					fullDungeon[i][j] = new Tile *[79];
				}
			}
		}
		isQuitting = false;
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
			applyAbility('t', player, NULL);
			display->draw(action, currentFloor);
			action = "";
			execute(action);
			updateEnemies(action);
			if (player->isDead()){
				isQuitting = true;
			}
		}

		if (!reRun && player != NULL){
			getFinalScore();
		}

		if (fullDungeon != NULL){
			for (int i = 0; i < 5; i++){
				for (int j = 0; j < 25;j++){
					for (int k = 0; k < 79; k++){
						if (fullDungeon[i][j][k] != NULL){
							delete fullDungeon[i][j][k];
							fullDungeon[i][j][k] = NULL;
						}
					}
					if (fullDungeon[i][j] != NULL){
						delete []fullDungeon[i][j];
						fullDungeon[i][j] = NULL;
					}
				}
				if (fullDungeon[i] != NULL){
					delete []fullDungeon[i];
					fullDungeon[i] = NULL;
				}
			}
			delete []fullDungeon;
			fullDungeon = NULL;
		}
		delete display;
	}while (reRun);
	delete factory;
	delete player;
	return 0;
}