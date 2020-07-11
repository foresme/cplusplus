/*
 * allTypes.cpp
 *
 *  Created on: Jul 11, 2020
 *      Author: patates
 */


#include <iostream>
#include <vector>
#include <set>
#include "cloud.cpp"
#include "apple.cpp"
#include "star.cpp"

using namespace std;

int main(){

	vector<Cloud> clouds;
	set<Apple> apples;
	int size = 25;
	vector< vector<Star> > stars(size, vector<Star>(size));

	clouds.push_back(Cloud(pink, nexttoyou));
	clouds.push_back(Cloud(babyblue, sky));
	clouds.push_back(Cloud(purple, inyourhouse));
	clouds.push_back(Cloud(green, inyourhead));
	apples.insert(Apple("yellow"));
	apples.insert(Apple("green"));
	apples.insert(Apple("red"));


	for(int i = 0; i < size; i++){
		for(int k = 0; k < size; k++){

			if( i == k ){
				if( i == size/2 ){
					cout << "i: " << i << "k: " << k << endl;
					stars[i][k] = Star(sun);
				}
				else{
					stars[i][k] = Star(shiny);
				}
			}
			else if(i + k == size-1){
				stars[i][k] = Star(small);
			}
			else if( (i == 0) | (i == size-1) | (k == size-1) | (k == 0)){
				stars[i][k] = Star(huge);

			}
			else {
				stars[i][k] = Star(big);
			}
		}
	}

	for(vector<Cloud>::iterator it = clouds.begin(); it != clouds.end(); it++){
		it->whereisCloud();
		it->cloudsColor();
	}

	for(set<Apple>::iterator ait = apples.begin(); ait != apples.end(); ait++){
		ait->print();
	}

	for(int i = 0; i < stars.size(); i++){
		for(int k = 0; k < stars[i].size(); k++){
			stars[i][k].print();
		}
		cout << endl;
	}
}


