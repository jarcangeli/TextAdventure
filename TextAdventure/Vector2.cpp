#include "Vector2.h"

Vector2::Vector2() { x = y = 0; }
Vector2::Vector2(int _x, int _y) : x(_x), y(_y) {}

int Vector2::operator[] (int i) {
	switch (i) {
	case 0:
		return x;
	case 1:
		return y;
	default:
		throw "Vector2 index out of bounds";
	}
}