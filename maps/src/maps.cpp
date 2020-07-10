//============================================================================
// Name        : maps.cpp
// Author      : esme
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <map>

using namespace std;

class Person{
public:
	string name;
	int age;

	// while using maps with objects, it's necessary to create empty(parameterless) constructors
	// maps first create the empty object then copy the values
	Person(): name(""), age(0) {
		cout << "Constructor" << endl;
	}

	Person(string name, int age){
		cout << name << " constuctor" << endl;
		this->age = age;
		this->name = name;
	}

	// while copying, by default C++ might create a shallow copy
	// overloaded copy const
	Person(const Person &other){
		cout << other.name << " copying" << endl;
		this->age = other.age;
		this->name = other.name;
	}

	void print() const{
		cout << name << ": " << age << endl;
	}

	// if we want to use an object as map's key, it has to overload less than operator
	// map needs to compare objects to sequence them while saving
	// function is const because it shouldn't make any changes to this person
	// other person is const because it shouldn't make changes to other person
	bool operator<(const Person &other) const {

		if(this->name == other.name){
			return this->name < other.name;
		}

		return this->age < other.age;

	}

};

int main() {

	map<string,int> ages;

	ages["Sokka"] = 16;
	ages["Aang"] = 14;
	ages["Katara"] = 15;

	map<string,int>::iterator it = ages.begin();
	cout << it->first << " : " << it->second << endl;

	pair<string,int> avatar = *it;
	cout << avatar.first << " : " << avatar.second << endl;

	if(ages.find("Katara") != ages.end()){
		cout << "Katara is here" << endl;
	}
	else {
		cout << "Katara is not here" << endl;
	}

	ages.insert(make_pair("Zuko", 17));

	for(it = ages.begin(); it != ages.end(); it++){
		pair<string,int> each = *it;
		//pair<string,int> each = make_pair(it->first, it->second);

		cout << each.first << " - " << each.second << endl;
	}

	map<int, Person> people;
	people[1] = Person("Suki", 16);
	people[6] = Person("Azula", 16); // map uses empty constructor create its pair, that's why two constructors are called

	/* There are no less than three copy constructor calls.
	 *One is is when the Person object is passed to make_pair,
	 *One because make_pair takes its arguments by value, one is when
	 *One make_pair returns its pair object, which it does by value again and the
	 *One final one is made by insert(), as described above.
	*/
	people.insert(make_pair( 50, Person("Iroh",50) )); // copies the person

	for(map<int,Person>::iterator pit = people.begin(); pit != people.end(); pit++){
		pit->second.print();
	}

	map<Person, string> elements;
	elements[Person("Aang", 14)] = "air";
	elements[Person("Katara", 15)] = "water";
	elements[Person("Sokka", 16)] = "boomerang";
	elements[Person("Aang", 17)] = "air water earth fire";

	for(map<Person,string>::iterator eit = elements.begin(); eit != elements.end(); eit++){
		cout <<eit->first.name << " " << eit->first.age << " " << eit->second << endl;
	}

	return 0;
}
