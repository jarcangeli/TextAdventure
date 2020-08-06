#include "CSVReader.h"
#include<iostream>

CSVReader::CSVReader(std::string inFile) : address(inFile), stream(inFile) {};

std::string CSVReader::nextLine() {
	std::vector<std::string> splitLine;

	std::string line;
	std::getline(stream, line);

	return line;
}
