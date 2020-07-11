/*
 * apple.cpp
 *
 *  Created on: Jul 12, 2020
 *      Author: esme
 */

#include <iostream>
using namespace std;

class Apple{
	string color;

public:
	Apple(string color): color(color) {

	}

	bool operator<(const Apple &other) const{
		return color < other.color;
	}

	void print() const{
		cout << "(" << color << ")" << endl;
	}
};



