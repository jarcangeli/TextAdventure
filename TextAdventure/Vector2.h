#pragma once

struct Vector2
{
	// Vector of two ints
	int x, y;

	Vector2();
	Vector2(int _x, int _y);

	int operator[] (int i);
};

