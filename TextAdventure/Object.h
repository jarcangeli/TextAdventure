#pragma once
#include<string>
#include<sstream>

struct Object
{
	int index;
	std::string name;
	std::string sDescription;
	std::string lDescription;

	Object(int ind, std::string n, std::string s, std::string l);
	Object(std::string& row);

	std::string print();
};

