/*
 * game.h
 *
 *  Created on: Jul 12, 2020
 *      Author: esme
 */

#ifndef GAME_H_
#define GAME_H_

#include <iostream>
#include "person.h"
#include <map>
using namespace std;

class Game{
	Person player;
	map<int, string> actions;
	int steps;

public:
	Game();
	Game(Person player);

	int takeStep();
	void takeAction(int nextStep);
	void startGame();
};


#endif /* GAME_H_ */
