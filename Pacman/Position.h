#ifndef _POSITION_H_
#define _POSITION_H_

using namespace std;
#include "io_utils.h"
#include "Directions.h"

class Position
{
	int x, y;
public:
	Position(int _x = 1, int _y = 1) : x(_x), y(_y) {}

	void setPosition(int _x, int _y)
	{
		x = _x;
		y = _y;
	}
	void draw(char ch);
	void move(int direction);

	//ADDED
	int getX()
	{
		return x;
	}
	int getY()
	{
		return y;
	}

};

#endif