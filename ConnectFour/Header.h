#include <iostream>

const int par = 6;
std::string createbrd(std::string board[][par]);
void printbrd(std::string board[][par]);


std::string createbrd(std::string board[][par])
{
	for (int x = 0; x < 7; x++)
	{
		for (int y = 0; y < 6; y++)
		{
			board[x][y] = "[ ] ";
		}
	}
}

void printbrd(std::string board[][par])
{
	std::string temp;
	for (int x = 0; x < 7; x++)
	{
		for (int y = 0; y < 6; y++)
		{
			 temp = board[x][y];
			 std::cout << temp;
		}
	}
}