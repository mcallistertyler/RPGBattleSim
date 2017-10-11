#pragma once
#include "battler.h"
#include <iostream>
#include <string>
using namespace std;
class Hero : public Battler{
public:
	Hero(string name, int health, int attack);
	//void attackMonster(Monster monster);
	//void defend();
	void run();
// private:
string name;
int health;
int attack;
};