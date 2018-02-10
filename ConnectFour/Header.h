#include <iostream>
#include <string>
#include <vector>

void printbrd(std::vector<std::vector<std::string> > board);
std::vector<std::vector<std::string> > turn(std::vector<std::vector<std::string> > board, std::string player);
bool wincheck(std::vector<std::vector<std::string> > board, std::string player);

void printbrd(std::vector<std::vector<std::string> > board)
{
	for (int x = 5; x >= 0; x--)
	{
		for (int y = 0; y < 7; y++)
		{
			 std::cout << board[x][y];
		}
		std::cout << "\n";
	}
	for (int x = 0; x < 7; x++)
	{
		std::cout << " " << x + 1 << "  ";
	}
	std::cout << "\n";
}

 std::vector<std::vector<std::string> > turn(std::vector<std::vector<std::string> > board, std::string player)
{
	int per;
	bool check = false;
	int col;

	while (check == false)
	{
		while (true)
		{
			std::cin >> col;
			if (col > 0 && col < 8)
			{
				break;
			}
			std::cout << "Please choose a real column.\n";
		}
		int tcol = col - 1;
		for (per = 0; per < 6; per++)
		{
			if (board[per][tcol] == "[ ] ")
			{
				check = true;
				break;
			}
			else if (per == 5)
			{
				std::cout << "Choose another column.\n";
			}
		}

		if (check)
		{
			board[per][tcol] = player;
		}
	}
	return board;

}

 bool wincheck(std::vector<std::vector<std::string> > board, std::string player)
 {
	 bool wincheck = false;

	 for (int x = 0; x < 3; x++)
	 {
		 for (int y = 0; y < 7; y++)
		 {
			 if (board[x][y] == board[x+1][y] && board[x][y] == board[x+2][y] && board[x][y] == board[x+3][y] && board[x][y] != "[ ] ")
			 {
				 wincheck = true;
			 }
		 }
	 }
	 for (int x = 0; x < 6; x++)
	 {
		 for (int y = 0; y < 4; y++)
		 {
			 if (board[x][y] == board[x][y + 1] && board[x][y] == board[x][y + 2] && board[x][y] == board[x][y + 3] && board[x][y] != "[ ] ")
			 {
				 wincheck = true;
			 }
		 }
	 }
	 for (int x = 0; x < 2; x++)
	 {
		 for (int y = 0; y < 3; y++)
		 {
			 if (board[x][y] == board[x + 1][y + 1] && board[x][y] == board[x + 2][y + 2] && board[x][y] == board[x + 3][y + 3] && board[x][y] != "[ ] ")
			 {
				 wincheck = true;
			 }
		 }
	 }

	 if (wincheck == true)
	 {
		 std::cout << player << "won.\n";
	 }
	 return wincheck;
 }