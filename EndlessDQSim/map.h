#pragma once
//#include <curses.h>
#include "monster.h"
#include "hero.h"
class Map{
public:
	Map();
	void randomEncounter(Hero *player);
	void exploreMap(Hero *player);
	void Battle(Hero *player, Monster *monster);
private:
	bool inBattle = false;

};