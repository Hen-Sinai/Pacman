#include "Pacman.h"


void Pacman::move()
{
	//for (int i = 1; i <= speed; i++)
	{
		position.draw(' ');
		position.move(direction);
		position.draw(figure);
		//Sleep(500);
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

bool Pacman::canMove(Board board)
{

	if ((direction == Directions::RIGHT && board.getBoard()[position.getY()][position.getX() + 1] == '#') ||
		(direction == Directions::LEFT && board.getBoard()[position.getY()][position.getX() - 1] == '#') ||
		(direction == Directions::UP && board.getBoard()[position.getY() - 1][position.getX()] == '#') ||
		(direction == Directions::DOWN && board.getBoard()[position.getY() + 1][position.getX()] == '#'))
		return false;

	return true;

}