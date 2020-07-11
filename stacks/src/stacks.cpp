//============================================================================
// Name        : stacks.cpp
// Author      : esme
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stack>
#include <queue>
using namespace std;

class Cat{
	string meow;
public:
	Cat(): meow(""){
		cout << "-------------constructor" << endl;
	}

	Cat(string meow): meow(meow){
		cout << "-------------custom const" << endl;
	}

	~Cat(){
		cout << "-------------destroyed" << endl;
	}

	void meowing(){
		cout << meow << endl;
	}

};
int main() {

	stack<Cat> lifoCats;
	lifoCats.push(Cat("miv"));
	lifoCats.push(Cat("mev"));
	lifoCats.push(Cat("meow"));
	lifoCats.push(Cat("meow"));
	lifoCats.push(Cat("MEOOOOOWWW"));


	while( lifoCats.size() != 0 ){
		Cat &onecat = lifoCats.top();
		//cats.pop();  // it's invalid to have pop here. after popping, object is destroyed but we still have its reference
		onecat.meowing();
		cout << "Stack Popping" << endl;
		lifoCats.pop(); // after pop, object is destroyed
	}


	cout << "*********************QUEUE************************" << endl;

	queue<Cat> fifoCats;
	fifoCats.push(Cat("miv"));
	fifoCats.push(Cat("mev"));
	fifoCats.push(Cat("meov"));
	fifoCats.push(Cat("barf"));


	while(fifoCats.size() != 0){
		Cat &otherCat = fifoCats.front();
		otherCat.meowing();
		cout << "Queue popping" << endl;
		fifoCats.pop();
	}

	return 0;
}
