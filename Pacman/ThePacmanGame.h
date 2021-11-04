#ifndef _THEPACMANGAME_H_
#define _THEPACMANGAME_H_

#include <iostream>
#include "io_utils.h"
#include "Pacman.h"
#include "Wall.h"
#include "Ghost.h"
#include "BreadCrumbs.h"

class ThePacmanGame {
	enum { ESC = 27 };
	Pacman pacman;
	Ghost ghosts[2];
	Wall walls[200];
	BreadCrumb breadCrumbs[100];
	int lives = 3, points = 0;


public:
	void init();
	void run();
};

#endif