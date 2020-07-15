/*
 * objectSlice.cpp
 *
 *  Created on: Jul 15, 2020
 *      Author: esme
 */

/*
 * Constructors are not inherited
 * Each const of superclass is also run before subclasses's const
 * It's required to specify which superconstructor to run
 */

#include <iostream>
using namespace std;

class House {
	int price;
	int floors;

public:

	House(): price(250), floors(2) {}
	House(int price, int floors): price(price), floors(floors) {}
	void printFloors(){
		cout << floors << endl;
	}

	void printPrice(){
		cout << price << endl;
	}

	void virtual print(){
		cout << "it's a house" << endl;
	}

	virtual ~House() {

	}
};


class smallHouse: public House {
	string name;
public:
	smallHouse(int price, int floors): House(price, floors), name("small") {}
	smallHouse(): name("small") {};

	void printName() {
		cout << name << "- Price: "  << flush;
		printPrice();
	}

	void print(){
		cout << "It's a small house" << endl;
	}
};

int main(){
	House house;
	smallHouse smallhouse;

	house.printFloors();
	house.printPrice();

	House expHouse(500, 3);
	smallHouse sHouse(500,4);

	expHouse.printFloors();
	sHouse.printPrice();
	sHouse.printName();

	// object slicing
	// with reference home, sHouse no longer has its name
	House &home = sHouse;
	home.printFloors();
	sHouse.printFloors();
	sHouse.print();
	home.print(); // because print is a virtual func, it prints the subclass version

}
