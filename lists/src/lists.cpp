//============================================================================
// Name        : lists.cpp
// Author      : esme
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
// Lists are very similar to vectors but there are differences.
// Vectors have blocks of memory therefore restricted to push_back(inserting to the end), easier to traverse
// Lists are nodes pointing each other therefore easy to insert in the middle, harder to traverse


#include <iostream>
#include <list>
using namespace std;

int main() {

	list<int> numbers;

	numbers.push_back(10);
	numbers.push_back(20);
	numbers.push_back(30);

	list<int>::iterator it = numbers.begin();
	numbers.insert(it,5);
	it++;
	numbers.insert(it,25);

	for(it=numbers.begin(); it != numbers.end(); it++ ){
		cout << "Element: " << *it << endl;
	}

	list<int>::iterator eraseIt = numbers.begin();
	it = eraseIt;

	cout << "eraseIt: " << *eraseIt << endl;
	eraseIt = numbers.erase(eraseIt); // if it's not assigned, iterator points to a deleted node causes bugs
	cout << "eit: " << *eraseIt << " it: " << *(it++) << endl; // it iterator is lost, can't work properly



	return 0;
}
