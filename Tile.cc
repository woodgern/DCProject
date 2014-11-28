#include "Tile.h"
#include "ItemGold.h"
#include <iostream>

// Constructors/Destructors
//  

Tile::Tile (char symbol) {
    this->symbol = symbol;
    this->occupyingEntity = NULL;
    this->isStairs = false;
    this->passable = true;
}

Tile::~Tile () { }

/**
   * @return bool
   * @param  toPlace
   */
  bool Tile::addEntity (Entity* toPlace)
  {
  	if(occupyingEntity != NULL && !isGold()) {
  		return false;
  	}
  	occupyingEntity = toPlace;
  	return true;
  }


  /**
   * @return int
   * @param  targetTile
   */
   //also adds gold if the tile is trying to be moved to by a player
  int Tile::moveEntity (Tile* targetTile)
  {
    if((targetTile->getSymbol() != '.' && isOccupied() && occupyingEntity->getClassName() != 'p') || 
      !targetTile->isPassable()) {
    	return 0;
    }
    else if(targetTile->isStairs) {
    	return -1;
    }
    if(targetTile->isGold() && isOccupied() && occupyingEntity->getClassName() == 'p') {
    	int amount = targetTile->getAmount();
      Player *temp = (Player *) occupyingEntity;
    	temp->pickUpGold(amount);
    }
    else if(targetTile->isGold() && isOccupied() && occupyingEntity->getClassName() != 'p') {
    	return 0;
    }
    
    targetTile->addEntity(occupyingEntity);
    occupyingEntity = NULL;
    return 1;
  }


  /**
   */
  void Tile::removeEntity ()
  {
    delete occupyingEntity;
    occupyingEntity = NULL;
  }


  /**
   * @return bool
   */
  bool Tile::isOccupied ()
  {
    if(occupyingEntity != NULL) {
      return true;
    }
    return false;
  }


  /**
   * @return char
   */
  char Tile::getSymbol ()
  {
    if (occupyingEntity != NULL){
      return occupyingEntity->getSymbol();
    }
    else if (isStairs){
      return '\\';
    }
    else{
      return this->symbol;
    }
  }

  bool Tile::isPassable() {
  	return passable;
  }
  bool Tile::isGold() {
    if (isOccupied()){
  	 return occupyingEntity->getClassName() == 'g';
    }
    else{
      return false;
    }
  }
  bool Tile::isNPC() {
    if(occupyingEntity != NULL && occupyingEntity->getClassName() == 'n') {
      return true;
    }
  }

  std::string Tile::usePotion(Player* play){
    std::string value = "";
    if (isOccupied() && occupyingEntity->getClassName() == 't'){
      ItemPotion *temp = (ItemPotion *) occupyingEntity;
      play->applyPotion(temp);
      value = "Player uses " + temp->getDescription();
      occupyingEntity = NULL;
    }
    return value;
  }
  int Tile::getAmount() {
    ItemGold *temp = (ItemGold *) occupyingEntity;
  	return temp->getValue();
  }

  Entity* Tile::getEntity() {
    return occupyingEntity;
  }


