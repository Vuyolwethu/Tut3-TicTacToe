#ifndef TicTacToe_H
#define TicTacToe_H
#include<iostream>
//char Board[3][3];

class TicTacToe
{
private:

public:
	void Move1(int);
	void Move2(int);
	void printBoard();
	bool Draw();
	void Reset();
	void Input();
	void changePlayer();
	char checkWinner();
	TicTacToe();       // destructor
	~TicTacToe();      // constructor
};
#endif