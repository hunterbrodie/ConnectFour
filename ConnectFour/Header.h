#include <iostream>
#include <string>

const int par = 6;
int* createbrd(std::string board[][par]);
void printbrd(std::string board[][par]);

int* createbrd(std::string board[][par])
{ 
	int* pointer = new int;
	for (int x = 0; x < 7; x++)
	{
		for (int y = 0; y < 6; y++)
		{
			board[x][y] = "[ ] ";
		}
	}

	return pointer;
}

void printbrd(std::string board[][par])
{
	std::string temp;
	for (int x = 0; x < 7; x++)
	{
		for (int y = 0; y < 6; y++)
		{
			 std::cout << board[x][y];
		}
	}
}