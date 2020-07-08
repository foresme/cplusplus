//============================================================================
// Name        : files.cpp
// Author      : esme
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
using namespace std;

class binaryFileOperation {
public:
	struct Person{
		int age;
		char name[50];
		int height;
	};

	void writeBinaryFile(){

		Person someone = {10,"mof",134};
		string fileName = "beachhouse.bin";
		fstream outFile;

		outFile.open(fileName, ios::binary|ios::out);

		if(outFile.is_open()){

			outFile.write(reinterpret_cast<char *>(&someone), sizeof(someone));

			outFile.close();
		}
		else {
			cout << "Can't write binary file " << fileName << endl;
		}
	}

	void readBinaryFile(){

		Person someoneElse = {};
		string fileName = "beachhouse.bin";
		ifstream inFile;

		inFile.open(fileName, ios::binary);

		if(inFile.is_open()){

			inFile.read((char *)&someoneElse, sizeof(Person));

			cout << someoneElse.age << " " << someoneElse.name << " " << someoneElse.height << endl;

			inFile.close();
		}
		else {
			cout << "Can't read binary file " << fileName << endl;
		}
	}
};


class ParseReading {
public:
	void parsingMasterofNone(string fileName){

		ifstream inFile;

		inFile.open(fileName);

		if(!inFile.is_open()){
			cout << "Can't open file " << fileName << endl;
			return;
		}

		while(inFile){

			string line;

			getline(inFile, line, ':');

			int n;
			inFile >> n;

			inFile >> ws; // whitespace characters are ignored this way

			if(!inFile)
				break;

			cout << line << " - " << n << endl;

		}

		inFile.close();
	}
};


class ReadingFile {
public:
	void readMasterofNone(string fileName){

		ifstream inFile;
		inFile.open(fileName);

		if(inFile.is_open()){

			string line;

			//inFile >> line;  // reads only a word
			//getline(inFile, line); // reads only a line

			while(inFile){ // while(!inFile.eof())
				getline(inFile, line);
				cout << line << endl;
			}

			inFile.close();
		}
		else {
			cout << "Couldn't read file " << fileName << endl;
		}

	}
};

int main() {

	ofstream outFile;
	//fstream outFile;

	string fileName = "masterOfnone.txt";

	outFile.open(fileName);
	//outFile.open(fileName, ios::out);

	if(outFile.is_open()){
		outFile << "jack of all trades" << endl;
		outFile << "master of none" << endl;
		outFile << "you always go to the parties: " << 100 << endl;
		outFile << "on your own: " << 1 << endl;
		outFile.close();
	}
	else {
		cout << "Could not create file " << fileName << endl;
	}

/////////////////////////////////////////////////// reading a file

/*
	ReadingFile fileread;
	fileread.readMasterofNone(fileName);
*/

////////////////////////////////////////////////// parsing a file

/*	ParseReading parser;
	parser.parsingMasterofNone(fileName);*/

///////////////////////////////////////////////// read and write binary

	binaryFileOperation binFileOp;
	binFileOp.writeBinaryFile();
	binFileOp.readBinaryFile();

	return 0;
}
