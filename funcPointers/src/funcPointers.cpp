//============================================================================
// Name        : funcPointers.cpp
// Author      : esme
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

template <class T>
void simpFunction(T element){
	cout << element << endl;
}

bool isLong(string x){
	return x.length() >= 9;
}

int main() {

	void (*pointy)(string) = simpFunction;
	void (*pointi)(int) = simpFunction;
	pointy("ele");
	pointi(5);


	vector<string> moo;
	moo.push_back("m");
	moo.push_back("mo");
	moo.push_back("moo");
	moo.push_back("mooo");
	moo.push_back("moooo");
	moo.push_back("mooooo");
	moo.push_back("moooooo");
	moo.push_back("mooooooo");
	moo.push_back("moooooooo");

	int count = count_if(moo.begin(), moo.end(), isLong);
	cout << "count: " << count << endl;

	return 0;
}
