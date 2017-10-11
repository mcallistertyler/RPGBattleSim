#include "battler.h"
#include <iostream>
using namespace std;

Battler::Battler(){

}

Battler::Battler(string name, int health, int attack){
	health = health;
	attack = attack;
	name = name;
}

void Battler::attackOther(Battler enemy){
	cout << name << " attacks " << enemy.name << "!" << endl;
	enemy.health = enemy.health - attack;
}

// void Battler::defend(){	
//}