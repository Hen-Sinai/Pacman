#ifndef _GHOST_H_
#define _GHOST_H_

using namespace std;
#include "Position.h"
#include "io_utils.h"
#include "Directions.h"

class Ghost
{
	Position position; //need to initilize
	const char figure = '$';
	int speed = 1;
	int direction = rand() % 4 + 1;

	// COLOR
public:
	void move();
	//תהיה פונקציה שבודקת התנגשות בקיר ואז מגרילה כיוון ושולחת אל סט דיירשין
	void setPosition(int x, int y)
	{
		position.setPosition(x, y);
	}
	void setDirection(int dir)
	{
		direction = dir;
	}
};
#endif