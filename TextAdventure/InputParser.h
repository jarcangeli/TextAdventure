#pragma once
#include <map>
#include "CommandResult.h"

typedef CommandResult (*commandType)(void);

class InputParser
{
private:
	static std::map<std::string, commandType> commands;
public:
	static CommandResult parse(std::string input);
};

