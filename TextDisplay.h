
#ifndef TEXTDISPLAY_H
#define TEXTDISPLAY_H

#include <string>
#include "Player.h"
#include "Tile.h"

class TextDisplay
{
    Tile ***map;
    Player *player;

    void drawStatus(std::string action, int floorCount);
    void drawMap();

    public:
    TextDisplay(Tile ***newMap, Player *player);

    void draw(std::string action, int floorCount);
};

#endif // TEXTDISPLAY_H
