//============================================================================
// Name        : lambda.cpp
// Author      : esme
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <algorithm>
//#include <functional>
using namespace std;

void runMike(string (*checkFunc)(string)){
	cout << checkFunc("mike") << endl;
}

void alsorunMike(function<string(string)> checkFunc){
	cout << checkFunc("mike") << endl;
}

int main() {
	string name = "mikey";

	auto printer = [=]() mutable{
		name = "mikey12";
		cout << "hello " << name << endl;
	};
	printer();

	// changing with mutable only affects inside the func scope
	[=](){ cout << "hello " << name << endl; }();

	auto printer2 = [&](){
			name = "mikey12";
			cout << "hello " << name << endl;
	};
	printer2();

	// after changing it with its reference, it's a permanent change
	[=](){ cout << "hello " << name << endl; }();

	auto lineMike = [](string name) ->string { return "-----" + name + "-------";  };
	auto sMike = [](string name) ->string { return "~~~~~~" + name + "~~~~~~~~~";  };
	auto starMike = [](string name) ->string { return "*********" + name + "*********";  };

	runMike(lineMike);
	runMike(sMike);
	runMike(starMike);

	alsorunMike(lineMike);
	alsorunMike(sMike);
	alsorunMike(starMike);

	return 0;
}
