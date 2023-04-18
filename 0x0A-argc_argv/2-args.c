#include <stdio.h>

/**
 * main - Prints all arguments given to program
 * @argc: number of strings passed to program
 * @argv: array of string passed to program
 *
 * Return: 0 for success or anything otherwise
 */

int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (argc > 0)
	{
		printf("%s\n", argv[i]);
		i++;
		argc--;
	}
	return (0);
}
