#include "monster.h"

Monster::Monster(string name, int health, int attack){
	name = name;
	health = health;
	attack = attack;
}

void Monster::intimidatePlayer(){
	cout << "The monster shouts at the player!";
}