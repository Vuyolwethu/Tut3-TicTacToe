#include "TicTacToe.h"
#include <iostream>
using namespace std;

char Board[3][3] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };
char player = 'X';
int n;
// constructor
TicTacToe::TicTacToe()
{
}
//destructor
TicTacToe::~TicTacToe()
{

}
// function that gives the current position on the board
void TicTacToe::printBoard()
{
	for (int row = 0; row < 3; row++)
	{
		for (int col = 0; col < 3; col++)
			cout << Board[row][col] << " ";
	}
	cout << endl;
}

void TicTacToe::Input()
{
	int move;
	cout << "Enter the number you want to play on:";
	cin >> move;
	//inserting either X or O for player 1 and 2
	if (move == 1)
	{
		if (Board[0][0] = '1')
			Board[0][0] = player;
		else
		{
			cout << "There is already an input at that position";
			Input();
		}
	}

	else if (move == 2)
	{
		if (Board[0][0] = '2')
			Board[0][1] = player;
		else
		{
			cout << "There is already an input at that position";
			Input();
		}
	}

	else if (move == 3)
	{
		if (Board[0][0] = '3')
			Board[0][2] = player;
		else
		{
			cout << "There is already an input at that position";
			Input();
		}
	}

	else if (move == 4)
	{
		if (Board[0][0] = '4')
			Board[1][0] = player;
		else
		{
			cout << "There is already an input at that position";
			Input();
		}
	}

	else if (move == 5)
	{
		if (Board[0][0] = '5')
			Board[1][1] = player;
		else
		{
			cout << "There is already an input at that position";
			Input();
		}
	}

	else if (move == 6)
	{
		if (Board[0][0] = '6')
			Board[1][2] = player;
		else
		{
			cout << "There is already an input at that position";
			Input();
		}
	}

	else if (move == 7)
	{
		if (Board[0][0] = '7')
			Board[2][0] = player;
		else
		{
			cout << "There is already an input at that position";
			Input();
		}
	}

	else if (move == 8)
	{
		if (Board[0][0] = '8')
			Board[2][1] = player;
		else
		{
			cout << "There is already an input at that position";
			Input();
		}
	}

	else if (move == 9)
	{
		if (Board[0][0] = '9')
			Board[2][2] = player;
		else
		{
			cout << "There is already an input at that position";
			Input();
		}
	}
}

void TicTacToe::changePlayer()
{
	if (player == 'X')

		player = 'O';

	else player = 'X';

}

char TicTacToe::checkWinner()
{
	//checking if the rows are equal for player 1
	if (Board[0][0] == 'X' && Board[0][1] == 'X' && Board[0][2] == 'X')
		return 'X';
	if (Board[1][0] == 'X' && Board[1][1] == 'X' && Board[1][2] == 'X')
		return 'X';
	if (Board[2][0] == 'X' && Board[2][1] == 'X' && Board[2][2] == 'X')
		return 'X';

	//checking if the columns are equal for player 1
	if (Board[0][0] == 'X' && Board[1][0] == 'X' && Board[2][0] == 'X')
		return 'X';
	if (Board[0][1] == 'X' && Board[1][1] == 'X' && Board[2][1] == 'X')
		return 'X';
	if (Board[0][2] == 'X' && Board[1][2] == 'X' && Board[2][2] == 'X')
		return 'X';

	//checking if the daigonals are equal for player 1
	if (Board[0][0] == 'X' && Board[1][1] == 'X' && Board[2][2] == 'X')
		return 'X';
	if (Board[2][0] == 'X' && Board[1][1] == 'X' && Board[0][2] == 'X')
		return 'X';



	//checking if the rows are equal for player 2
	if (Board[0][0] == 'O' && Board[0][1] == 'O' && Board[0][2] == 'O')
		return 'O';
	if (Board[1][0] == 'O' && Board[1][1] == 'O' && Board[1][2] == 'O')
		return 'O';
	if (Board[2][0] == 'O' && Board[2][1] == 'O' && Board[2][2] == 'O')
		return 'O';

	//checking if the columns are equal for player 2
	if (Board[0][0] == 'O' && Board[1][0] == 'O' && Board[2][0] == 'O')
		return 'O';
	if (Board[0][1] == 'O' && Board[1][1] == 'O' && Board[2][1] == 'O')
		return 'O';
	if (Board[0][2] == 'O' && Board[1][2] == 'O' && Board[2][2] == 'O')
		return 'O';

	//checking if the daigonals are equal for player 2
	if (Board[0][0] == 'O' && Board[1][1] == 'O' && Board[2][2] == 'O')
		return 'O';
	if (Board[2][0] == 'O' && Board[1][1] == 'O' && Board[0][2] == 'O')
		return 'O';
	return '/';

}