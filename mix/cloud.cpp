/*
 * cloud.cpp
 *
 *  Created on: Jul 11, 2020
 *      Author: esme
 */

#include <iostream>
#include <ostream>
#include <map>
using namespace std;

enum location {nexttoyou, sky, inyourhead, inyourhouse};
enum color {pink, purple, babyblue, white, lilac, green };

inline ostream& operator<<(ostream &os, const location itsLocation){

	if(itsLocation == nexttoyou){
		return os << "It's next to you silly.";
	}
	else if(itsLocation == sky){
		return os << "It's up there in the sky!";
	}
	else if(itsLocation == inyourhead){
		return os << "What cloud?";
	}
	else{
		return os << "You bought a cloud, remember?";
	}

}


inline ostream& operator<<(ostream &os, color itsColor){
	static map<color, string> colors;
	if(colors.size() == 0){
		colors[pink] = "It's a pink cloud.";
		colors[purple] = "It's a purple cloud.";
		colors[babyblue] = "It's a babyblue cloud.";
		colors[white] = "It's a white cloud.";
		colors[lilac] = "It's a lilac cloud.";
		colors[green] = "It's a green cloud.";
	}

	return os << colors[itsColor];
}


class Cloud{

	location itsLocation;
	color itsColor;

public:
	Cloud(color itsColor, location itsLocation): itsLocation(itsLocation), itsColor(itsColor) {

	}

	void whereisCloud(){
		cout << itsLocation << endl;
	}


	void cloudsColor(){
		cout << itsColor << endl;
	}


};



