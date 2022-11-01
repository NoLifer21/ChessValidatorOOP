#pragma once
#include "Board.h"
class Input:public Board
{
public:
	int toX = 0;
	int toY = 0;
	int fromX = 0;
	int fromY = 0;
public:
	Board board;
	Input() {};
	~Input() {};
	void movesInput();
	enum Colors { none, white, black };
	void movesChecker();
};

