
#ifndef CHAMBER_H
#define CHAMBER_H

#include <string>
#include "Tile.h"
#include "Player.h"

/**
  * class Chamber
  * 
  */

class Chamber
{
  Tile **Contents;
public:
  Chamber ();
  virtual ~Chamber ();

  /**
   * @param  toPlace
   */
  void placePlayer (Player *toPlace);
  void generateGold ();
  void generatePotion ();
  void generateEnemy ();
  void placeStairs ();
  void setContents (Tile new_var);
  Tile **getContents ();
private:
  void initAttributes () ;

};

#endif // CHAMBER_H
