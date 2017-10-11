#pragma once
#include "monster.h"
#include "hero.h"
class Map{
public:
	Map();
	void randomEncounter(Hero player);
	void exploreMap(Hero player);
private:
	bool inBattle = false;

};