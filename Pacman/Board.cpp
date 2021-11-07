#include "Board.h"

void Board::printBoard()
{
	gotoxy(0, 0);
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
			cout << board[i][j];

		cout << endl;

	}

}

void Board::initBoard()
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (i == 0 || i == 19 || j == 0 || j == 69)
				board[i][j] = '#';
			/*
			else if (i == 4 && (j >= 4 && j <= 25))
				board[i][j] = '#';
			*/
			else if (i == 10 && j == 35)
				board[i][j] = ' ';

			else
				board[i][j] = '*';
		}

	}

}