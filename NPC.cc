#include "NPC.h"

// Constructors/Destructors
//  

NPC::NPC (std::string type): Character()  {
	if (type == "dwarf"){
		symbol = 'W';
	}
	else if (type == "elf"){
		symbol = 'E';
	}
	else if (type == "dragon"){
		symbol = 'D';
	}
	else if (type == "halfling"){
		symbol = 'L';
	}
	else if (type == "human"){
		symbol = 'H';
	}
	else if (type == "merchant"){
		symbol = 'M';
	}
	else if (type == "orc"){
		symbol = 'O';
	}
}

NPC::~NPC () { }

char NPC::getClassName(){
	return 'n';
}
//  
// Methods
//  


// Accessor methods
//  


// Other methods
//  


