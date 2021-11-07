#ifndef _PACMAN_H_
#define _PACMAN_H_

using namespace std;
#include "Position.h"
#include "io_utils.h"
#include "Directions.h"
#include "Board.h"

class Pacman
{
	Position position{ 35,10 };
	const char figure = '@';
	int speed = 2;
	int direction = Directions::STAY;
	int lives = 3;
	// COLOR
public:
	void move();
	int getDirection(char key);
	void setDirection(int dir)
	{
		direction = dir;
	}

	void setPosition(int x, int y)
	{
		position.setPosition(x, y);
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
	int getLives()
	{
		return lives;
	}
	void setLives(int newLives)
	{
		lives = newLives;
	}
	bool canMove(Board board);

	Position getPosition()
	{
		return position;
	}
};
#endif