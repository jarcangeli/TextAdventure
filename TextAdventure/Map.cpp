#include "Map.h"
#include<vector>
#include<iostream>

Map::Map(unsigned int y, unsigned int x) : yL(y), xL(x) {
	for (int i = 0; i < yL; ++i) {
		std::vector<Tile> row;
		for (int j = 0; j < xL; ++j) {
			Tile tile;
			row.push_back(tile);
		}
		tiles.push_back(row);
	}
}

void Map::PrintSize() {
	std::cout << yL << " rows, " << xL << " columns" << std::endl;
}

void Map::PrintBaseMap() {
	std::cout << std::endl;
	for (auto rowItr = tiles.begin(); rowItr != tiles.end(); ++rowItr) {
		for (auto tileItr = rowItr->begin(); tileItr != rowItr->end(); ++tileItr) {
			std::cout << tileItr->GetText();
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
}
void Map::PrintMap(std::vector<Tile> objects) {
	Map displayMap(yL, xL);
	displayMap.tiles = tiles;

	for (auto obj : objects) {
		displayMap.SetTile(obj);
	}
	displayMap.PrintBaseMap();
}

bool Map::SetTile(unsigned int x, unsigned int y, const char& t) {
	if (y < tiles.size()) {
		std::vector<Tile>& row = tiles[y];
		if (x < row.size()) {
			row[x].SetText(t);
			return true;
		}
	}
	return false;
}
bool Map::SetTile(Tile tile) {
	return Map::SetTile(tile.GetPosition().x, tile.GetPosition().y, tile.GetText());
}