#include "NPC.h"

// Constructors/Destructors
//  

NPC::NPC (std::string type): Character()  {
	race = type;
	if (type == "dwarf"){
		baseAttack = 20;
		baseDefense = 30;
		evasive = 0;
		maxHealth = 100;
		symbol = 'W';
	}
	else if (type == "elf"){
		baseAttack = 30;
		baseDefense = 10;
		evasive = 0;
		maxHealth = 140;
		symbol = 'E';
	}
	else if (type == "dragon"){
		baseAttack = 20;
		baseDefense = 20;
		evasive = 0;
		maxHealth = 150;
		symbol = 'D';
	}
	else if (type == "halfling"){
		baseAttack = 15;
		baseDefense = 20;
		evasive = 50;
		maxHealth = 100;
		symbol = 'L';
	}
	else if (type == "human"){
		baseAttack = 20;
		baseDefense = 20;
		evasive = 0;
		maxHealth = 140;
		symbol = 'H';
	}
	else if (type == "merchant"){
		baseAttack = 70;
		baseDefense = 5;
		evasive = 0;
		maxHealth = 30;
		symbol = 'M';
	}
	else if (type == "orc"){
		baseAttack = 30;
		baseDefense = 25;
		evasive = 0;
		maxHealth = 180;
		symbol = 'O';
	}
	attack = baseAttack;
	defense = baseDefense;
	health = maxHealth;
}


char NPC::getClassName(){
	return 'n';
}


