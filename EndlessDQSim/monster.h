#pragma once
#include "battler.h"
#include "hero.h"
#include <string>
#include <iostream>
using namespace std;
class Hero;

//Monsters can waste a turn with an action
class Monster : public Battler{
public:
	Monster(int health, int attack);
	void attackOther(Hero *enemy);
	int getHealth();
	int getAttack();
	void setHealth(int health);
	void setAttack(int attack);
	void intimidateEnemy();

private:
	int health;
	int attack;
};