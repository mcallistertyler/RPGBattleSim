#pragma once
#include "battler.h"
#include "monster.h"
#include <iostream>
#include <string>
using namespace std;
class Monster;


//The hero can run away.
class Hero : public Battler{
public:
	Hero();
	Hero(string name, int health, int attack);
	void runAway();
	int getHealth();
	int getAttack();
	string getName();
	void setHealth(int health);
	void setAttack(int attack);
	void attackOther(Monster *enemy);
private:
	string name;
	int health;
	int attack;
};