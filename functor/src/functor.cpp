//============================================================================
// Name        : functor.cpp
// Author      : esme
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Functor{
	string word = "ala";
public:
	string operator()(string match){
		return match.append(word);
	}
};


int main() {
	Functor fnctr;

	cout << fnctr(fnctr(fnctr("as"))) << endl;


	return 0;
}
