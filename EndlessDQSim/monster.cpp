#include "monster.h"

Monster::Monster(int health, int attack){
	//cout << "\nMonster created with health of " << health << " and attack of " << attack << endl;
	this->health = health;
	this->attack = attack;
}

void Monster::setHealth(int health){
	this->health = health;
}

void Monster::setAttack(int attack){
	this->attack = attack;
}

int Monster::getHealth(){
	return this->health;	
}

int Monster::getAttack(){
	return this->health;
}

void Monster::attackOther(Hero *enemy){
	cout << "\nMonster's health " << this->health << endl;
	cout << enemy->getName() << "'s health " << enemy->getHealth() << endl;
	cout << "Monster attacks!" << endl;
	enemy->setHealth(enemy->getHealth() - this->attack);
	cout <<  enemy->getName() << "'s remaining health: " << enemy->getHealth() << endl;
}