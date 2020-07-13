/*
 * allTypes.cpp
 *
 *  Created on: Jul 11, 2020
 *      Author: esme
 */


#include <iostream>
#include <vector>
#include <set>
#include "cloud.h"
#include "apple.h"
#include "star.h"
#include "person.h"
#include "game.h"

using namespace std;

int main(){
    srand((unsigned int)time(NULL));
	Person someone("Mary");
	Game newGame(someone);
	newGame.startGame();

}


