/*
 * templates.cpp
 *
 *  Created on: Jul 14, 2020
 *      Author: esme
 */
/*
The compiler will only instantiate a template class when the program creates an instance of
that class. In order to do this, it must be able to see the definition of the template, so it
can do the type replacement.

The easiest way to do this is to give a full definition of the class, including its member
functions, in the header file. Alternatively, if a template class is only needed in
a .cpp file, it can be defined there instead

template <class identifier> function_declaration;
template <typename identifier> function_declaration;

*/

#include <iostream>
using namespace std;

template <class T>
class nonBinaryThings {
	T material;
	int shape;
public:
	nonBinaryThings(): material(), shape(0) {}
	nonBinaryThings(T material): material(material), shape(0) {}

	void print(int shape){
		if(shape == 0){
			cout << "------" << material <<"-------" << endl;
		}
		else if(shape == 1){
			cout << "******" << material << "******" << endl;
		}
		else {
			cout << "~~~~~~~" << material << "~~~~~~~" << endl;
		}
	}
};

template <>
class nonBinaryThings<char> {
	char material;
	int shape;
public:
	nonBinaryThings(char material): material(material), shape(2) {}

	void print(int shape){
		if(shape == 0){
			cout << "------" << material <<"-------" << endl;
		}
		else if(shape == 1){
			cout << "******" << material << "******" << endl;
		}
		else {
			cout << "~~~~~~~" << material << "~~~~~~~" << endl;
		}
	}
};


template <typename U>
void show(U material){
	cout << material << endl;
}

void show(int material){
	cout << "-" << material << "-" << endl;
}

int main(){
	nonBinaryThings<string> nonbinary("ele");
	nonbinary.print(1);

	nonBinaryThings<int> nonbinar(5);
	nonbinar.print(0);

	nonBinaryThings<double> nonbina(5.4);
	nonbina.print(4);

	nonBinaryThings<char> nonbi('a');
	nonbi.print(2);

	show<string>("ele");
	show(7);
	show<int>(7);

}



