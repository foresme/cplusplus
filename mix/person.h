/*
 * person.h
 *
 *  Created on: Jul 12, 2020
 *      Author: esme
 */

#ifndef PERSON_H_
#define PERSON_H_

#include "star.h"
#include "apple.h"
#include "cloud.h"
#include <vector>
#include <set>

using namespace std;

enum luck{lucky, normal, unlucky};

class Person{
	vector<Star> stars;
	set<Apple> apples;
	vector<Cloud> clouds;
	luck luckiness;
	string name;

public:
	Person(string name);

	void collectStar(Star newStar);
	void collectApple(Apple newApple);
	void collectCloud(Cloud newCloud);
	void printStars();
	void printApples();
	void printClouds();
	void removeCloud();
	void removeStar();
	void removeApple();
	luck getLuck();
	int getApplesSize();

};



#endif /* PERSON_H_ */
