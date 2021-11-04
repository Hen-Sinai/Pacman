#ifndef _WALL_H_
#define _WALL_H_

using namespace std;
#include "Position.h"
#include "io_utils.h"

class Wall
{
	Position position; //need to initilize
	const char figure = '#';

	// COLOR
public:
	void setPosition(int x, int y)
	{
		position.setPosition(x, y);
	}
};
#endif
