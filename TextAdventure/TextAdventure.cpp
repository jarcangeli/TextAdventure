// TextAdventure.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Map.h"
#include <map>
#include "InputParser.h"

bool test() {
    std::cout << "Test success!" << std::endl;
    return true;
}

bool badTest() {
    return false;
}

int main()
{
    // set up map
    int xL = 4, yL = 4;
    Map map(xL, yL);
    map.PrintSize();

    // set up player and map objects
    std::vector<Tile> objects;
    Tile player('@', 1, 1);
    objects.push_back(player);

    map.PrintMap(objects);

    // read player inputs
    std::string input;
    while (true) {
        std::cin >> input;

        CommandResult result = InputParser::parse(input);
        std::cout << result.message << std::endl;

        map.PrintMap(objects);
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
