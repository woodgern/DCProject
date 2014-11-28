#include <string>
#include "Character.h"

void applyAbility (char trigger, string race, Player *actingCharacter = NULL, Character *targetCharacter = NULL)
  {
    if(trigger == 'k') {

      if(race == "goblin") {
        actingCharacter->pickUpGold(5);
      }

    }
    else if(trigger == 't') {

      if(race == "troll") {
        actingCharacter->applyHit(-5);
      }

    }
    else if(trigger == 'h') {
      if(race == "vampire") {  
        int dwarf = -1;
        if(targetCharacter->getSymbol() == 'W') {
          dwarf = 1;
        }
        actingCharacter->applyHit(dwarf * 5);
      } 
      else if(race == "elf") {
        actingCharacter->doCombat(targetCharacter);
      }

    }
  }