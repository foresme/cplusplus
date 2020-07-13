/*
 * apple.h
 *
 *  Created on: Jul 12, 2020
 *      Author: patates
 */

#ifndef APPLE_H_
#define APPLE_H_
#include <iostream>
#include <array>
using namespace std;


class Apple{
	string colors[3] = {"yellow", "green", "red"};
	string color;

public:
	Apple();
	Apple(string color);
	bool operator<(const Apple &other) const;
	void print() const;
};



#endif /* APPLE_H_ */
