#ifndef _BOARD_H_
#define _BOARD_H_

using namespace std;
#include "io_utils.h"

class Board
{
	enum { COLS = 70, ROWS = 20 };
	char board[ROWS][COLS];
public:
	Board();

	char getCharInPosition(int x, int y) 
	{
		return board[x][y];
	}
	void setBoard(int x, int y, char c)
	{
		board[x][y] = c;
	}
	void printBoard();
	void initBoard();
};

#endif