#include <iostream>
using namespace std;

#include "ThePacmanGame.h"

void main()
{
	ThePacmanGame game;
	int chose;
	do {
		cout << "Please select one of the options bellow:" << endl;
		cout << "(1) Start a new game\n(8) Present instructions and keys\n(9) EXIT" << endl;

		cin >> chose;

		if (chose == 1)
		{
			clear_screen();
			game.init();
			game.run();


		}


		else if (chose == 8)
		{

			cout << "The game instructions Are:" << endl << "Playing Pacman is easy to learn and hard to master (like all classic games)." << endl;
			cout << "Simply score as many points as you can eating the small _____ all around the maze, and avoid the ghosts." << endl;
			cout << "The game keys Are:" << endl;
			cout << "w - Up\nd - Right\nx - Down, a - Left\ns - Stay" << endl;
		}
		else
		{
			cout << "You entered a wrong number." << endl;
		}
	} while (chose != 9);

}