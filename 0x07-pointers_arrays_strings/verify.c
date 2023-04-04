#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	char board[8][8] = {
	{'r', 'k', 'b', 'q', 'k', 'b', 'k', 'r'},
	{'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
	{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
	{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
	{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
	{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
	{'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
	{'R', 'K', 'B', 'Q', 'K', 'B', 'K', 'R'},
	};

	char (*p)[8];

	print_chessboard(board);

	p = board;

	while (**p != '\0')
	{
		printf("This will be printed to the number equar to number of rows\n");
		p++;
	}
	return (0);
}
