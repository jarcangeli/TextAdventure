#include "Tile.h"
#include<iostream>

Tile::Tile() { text = 'x'; }
Tile::Tile(char t) : text(t) {}
Tile::Tile(char t, int x, int y) : text(t), position(x, y) {}
Tile::Tile(char t, Vector2 xy) : text(t), position(xy) {}

const char& Tile::GetText() {
	return text;
}

void Tile::SetText(const char& newText) {
	text = newText;
}

void Tile::SetPosition(Vector2 newPos) {
	position = newPos;
}
Vector2 Tile::GetPosition() {
	return position;
}