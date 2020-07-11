//============================================================================
// Name        : sorting.cpp
// Author      : esme
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <deque>
using namespace std;

class Person{
	int age;
	string name;

public:
	Person(int age, string name): age(age), name(name) {
		cout << "constructor" << endl;
	}

	~Person(){
		cout << "destroyed" << endl;
	}
/*

	bool operator<(const Person &other) const{
		return name < other.name;
	}
*/

	void print(){
		cout << name << " " << age << endl;
	}

	friend bool comp(const Person &a,  const Person &b);
};

bool comp(const Person &a,  const Person &b){
	return a.name < b.name;
}

int main() {

	vector<Person> people;

	people.push_back(Person(22, "Alex"));
	people.push_back(Person(34, "Theo"));
	people.push_back(Person(59, "Adam"));

	sort(people.begin(), people.end(), comp);

	for(vector<Person>::iterator it = people.begin(); it != people.end(); it++){
		it->print();
	}

	deque<Person> line;
	line.push_front(Person(22,"Trevor"));
	line.push_back(Person(44, "Sarah"));
	line.push_front(Person(44, "Xdd"));
	line.push_front(Person(22, "DDDx"));

	while(line.size() > 0){
		Person on = line.front();
		Person back = line.back();
		on.print();
		back.print();
		line.pop_front();
		cout << endl;
	}


	return 0;
}
