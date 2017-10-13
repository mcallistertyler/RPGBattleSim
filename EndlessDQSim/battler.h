#pragma once
#include <iostream>
#include <string>
using namespace std;
//All battlers can attack and defend.
//All battlers have health, attack and a name.
class Battler{
public:
	Battler();
	virtual void attackOther(Battler *enemy);
	virtual void defendSelf();
protected:
 	int health;
 	int attack;

};