#pragma once
#include <string>

struct CommandResult
{
	bool success;
	std::string message;

	CommandResult(bool s, std::string m) : success(s), message(m) {};
};

