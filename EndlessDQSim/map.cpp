#include "map.h"
#include <iostream>
#include <string>
using namespace std;

Map::Map(){
	cout << "Welcome to the realm" << endl;
}

void Map::Battle(Hero *player, Monster *monster){
	bool playerTurn = true;
	int turnNum = 1;
	string userInput;
	while(inBattle == true){

		if(playerTurn == true){
		//Hero's turn
		cout << "What will you do? Attack/Run" << endl;
		cin  >> userInput;
		cout << "You input " << userInput << endl;
		if(userInput == "Attack"){
			player->attackOther(monster);
		}
		playerTurn = false;
	}
		if(playerTurn == false){
			//Monster's turn
			monster->attackOther(player);
			playerTurn = true;
	}
		if(monster->getHealth() <= 0 || player->getHealth() <= 0){
			cout << "Reached" << endl;
			inBattle = false;
		}
		//cout << inBattle << endl;
	}

}

void Map::randomEncounter(Hero *player){
	Monster *monster;
	monster = new Monster(20,5);
	cout << "Monster appeared!" << endl;
	//start turn based battle
	Battle(player, monster);
	//monster->attackOther(player);
	// player->attackOther(monster);
}

void Map::exploreMap(Hero *player){
	while(inBattle == false){
	srand(time(NULL));
	int random_integer = (rand() % 10) + 1;
	if(random_integer <= 3){
		inBattle = true;
		randomEncounter(player);
	}
	else{
		cout << player->getName() << " explores the field..." << endl;
	}
	}
}