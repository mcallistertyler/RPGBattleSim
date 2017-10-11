//Battle simulator
#include <iostream>
#include <string>
#include "map.h"
#include "hero.h"
using namespace std;

int main(){
	Map map;
	Hero player("Hitoshura", 25, 25);
	map.exploreMap(player);
	return 0;
}