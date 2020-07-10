//============================================================================
// Name        : multimaps.cpp
// Author      : esme
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <map>
using namespace std;

int main() {

	multimap<string, string> stories;

	stories.insert(make_pair("claude", "has blond hair"));
	stories.insert(make_pair("lena", "hates icecream and life"));
	stories.insert(make_pair("cloud", "is a cloud"));
	stories.insert(make_pair("cloud", "is a pink cloud"));
	stories.insert(make_pair("cloud", "is a blue cloud"));


	for(multimap<string,string>::iterator it = stories.begin(); it != stories.end(); it++){
		cout << it->first << " ->" << it->second << endl;
	}

	for(multimap<string,string>::iterator it = stories.find("cloud"); it != stories.end(); it++){
		cout << it->first << " **** " << it->second << endl;
	}

	//pair<multimap<string,string>::iterator, multimap<string,string>:: iterator> its = stories.equal_range("cloud");
	auto its = stories.equal_range("cloud");

	for(multimap<string,string>::iterator it = its.first; it != its.second; it++){
		cout << it->first << " ~~ " << it->second << endl;
	}

	return 0;
}
