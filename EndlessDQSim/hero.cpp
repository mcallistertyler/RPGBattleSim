#include "hero.h"


Hero::Hero(string name, int health, int attack){
	name = name;
	health = health;
	attack = attack;
}

// Hero::attackMonster(Monster monster){
// 	monster.health = monster.health - attack;
// 	if(monster.health <= 0){
// 		cout << "Monster defeated!" << endl;
// 		//map.exploreMap();
// 	}
// }

void Hero::run(){
	cout << "The hero attempted to run!";
}