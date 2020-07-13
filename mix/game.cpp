/*
 * game.cpp
 *
 *  Created on: Jul 12, 2020
 *      Author: esme
 */

#include "game.h"

Game::Game(Person player): player(player), steps(0) {
	actions[0] = "There is a cloud!";
	actions[1] = "You found a star!";
	actions[2] = "Apple tree!";
	actions[3] = "There is a cloud!";
	actions[4] = "You found a star!";

	actions[5] = "Apple tree!";
	actions[6] = "You can't find anything to collect!";
	actions[7] = "There is nothing to collect!";
	actions[8] = "There is a cloud!";
	actions[9] = "You found a star!";

	actions[10] = "Apple tree!";
	actions[11] = "An ugly monster stole your apple.";
	actions[12] = "Sun is shining and your cloud is gone.";
	actions[13] = "Your clouds hate your stars.";
	actions[14] = "You lost your bag.";

};

int Game::takeStep(){
	int nextStep = rand() % 7;
	//cout << "Players luck: " << player.getLuck() << " next step: " << nextStep << endl;
	if(player.getLuck() == 0){ //lucky
		nextStep += 0;
	}
	else if(player.getLuck() == 1){ //normal
		nextStep += 4;
	}
	else { //unlucky
		nextStep += 8;
	}

	return nextStep;
}

void Game::takeAction(int nextStep){
	string action = actions[nextStep];
	if(action == "There is a cloud!"){
		cout << "There is a cloud!" << endl;
		player.collectCloud(Cloud());
		player.printClouds();
	}
	else if(action == "You found a star!"){
		cout << "You found a star!" << endl;
		player.collectStar(Star());
		player.printStars();
		cout << endl;
	}
	else if(action == "Apple tree!") {
		cout << "Apple tree!" << endl;
		player.collectApple(Apple());
		player.printApples();
	}
	else if(action == "You can't find anything to collect!"){
		cout << "You can't find anything to collect!" << endl;
	}

	else if(action == "There is nothing to collect!") {
		cout << "There is nothing to collect!" << endl;
	}

	else if(action == "An ugly monster stole your apple.") {
		cout << "An ugly monster stole your apple." << endl;
		player.removeApple();
		player.printApples();
	}
	else if(action == "Sun is shining and your cloud is gone."){
		cout << "Sun is shining and your cloud is gone." << endl;
		player.removeCloud();
		player.printClouds();
	}
	else if(action == "Your clouds hate your stars.") {
		cout << "Your clouds hate your stars." << endl;
		player.removeStar();
		player.printStars();
	}
	else if(action == "You lost your bag."){
		cout <<  "You lost your bag." << endl;
			player.removeApple();
			player.removeCloud();
			player.removeStar();
			player.printApples();
			player.printClouds();
			player.printStars();
			cout << endl;
	}
	steps++;
	cout << endl;
	cout << "------------------------ STEP: " << steps << " -----------------------------" << endl;
}

void Game::startGame(){
	while(steps < 50){
		takeAction(takeStep());
		if(player.getApplesSize() == 3){
			cout << "YOU WON!" << endl;
			return;
		}
	}
	cout << "YOU LOST!" << endl;
	return;
}

