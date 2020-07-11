//============================================================================
// Name        : sets.cpp
// Author      : esme
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <set>
using namespace std;

class Cloud{

	string color;
public:

	Cloud(): color("white") {
		cout << "Default const" << endl;
	}

	Cloud(string color): color(color) {
		cout << "Custom const" << endl;
	}

	void changeColor(){

		if( color == "white "){
			color = "pink";
		}
		else if( color == "pink" ){
			color = "purple";
		}
		else{
			color = "lilac";
		}
	}

	bool operator<(const Cloud &other) const{
		return this->color < other.color;
	}

	// iterator returns const object
	// if print func is not const, it can't be used with iterator
	// because iterator doesn't know whether this func changes the object or not
	void print() const{
		cout << "is a " << color << " cloud" << endl;
	}

};

int main() {

	set<string> clouds;

	clouds.insert("purple");
	clouds.insert("lilac");
	clouds.insert("yellow");
	clouds.insert("yellow");

	for(set<string>::iterator it = clouds.begin(); it != clouds.end(); it++){
		cout << *it << endl;
	}

	set<string>::iterator findIt = clouds.find("purple");

	if( findIt != clouds.end() ){
		cout << "Found purple" << endl;
	}

	if( clouds.count("purple") ){
		cout << "Found purple" << endl;
	}

	Cloud purple = Cloud("purple");
	Cloud orange = Cloud("orange");

	set<Cloud> Clouds;
	Clouds.insert(purple);
	Clouds.insert(orange);
	Clouds.insert(Cloud());
	Clouds.insert(Cloud("lilac"));
	Clouds.insert(Cloud());

	for(set<Cloud>::iterator clouit = Clouds.begin(); clouit != Clouds.end(); clouit++){
		clouit->print();
	}

	return 0;
}
