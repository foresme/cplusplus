/*
 * cloud.h
 *
 *  Created on: Jul 12, 2020
 *      Author: esme
 */

#ifndef CLOUD_H_
#define CLOUD_H_

#include <ostream>
using namespace std;

enum location {nexttoyou, sky, inyourhead, inyourhouse};
enum color {pink, purple, babyblue, white, lilac, green };

class Cloud{
	location itsLocation;
	color itsColor;
public:
	Cloud();
	Cloud(color itsColor, location itsLocation);
	void whereisCloud();
	void cloudsColor();
};

ostream& operator<<(ostream &os, const location itsLocation);
ostream& operator<<(ostream &os, color itsColor);

#endif /* CLOUD_H_ */
