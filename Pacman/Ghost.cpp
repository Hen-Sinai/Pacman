#include "Ghost.h"


void Ghost::move(Board board)
{
	if (board.getCharInPosition(position.getY(), position.getX())== '*')
		position.draw('*');
	else
		position.draw(' ');
	position.move(direction);
	position.draw(figure);
}

bool Ghost::canMove(Board board)
{
	if ((direction == Directions::RIGHT && board.getCharInPosition(position.getY(), position.getX() + 1) == '#') ||
		(direction == Directions::LEFT && board.getCharInPosition(position.getY(), position.getX() - 1) == '#') ||
		(direction == Directions::UP && board.getCharInPosition(position.getY() - 1, position.getX()) == '#') ||
		(direction == Directions::DOWN && board.getCharInPosition(position.getY() + 1, position.getX()) == '#'))
		return false;

	return true;
}