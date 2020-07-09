//============================================================================
// Name        : exceptions.cpp
// Author      : esme
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <exception>
#include "myExceptions.cpp"

using namespace std;

class goesWrong {
public:
	goesWrong(){
		char *longestArray = new char[9999999999999];
		delete[] longestArray;
	}
};


void errorThrower(){

	bool error1 = false;
	bool error2 = false;
	bool error3 = true;
	bool error4 = false;
	bool error5 = false;
	bool error6 = false;

	if(error1){
		throw 8;
	}

	if(error2){
		throw "eight";
	}

	if(error3){
		throw string("eight");
	}

	if(error4){
		throw MyException();
	}
	if(error5){
		throw bad_alloc();
	}
	if(error6){
		int a = 5;
		int b = 0;
		a = a/b;
	}
}

int main() {

	try {
		errorThrower();
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
	catch(MyException &e){
		cout << e.what() << endl;
	}
	catch(overflow_error &e){
		cout << e.what() << endl;
	}
	catch(...){
		cout << "Something?" << endl;
	}

	cout << "Still running" << endl;
	return 0;
}
