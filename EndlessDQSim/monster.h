#pragma once
#include "battler.h"
#include "hero.h"
#include <string>
#include <iostream>
using namespace std;
class Monster : public Battler{
public:
	Monster(string name, int health, int attack);
	void intimidatePlayer();
//private:
	string name;
	int health;
	int attack;
};