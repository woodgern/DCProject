#include "NPC.h"

// Constructors/Destructors
//  

NPC::NPC (std::string type): Character()  {
	if (type == "dwarf"){
		baseAttack = 0;
		baseDefense = 0;
		baseEv = 0;
		maxHealth = 0;
		symbol = 'W';
	}
	else if (type == "elf"){
		baseAttack = 0;
		baseDefense = 0;
		baseEv = 0;
		maxHealth = 0;
		symbol = 'E';
	}
	else if (type == "dragon"){
		baseAttack = 0;
		baseDefense = 0;
		baseEv = 0;
		maxHealth = 0;
		symbol = 'D';
	}
	else if (type == "halfling"){
		baseAttack = 0;
		baseDefense = 0;
		baseEv = 50;
		maxHealth = 0;
		symbol = 'L';
	}
	else if (type == "human"){
		baseAttack = 20;
		baseDefense = 20;
		baseEv = 0;
		maxHealth = 140;
		symbol = 'H';
	}
	else if (type == "merchant"){
		baseAttack = 0;
		baseDefense = 0;
		baseEv = 0;
		maxHealth = 0;
		symbol = 'M';
	}
	else if (type == "orc"){
		baseAttack = 0;
		baseDefense = 0;
		baseEv = 0;
		maxHealth = 0;
		symbol = 'O';
	}
}


char NPC::getClassName(){
	return 'n';
}


