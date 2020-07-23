#pragma once
#include "Vector2.h"

class Tile
{
private:
	char text;
	Vector2 position;
public:
	Tile();
	Tile(char t);
	Tile(char t, int x, int y);
	Tile(char t, Vector2 xy);

	const char& GetText(); // consider changing to smart pointer
	void SetText(const char& newText);
	void SetPosition(Vector2 newPos);
	Vector2 GetPosition();
};

