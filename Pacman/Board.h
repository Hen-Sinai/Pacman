#ifndef _BOARD_H_
#define _BOARD_H_

using namespace std;
#include "io_utils.h"

class Board
{
	const int ROWS = 20;
	const int COLS = 70;
	char** board;
public:
	Board() {
		board = new char* [ROWS];

		for (int h = 0; h < ROWS; h++)
			board[h] = new char[COLS];
	}

	char** getBoard()
	{
		return board;
	}
	void setBoard(int x, int y, char c)
	{
		board[x][y] = c;
	}
	void printBoard();
	void initBoard();

	Board() {
		board = new char* [ROWS];

		for (int h = 0; h < ROWS; h++)
			board[h] = new char[COLS];
	}
};

#endif