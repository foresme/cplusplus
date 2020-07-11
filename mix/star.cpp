/*
 * star.cpp
 *
 *  Created on: Jul 12, 2020
 *      Author: esme
 */

#include <iostream>
#include <ostream>
using namespace std;

enum shape{small, big, huge, shiny, sun};

inline ostream& operator<<(ostream &os, shape itsShape){

	switch(itsShape){
	case small:
		os << "✦";
		break;
	case big:
		os << "✯";
		break;
	case huge:
		os << "☆";
		break;
	case shiny:
		os << "⋆";
		break;
	case sun:
		os << "☼";
		break;
	}

	return os;
}

class Star{

	shape itsShape;
public:
	Star(): itsShape() {};

	Star(shape S): itsShape(S) {}

	void print() const{
		cout << itsShape << " " << flush;
	}

};



