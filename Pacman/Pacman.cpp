#include "Pacman.h"


void Pacman::move()
{
	for (int i = 1; i <= speed; i++)
	{
		position.draw(' ');
		position.move(direction);
		position.draw(figure);
		//לבדוק התנגשויות
		//לבדוק האם הגענו לקצה ולא קיים קיר בשני הצדדים
	}
}



int Pacman::getDirection(char key)
{
	if (key == 's' || key == 'S')
		return Directions::STAY;
	else if (key == 'w' || key == 'W')
		return Directions::UP;
	else if (key == 'a' || key == 'A')
		return Directions::LEFT;
	else if (key == 'x' || key == 'X')
		return Directions::DOWN;
	else if (key == 'd' || key == 'D')
		return Directions::RIGHT;
	else
		return -1;
}