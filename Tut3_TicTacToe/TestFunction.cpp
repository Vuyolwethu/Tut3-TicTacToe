#include<iostream>
#include "TicTacToe.h"
using namespace std;

int main()
{
	TicTacToe tictactoe;
	int n = 0;
	n++;
	tictactoe.printBoard();
	// loop that runs provided it is true
	while (1)
	{
		tictactoe.Input();
		tictactoe.printBoard();
		if (tictactoe.checkWinner() == 'X')
		{
			cout << "X Wins!" << endl;
			break;
		}
		else if (tictactoe.checkWinner() == 'O')
		{
			cout << "O Wins!" << endl;
			break;
		}
		else if (tictactoe.checkWinner() == '/' && n == 9)
		{
			cout << "The game was a draw." << endl;
			break;
		}
		tictactoe.changePlayer();
	}

	system("pause");
	return 0;

}