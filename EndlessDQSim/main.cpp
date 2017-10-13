//Battle simulator
#include <iostream>
//#include <curses.h>
#include <string>
#include "map.h"
#include "hero.h"
using namespace std;

int main(){
	string name;
	Map map;
	Hero *player1;
	cout << "Enter your name." << endl;
	cin >> name;
	player1 = new Hero(name, 50, 10);
	map.exploreMap(player1);
	return 0;
}