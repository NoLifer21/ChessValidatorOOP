#include "King.h"
#include"Input.h"
#include "Board.h"
#include<iostream>
using namespace std;

void King::IsMoveValid()
{
	Board::Colors colors;
	if (abs(toX - fromX) <= 1 && abs(toY - fromY) <= 1)
	{
		board.board[input.toX][input.toY] = board.board[input.fromX][input.fromY];
		board.board[input.fromX][input.fromY] = '.';
	}
	else cout << "Invalid move!" << endl;
}
