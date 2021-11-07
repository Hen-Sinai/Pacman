#include "ThePacmanGame.h"

void ThePacmanGame::printData()
{
	gotoxy(0, 22);
	cout << "Number Of Lives: " << pacman.getLives() << "\t\t\t\tNumber Of Points: " << points << endl;
}

void ThePacmanGame::managePacmanMove(int dir)
{
	if (dir != 0)
	{
		if (!pacman.canMove(board))
			pacman.setDirection(Directions::STAY);
		else
			pacman.move();

	}
}

void ThePacmanGame::moveGhosts()
{
	while (!ghosts[0].canMove(board)) {
		ghosts[0].setDirection(rand() % 4 + 1);
	}
	while (!ghosts[1].canMove(board)) {
		ghosts[1].setDirection(rand() % 4 + 1);
	}
	ghosts[0].move(board);
	ghosts[1].move(board);
	ghostMove++;
	if (ghostMove == 20)
	{
		ghostMove = 0;
		ghosts[0].setDirection(rand() % 4 + 1);
		ghosts[1].setDirection(rand() % 4 + 1);
	}
}

void ThePacmanGame::pacmanHitGhost()
{
	if ((pacman.getY() == ghosts[0].getY() && pacman.getX() == ghosts[0].getX()) ||
		(pacman.getY() == ghosts[1].getY() && pacman.getX() == ghosts[1].getX()))
	{
		initPositions();
		pacman.setLives(pacman.getLives() - 1);
	}
}

void ThePacmanGame::pacmanHitBreadCrumb()
{
	if (board.getBoard()[pacman.getY()][pacman.getX()] == '*')
	{
		points++;
		board.setBoard(pacman.getY(), pacman.getX(), ' ');
	}
}

//ADDED
void ThePacmanGame::init()
{
	board.initBoard(); // upside down... x and y
	initPositions();
}

void ThePacmanGame::initPositions() {
	board.printBoard();
	ghosts[0].setPosition(1, 5);
	ghosts[1].setPosition(55, 15);
	pacman.setPosition(35, 10);
	pacman.getPosition().draw('@');
	pacman.setDirection(Directions::STAY);
	printData();
}

void ThePacmanGame::initPacmanData()
{
	pacman.setLives(3);
	points = 0;
	ghostMove = 0;
}


void ThePacmanGame::run()
{
	char key = 0;
	int dir = 0;
	while (pacman.getLives() > 0 && points != 1223)
	{
		if (_kbhit())
		{
			key = _getch();
			if (key != ESC) {
				dir = pacman.getDirection(key);
				if (dir != -1)
					pacman.setDirection(dir);
				gotoxy(0, 20);
				cout << "                                                        " << endl;
			}
			else
			{
				gotoxy(0, 20);
				cout << "-------------------- Game Paused ---------------------" << endl;
			}
		}
		if (key != ESC)
		{
			managePacmanMove(dir);
			
			moveGhosts();
			ghostMove++;
			if (ghostMove == 20)
			{
				ghostMove = 0;
				ghosts[0].setDirection(rand() % 4 + 1);
				ghosts[1].setDirection(rand() % 4 + 1);
			}
			//pacman Vs ghosts - remove lives
			pacmanHitGhost();

			//pacman vs BreadCrumbs
			pacmanHitBreadCrumb();

			//FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFff
			managePacmanMove(dir);

			//pacman Vs ghosts - remove lives
			pacmanHitGhost();

			//pacman vs BreadCrumbs
			pacmanHitBreadCrumb();

			//FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFff
			printData();
		}
		Sleep(100);
	}

	if (pacman.getLives() == 0)
	{
		gotoxy(0, 20);
		cout << "FUCK YOU LOSER!!!" << endl;
		system("pause");
		clear_screen();
	}
	else if (points == 1223)
	{
		gotoxy(0, 20);
		cout << "YEHHHHH KINGGGGGGG!!!" << endl;
		system("pause");
		clear_screen();
	}
}