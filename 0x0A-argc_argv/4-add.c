#include <stdio.h>

int atoi(char *str);

/**
 * main - add sequence of numbers from terminal arguments
 * @argc: number of arguments provided
 * @argv: different arguments provided
 *
 *Return: 0 for success or 1 otherwise
 */

int main(int argc, char *argv[])
{
	int a;
	int b;
	int sum;

	for (a = 1, sum = 0; a < argc; a++)
	{
		b = atoi(argv[a]);
		if (b == -1)
		{
			return (1);
		}
		else
		{
			sum = sum + b;
		}
	}
	printf("%d\n", sum);
	return (0);
}

/**
 * atoi - change string to integer
 * @str: string to change
 *
 * Return: integer generated (success) or -1 otherwise
 */

int atoi(char *str)
{
	int c;
	int a;

	c = 0;
	a = (int)(*str);
	while (a >= 48 && a <= 58)
	{
		a = a - 48;
		c = a + c;
		c = c * 10;
		str++;
		a = (int)(*str);
	}
	if (a != 0 && (a > 58 || a < 48))
	{
		printf("Error\n");
		return (-1);
	}
	else
	{
		return (c / 10);
	}
}
