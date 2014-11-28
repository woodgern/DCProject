#include "Ability.h"
#include "Player.h"

  void applyAbility (char trigger, Character *actingCharacter, Character *targetCharacter = NULL)
  {
    if(trigger == 'k') {

      if(actingCharacter->getRace() == "goblin") {
        Player *temp = (Player *) actingCharacter;
  		  temp->pickUpGold(5);
  	  }

    }
    else if(trigger == 't') {

      if(actingCharacter->getRace() == "troll") {
        actingCharacter->applyHit(-5);
      }

    }
    else if(trigger == 'h') {
      if(actingCharacter->getRace() == "vampire") {  
        int dwarf = -1;
        if(targetCharacter->getRace() == "dwarf") {
          dwarf = 1;
        }
        actingCharacter->applyHit(dwarf * 5);
      } 
      else if(actingCharacter->getRace() == "elf") {
        actingCharacter->doCombat(targetCharacter);
      }

    }
  }

