#include "ThePacmanGame.h"

void ThePacmanGame::init()
{
	cout << "Number Of Lives: " << lives << endl;
	cout << "Number Of Points: " << points << endl;
	ghosts[0].setPosition(1, 1);
	ghosts[1].setPosition(1, 1);



}

void ThePacmanGame::run()
{
	char key = 0;
	int dir = 0;
	while (lives > 0)
	{
		if (_kbhit())
		{
			key = _getch();
			if (key != ESC) {
				dir = pacman.getDirection(key);
				if (dir != -1)
					pacman.setDirection(dir);
			}
			
		}
		if (key != ESC)
		{
			if (dir != 0)
			{
				pacman.move();
				ghosts[0].move();
				ghosts[1].move();
			}
			else
			{
				ghosts[0].move();
				ghosts[1].move();
			}
		}
		Sleep(200);
	}




}