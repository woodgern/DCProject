CXX = g++
CXXFLAGS = -Wall
EXEC = cc3k
OBJECTS = Engine.o Ability.o Chamber.o Character.o Entity.o EntityFactory.o Item.o ItemGold.o ItemPotion.o Level.o NPC.o Player.o TextDisplay.o Tile.o

${EXEC}: ${OBJECTS}
	${CXX} ${CXXFLAGS} ${OBJECTS} -o ${EXEC}

Engine.o: Engine.cc TextDisplay.h Player.h NPC.h Tile.h Level.h ItemPotion.h ItemGold.h Ability.h EntityFactory.h

Ability.o: Ability.cc Player.h Character.h

Chamber.o: Chamber.cc Player.h Tile.h EntityFactory.h

Character.o: Character.cc Ability.h Entity.h

Entity.o: Entity.cc

EntityFactory.o: EntityFactory.cc Entity.h ItemGold.h ItemPotion.h NPC.h

Item.o: Item.cc Entity.h

ItemGold.o: ItemGold.cc Item.h

ItemPotion.o: ItemPotion.cc Item.h

Level.o: Level.cc NPC.h Chamber.h Player.h Tile.h

NPC.o: NPC.cc Character.h

Player.o: Player.cc Character.h ItemPotion.h

TextDisplay.o: TextDisplay.cc Tile.h Player.h

Tile.o: Tile.cc ItemGold.h Entity.h Player.h

.PHONY: clean

clean:
	rm ${OBJECTS} ${EXEC}
