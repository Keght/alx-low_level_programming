#include <stdio.h>

/**
 * main - Prints the number of arguments passed to program
 * @argc: number of strings passed to program
 * @argv: array of string passed to program
 *
 * Return: 0 for success or anything otherwise
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
