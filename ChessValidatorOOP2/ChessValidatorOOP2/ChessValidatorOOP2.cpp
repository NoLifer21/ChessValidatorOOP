
#include <iostream>
#include"Board.h"
#include"Input.h"
#include"King.h"
using namespace std;

int main()
{
	Board board;
	Input input;
	King kingMove;
	board.createBoard();
	int movesCounter = 0, gameEnder = 0;


	do
	{

		if (movesCounter % 2 == 0)
		{
			cout << "White's move: ";
			input.movesInput();
		}
		else
		{
			cout << "Black's move: ";
			input.movesInput();
		}
		if (board.board[input.fromX][input.fromY] == 'K')
		{
			kingMove.IsMoveValid();
			board.printBoard();
		}

		movesCounter++;
		cout << "Do you wish to continue(0-No, 1-Yes): "; cin >> gameEnder;
	} while (gameEnder != 0);
}
