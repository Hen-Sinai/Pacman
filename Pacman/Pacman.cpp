#include "Pacman.h"


void Pacman::move()
{
	position.draw(' ');
	position.move(direction);
	position.draw(figure);
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

bool Pacman::canMove(Board board)
{

	if ((direction == Directions::RIGHT && board.getCharInPosition(position.getY(), position.getX() + 1) == '#') ||
		(direction == Directions::LEFT && board.getCharInPosition(position.getY(), position.getX() - 1) == '#') ||
		(direction == Directions::UP && board.getCharInPosition(position.getY() - 1, position.getX()) == '#') ||
		(direction == Directions::DOWN && board.getCharInPosition(position.getY() + 1, position.getX()) == '#'))
		return false;

	return true;

}