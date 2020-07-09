/*
 * myExceptions.cpp
 *
 *  Created on: Jul 7, 2020
 *      Author: esme
 */

#include <iostream>
#include <exception>
using namespace std;

class MyException : public exception{
public:
	virtual const char* what() const throw(){
		return "my custom exception";
	}
};
