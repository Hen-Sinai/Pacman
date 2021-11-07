#include "Ghost.h"


void Ghost::move(Board board)
{
	if (board.getBoard()[position.getY()][position.getX()] == '*')
		position.draw('*');
	else
		position.draw(' ');
	position.move(direction);
	position.draw(figure);
}

bool Ghost::canMove(Board board)
{
	if ((direction == Directions::RIGHT && board.getBoard()[position.getY()][position.getX() + 1] == '#') ||
		(direction == Directions::LEFT && board.getBoard()[position.getY()][position.getX() - 1] == '#') ||
		(direction == Directions::UP && board.getBoard()[position.getY() - 1][position.getX()] == '#') ||
		(direction == Directions::DOWN && board.getBoard()[position.getY() + 1][position.getX()] == '#'))
		return false;

	return true;
}