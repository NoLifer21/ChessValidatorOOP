#pragma once
class Board
{
public:
	char board[10][10];
	int row = 8;;
	int column = 8;;
public:
	Board() {};
	~Board() {};
	void createBoard();
	void printBoard();
	enum  Colors { none, white, black };
};

