/*
 * apple.cpp
 *
 *  Created on: Jul 12, 2020
 *      Author: esme
 */

#include <iostream>
#include "apple.h"
using namespace std;

Apple::Apple(){
	this->color = colors[rand() % 3];
}

Apple::Apple(string color): color(color){}

bool Apple::operator<(const Apple &other) const{
	return color < other.color;
}

void Apple::print() const{
	cout << "(" << color << ")" << endl;
}




