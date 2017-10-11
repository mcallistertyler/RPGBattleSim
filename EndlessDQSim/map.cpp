#include "map.h"
#include <iostream>
#include <string>
using namespace std;

Map::Map(){
	
}

void Map::randomEncounter(Hero player){
	cout << "Monster appeared!";
	Monster monster("Slime", 5, 5);
	monster.attackOther(player);
}

void Map::exploreMap(Hero player){
	while(inBattle == false){
	srand(time(NULL));
	int random_integer = (rand() % 10) + 1;
	if(random_integer <= 3){
		inBattle = true;
		randomEncounter(player);
	}
	else{
		cout << "You explore the map" << endl;
	}
	}
}