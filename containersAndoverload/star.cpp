/*
 * star.cpp
 *
 *  Created on: Jul 12, 2020
 *      Author: esme
 */

#include <iostream>
#include "star.h"


ostream& operator<<(ostream &os, shape itsShape){

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

Star::Star(){
	this->itsShape = shape(rand() % 5);
};
Star::Star(shape S): itsShape(S) {}
void Star::print() const{
	cout << itsShape << " " << flush;
}





