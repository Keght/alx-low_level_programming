#include <stdio.h>

int atoi(char *str, int a);

/**
 * main - multiply two numbers from terminal
 * @argc: number of arguments
 * @argv: different arguments
 *
 *Return: 0 for success or 1 otherwise
 */

int main(int argc, char *argv[])
{
	int a;
	int b;

	if (argc == 3)
	{
		if (*argv[1] == '-')
		{
			argv[1]++;
			a = -1 * (atoi(argv[1], 0));

			if (*argv[2] == '-')
			{
				argv[2]++;
				b = -1 * (atoi(argv[2], 0));
			}
			else
			{
				b = atoi(argv[2], 0);
			}
		}
		else if (*argv[1] != '-')
		{
			a = atoi(argv[1], 0);
			if (*argv[2] == '-')
			{
				argv[2]++;
				b = -1 * (atoi(argv[2], 0));
			}
			else
			{
				b = atoi(argv[2], 0);
			}
		}
		printf("%d\n", a * b);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}

/**
 * atoi - change string to integer
 * @str: string to change
 * @a: initial number
 *
 * Return: 0 (success) or otherwise
 */

int atoi(char *str, int a)
{
	int c;

	while ((*str >= '0') && (*str <= '9'))
	{
		c = ((int)*str) + a;
		c = c - 48;
		c = c * 10;
		a = c;
		str++;
	}

	return (c / 10);
}
