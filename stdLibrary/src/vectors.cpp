/*
 * vectors.cpp
 *
 *  Created on: Jul 8, 2020
 *      Author: esme
 */

#include <iostream>
#include <vector>
using namespace std;


class Vectors{
public:
	Vectors(){
		//vector<string> strings(5);

		vector<string> strings;

		strings.push_back("cat");
		strings.push_back("rabbit");
		strings.push_back("bear");

	/*	strings[3] = "dog";
		cout << " -" << strings[3] << "- " << endl;*/

		for(vector<string>::iterator it = strings.begin(); it != strings.end(); it++){
			cout << *it << endl;
		}

	}

	/* capacity increases exponentially and different from the size
	 *
	 */
	void vectorMemory(){

		vector<int> numbers(10);
		cout << "initial" << endl;
		cout << numbers.size() << endl;
		cout << numbers.capacity() << endl;

		// after push capacity is exponentially increased
		numbers.push_back(12);
		cout << "after push" << endl;
		cout << numbers.size() << endl;
		cout << numbers.capacity() << endl;

		// resize shrinks the size, capacity stays as large
		numbers.resize(2);
		cout << "after resize 2" << endl;
		cout << numbers.size() << endl;
		cout << numbers.capacity() << endl;

		// reserve only changes the capacity
		numbers.reserve(35);
		cout << "after reserve 35" << endl;
		cout << numbers.size() << endl;
		cout << numbers.capacity() << endl;

		numbers.reserve(45);
		cout << "after reserve 45" << endl;
		cout << numbers.size() << endl;
		cout << numbers.capacity() << endl;

		// resize increases the size and therefore the capacity(exponentially) if necessary
		numbers.resize(45);
		cout << "after resize 45" << endl;
		cout << numbers.size() << endl;
		cout << numbers.capacity() << endl;

		numbers.resize(55);
		cout << "after resize 55" << endl;
		cout << numbers.size() << endl;
		cout << numbers.capacity() << endl;

		// shrinking reserve doesn't change size of capacity
		numbers.reserve(35);
		cout << "after reserve 35" << endl;
		cout << numbers.size() << endl;
		cout << numbers.capacity() << endl;

		// clears the size but capacity is unchanged
		numbers.clear();
		cout << "after clear" << endl;
		cout << numbers.size() << endl;
		cout << numbers.capacity() << endl;
	}
};


