#pragma once
#include<string>
#include<vector>
#include<fstream>
#include<sstream>

class CSVReader
{
private:
    std::string address;
    std::ifstream stream;
    std::vector<std::string> headers;

public:
    CSVReader(std::string newAdress);

    std::string nextLine();

};

