/*
 * two2vectors.cpp
 *
 *  Created on: Jul 8, 2020
 *      Author: esme
 */

#include <iostream>
#include <vector>
using namespace std;

class TwoDvector{
public:
	TwoDvector(){
		vector< vector<int> > grid(5, vector<int>(3,5));
		grid[2].push_back(555555);

		for(int i = 0; i < grid.size(); i++){
			for(int k = 0; k < grid[i].size(); k++){
				cout << grid[i][k] << flush;
			}
			cout << endl;
		}
	}
};


