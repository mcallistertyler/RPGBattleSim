#include "hero.h"

Hero::Hero(){

}

Hero::Hero(string name, int health, int attack){
	this->name = name;
	this->health = health;
	this->attack = attack;
}

string Hero::getName(){
	return this->name;
}

int Hero::getHealth(){
	return this->health;
}
int Hero::getAttack(){
	return this->attack;
}	
void Hero::setHealth(int health){
	this->health = health;
}

void Hero::setAttack(int attack){
	this->attack = attack;
}

void Hero::runAway(){
	cout << "Tried to run!" << endl;
}

void Hero::attackOther(Monster *enemy){
	cout << this->name << " attacks! " << endl;
	enemy->setHealth(enemy->getHealth() - this->attack);
	cout << "Monster's health " << enemy->getHealth() << endl;
}