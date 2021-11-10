#ifndef _THEPACMANGAME_H_
#define _THEPACMANGAME_H_

#include <iostream>
#include "io_utils.h"
#include "Pacman.h"
#include "Wall.h"
#include "Ghost.h"
#include "BreadCrumbs.h"
#include "Board.h"

class ThePacmanGame {
	enum { ESC = 27 };
	Pacman pacman;
	Ghost ghosts[2];
	Board board;
	int lives, points, ghostMove;
	bool paused = false;

public:
	void init();
	void initPositions();
	void initPacmanData();
	void run();
	void printData();
	void managePacmanMove(int dir);
	void moveGhosts();
	void pacmanHitGhost();
	void pacmanHitBreadCrumb();
};

#endif
