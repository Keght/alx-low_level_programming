#include <stdio.h>

/**
 * main - Prints the programs name
 * @argc: number of strings passed to program
 * @argv: array of string passed to program
 *
 * Return: 0 for success or anything otherwise
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
