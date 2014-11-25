
#ifndef TEXTDISPLAY_H
#define TEXTDISPLAY_H

#include <string>
#include "Player.h"
#include "Tile.h"

class TextDisplay
{
    Tile *map[25][79];
    Player *player;

    void drawStatus(std::string action, int floorCount);
    void drawMap();

    public:
    TextDisplay(Tile *newMap[25][79], Player *player);
    virtual ~TextDisplay ();

    void draw(std::string action, int floorCount);
};

#endif // TEXTDISPLAY_H
