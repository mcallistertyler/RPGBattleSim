#include "map.h"
#include <unistd.h>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
Map::Map(){
	cout << "Welcome to Alefgard" << endl;
}

string validateInput(string input){
	while(input != "attack"){
		cout << "Enter a valid option: ";
		cin >> input;
		transform(input.begin(), input.end(), input.begin(), ::tolower); //Best way of making a string lower case
		if(input == "attack"){
			break;
		}
	}
	return input;
}

void Map::Battle(Hero *player, Monster *monster){
	bool playerTurn = true;
	int turnNum = 1;
	string userInput;
	while(inBattle == true){

		if(playerTurn == true){
		//Hero's turn
		cout << "Turn: " << turnNum << "!!!" << endl;
		cout << "What will you do? Attack/Run" << endl;
		cin  >> userInput;
		transform(userInput.begin(), userInput.end(), userInput.begin(), ::tolower); //Best way of making a string lower case
		userInput = validateInput(userInput);
		cout << "You input " << userInput << endl;
		if(userInput == "attack"){
			player->attackOther(monster);
		}
		playerTurn = false;
		turnNum++;
	}
		if(playerTurn == false && monster->getHealth() > 0){
			//Monster's turn
			monster->attackOther(player);
			playerTurn = true;
	}
		if(monster->getHealth() <= 0){
			cout << "Monster defeated!" << endl;
			inBattle = false;
			delete monster;
		}
		if(player->getHealth() <= 0){
			cout << player->getName() << " perishes..." << endl;
			inBattle = false;
		}
	}

}

void Map::randomEncounter(Hero *player){
	//Random encounter, create monsters and transition to battle
	Monster *monster;
	monster = new Monster(20,5);
	cout << "\n";
	cout << "Monster appeared!" << endl;
	//start turn based battle
	Battle(player, monster);
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
		
		cout << "\r" << player->getName() << " explores the field-" << flush;
		usleep(2);
		cout << "\r" << player->getName() << " explores the field/" << flush;
		usleep(2);
		cout << "\r" << player->getName() << " explores the field-" << flush;
		usleep(2);
		cout << "\r" << player->getName() << " explores the field\\" << flush;
		usleep(2);
		cout << "\r" << player->getName() << " explores the field|" << flush;

	}
	if(player->getHealth() <= 0 && inBattle == false){
		inBattle = true;
		cout << "Game over." << endl;
	}
	}
}