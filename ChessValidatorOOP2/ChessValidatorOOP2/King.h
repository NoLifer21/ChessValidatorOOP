#pragma once
#include "Input.h"
#include "Board.h"
class King :public Input,public Board
{
	public:
		King() {};
		~King() {};
		Board board;
		Input input;
		virtual void IsMoveValid();
};

