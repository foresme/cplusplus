/*
 * star.h
 *
 *  Created on: Jul 12, 2020
 *      Author: esme
 */

#ifndef STAR_H_
#define STAR_H_

#include <ostream>
using namespace std;

enum shape{small, big, huge, shiny, sun};

class Star{
	shape itsShape;
public:
	Star();
	Star(shape S);
	void print() const;
};

ostream& operator<<(ostream &os, shape itsShape);


#endif /* STAR_H_ */
