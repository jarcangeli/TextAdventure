#pragma once
#include <map>
#include "CommandResult.h"

typedef CommandResult (*commandType)(void);

class InputParser
{
private:
	static std::map<std::string, commandType> commands;
	static CommandResult* const result;
public:
	static CommandResult parse(std::string input);
};

