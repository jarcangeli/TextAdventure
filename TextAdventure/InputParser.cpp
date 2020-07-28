#include "InputParser.h"

CommandResult* const InputParser::result = new CommandResult(false, "null command");

CommandResult InputParser::parse(std::string input) {
	auto cmdItr = commands.find(input);
	if (cmdItr != commands.end()) {
		auto command = cmdItr->second;
		*result = command(); 
	}
	else {
		auto missing = commands.find("missing")->second;
		*result = missing();
	}
	return *result;
}

CommandResult test() {
	CommandResult result(true, "Test success!"); 
	return result; // returning by value?
}

CommandResult fail() {
	CommandResult result(false, "Test successfully failed!");
	return result;
}

CommandResult missing() {
	CommandResult result(false, "Command not found");
	return result;
}

std::map <std::string, commandType> InputParser::commands = { {"test", test}, {"fail", fail}, {"missing", missing} };