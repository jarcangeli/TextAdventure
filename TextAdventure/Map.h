#pragma once
#include<vector>
#include "Tile.h"

class Map {
protected:
	int xL, yL;
	std::vector<std::vector<Tile>> tiles;

public:
	Map(unsigned int x, unsigned int y);
	void PrintSize();
	void PrintBaseMap();
	void PrintMap(std::vector<Tile> objects);

	bool SetTile(Tile tile);
	bool SetTile(unsigned int x, unsigned int y, const char& t);
};

