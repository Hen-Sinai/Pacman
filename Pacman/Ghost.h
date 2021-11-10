#ifndef _GHOST_H_
#define _GHOST_H_

using namespace std;
#include "Position.h"
#include "io_utils.h"
#include "Directions.h"
#include "Board.h"

class Ghost
{
	Position position; //need to initilize
	char figure = '$';
	int direction = rand() % 4 + 1;

	// COLOR
public:
	void move(Board board);
	void setPosition(int x, int y)
	{
		position.setPosition(x, y);
	}
	void setDirection(int dir)
	{
		direction = dir;
	}
	//ADDED
	int getX()
	{
		return position.getX();
	}
	int getY()
	{
		return position.getY();
	}
	bool canMove(Board board);

	Position getPosition()
	{
		return position;
	}

};
#endif