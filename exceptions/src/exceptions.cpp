//============================================================================
// Name        : exceptions.cpp
// Author      : esme
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class goesWrong {
public:
	goesWrong(){
		char *longestArray = new char[9999999999999];
		cout << longestArray << endl;
		delete[] longestArray;
	}
};

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
		//errorThrower();
		//goesWrong wrong;
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
	catch(bad_alloc &e){
		cout << "Bad Alloc: " << e.what() << endl;
	}

	cout << "Still running" << endl;
	return 0;
}
