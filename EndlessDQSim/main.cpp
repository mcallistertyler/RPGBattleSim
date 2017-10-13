//Battle simulator
#include <iostream>
//#include <curses.h>
#include <string>
#include "map.h"
#include "hero.h"
using namespace std;

int main(){
	Map map;
	Hero *player1;
	player1 = new Hero("Ty", 50, 10);
	//Battler *player1 = &player;
	map.exploreMap(player1);
	return 0;
}