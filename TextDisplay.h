
#ifndef TEXTDISPLAY_H
#define TEXTDISPLAY_H

#include <string>
#include "Player.h"
#include "Tile.h"

class TextDisplay
{
    Tile *map[25][79];
    Player *player;

    void drawStatus (string action, int floorCount);
    void drawMap ();

    public:
    TextDisplay (Tile *newMap[][], Player *player);
    virtual ~TextDisplay ();

    void draw (string action, int floorCount);
};

#endif // TEXTDISPLAY_H
