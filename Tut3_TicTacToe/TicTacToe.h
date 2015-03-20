#ifndef TicTacToe_H
#define TicTacToe_H
#include<iostream>

// class and its member's declaration
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
	TicTacToe();       // constructor
	~TicTacToe();      // destructor
};
#endif