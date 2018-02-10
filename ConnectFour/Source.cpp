#include "header.h"

int main()
{
	bool win = false;
	std::string r = "[R] ";
	std::string y = "[Y] ";
	std::vector<std::string> board1(7,"[ ] ");
	std::vector<std::vector<std::string> > board(6, board1);
	printbrd(board);

	while (true)
	{
		board = turn(board, r);
		printbrd(board);
		win = wincheck(board, r);
		if (win)
		{
			break;
		}
		board = turn(board, y);
		printbrd(board);
		win = wincheck(board, y);
		if (win)
		{
			break;
		}
	}

	system("pause");
	return 0;
}