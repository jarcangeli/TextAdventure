#include "Object.h"
#include <iostream>

Object::Object(int ind, std::string n, std::string s, std::string l) : index(ind), name(n), sDescription(s), lDescription(l) {}

Object::Object(std::string& line) {
	std::stringstream row(line);
	std::string temp;
	std::getline(row, temp, ',');
	index = std::stoi(temp); // have to convert the object ID from string
	std::getline(row, name, ',');
	std::getline(row, sDescription, ',');
	std::getline(row, lDescription, ',');
}

std::string Object::print() {
	std::string printedObj;
	printedObj.append(std::to_string(index));
	printedObj.append(", "+name+", "+sDescription);
	return printedObj;
}