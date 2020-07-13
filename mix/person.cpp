/*
 * person.cpp
 *
 *  Created on: Jul 12, 2020
 *      Author: patates
 */

#include "person.h"

Person::Person(string name) {
	luckiness = luck(rand() % 2);
	this->name = name;
}

void Person::collectApple(Apple newApple){
	apples.insert(newApple);
}

void Person::collectStar(Star newStar){
	stars.push_back(newStar);
}

void Person::collectCloud(Cloud newCloud){
	clouds.push_back(newCloud);
}

void Person::printStars(){
	for(int i = 0; i < stars.size(); i++){
		stars[i].print();
	}
}

int Person::getApplesSize(){
	return apples.size();
}

void Person::printApples(){
	for(set<Apple>::iterator it = apples.begin(); it != apples.end(); it++){
		it->print();
	}
}

void Person::printClouds(){
	for(int i = 0; i < clouds.size(); i++){
		clouds[i].cloudsColor();
	}
}

luck Person::getLuck(){
	return luckiness;
}

void Person::removeApple(){
	if(apples.size() != 0){
		set<Apple>::iterator it = apples.begin();
		apples.erase(it);
	}
}
void Person::removeStar(){
	if(stars.size() != 0){
		stars.pop_back();
	}
}
void Person::removeCloud(){
	if(clouds.size() != 0){
		clouds.pop_back();
	}
}

