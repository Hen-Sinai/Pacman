#include "Position.h"

void Position::draw(char ch)
{
	gotoxy(x, y);
	cout << ch << endl;
}

void Position::move(int dir)
{
	switch (dir) {

	case Directions::UP: // UP
		++y;
		break;
	case Directions::DOWN: // DOWN
		--y;
		break;
	case Directions::LEFT: // LEFT
		++x;
		break;
	case Directions::RIGHT: // RIGHT
		--x;
		break;
	}
}