#ifndef _PACMAN_H_
#define _PACMAN_H_

using namespace std;
#include "Position.h"
#include "io_utils.h"
#include "Directions.h"

class Pacman
{
	Position position{12,40}; //need to initilize
	const char figure = '@';
	int speed = 2;
	int direction = Directions::STAY;

	// COLOR
public:
	void move();
	int getDirection(char key);
	void setDirection(int dir)
	{
		direction = dir;
	}
};
#endif