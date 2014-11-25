#include "Tile.h"

// Constructors/Destructors
//  

Tile::Tile () {
}

Tile::~Tile () { }

/**
   * @return bool
   * @param  toPlace
   */
  bool Tile::addEntity (Entity* toPlace)
  {
  	if(occupyingEntity != NULL) {
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
    if((targetTile->isOccupied() && (!targetTile->isGold() && occupyingEntity->getClassName() != 'm')) || !targetTile->isPassable()) {
    	return 0;
    }
    else if(targetTile->isStairs) {
    	return -1;
    }
    if(targetTile->isGold() && occupyingEntity->getClassName() == 'm') {
    	int amount = targetTile->getAmount();
    	occupyingEntity->pickUpGold(amount);
    }
    else if(targetTile->isGold() && occupyingEntity->getClassName() != 'm') {
    	return 0;
    }
    targetTile->addEntity(occupyingEntity);
    occupyingEntity = NULL;

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
    return occupyingEntity->getSymbol();
  }


  /**
   * @return string
   */
  string Tile::getEntity ()
  {

  }
  bool Tile::isPassable() {
  	return isPassable;
  }
  bool Tile::isGold() {
  	return occupyingEntity->getClassName() == 'g';
  }
  string Tile::usePotion(Player* play) {

  }
  int Tile::getAmount() {
  	return occupyingEntity->getValue();
  }


