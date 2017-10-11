#pragma once
#include <iostream>
#include <string>
using namespace std;
class Battler{
public:
	Battler();
	Battler(string name, int health, int attack);
	void attackOther(Battler enemy);
	//void defend();
//private:
	int health;
	int attack;
	string name;
};