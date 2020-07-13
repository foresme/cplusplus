/*
 * cloud.h
 *
 *  Created on: Jul 12, 2020
 *      Author: esme
 */

#ifndef CLOUD_H_
#define CLOUD_H_

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



#endif /* CLOUD_H_ */
