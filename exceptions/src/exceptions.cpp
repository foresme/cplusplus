//============================================================================
// Name        : exceptions.cpp
// Author      : esme
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void errorThrower(){

	bool error1 = false;
	bool error2 = false;
	bool error3 = true;

	if(error1){

		throw 8;
	}

	if(error2){
		throw "eight";
	}

	if(error3){
		throw string("eight");
	}
}

int main() {

	try {
		errorThrower();
	}
	catch(int e){
		cout << "Integer error" << endl;
	}
	catch(const char *e){
		cout << "Primitive string error" << endl;
	}
	catch(string &e){
		cout << "Non-primitive string error" << endl;
	}
	return 0;
}
