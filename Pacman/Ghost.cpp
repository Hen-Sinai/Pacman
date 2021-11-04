#include "Ghost.h"


void Ghost::move()
{
	for (int i = 1; i <= speed; i++)
	{
		position.draw(' ');
		position.move(direction);
		position.draw(figure);
		//לבדוק התנגשויות
	}
}