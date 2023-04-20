#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints minimum number of coins to make change
 * for an amount of money.
 * @argc: number of terminal arguments received
 * @argv: terminal arguments(as strings) received
 *
 * Return: 1 if argc is not 2 or any integer (0) otherwise.
 */

int main(int argc, char *argv[])
{
	int a, b, c, Total;
	int cent[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	b = atoi(argv[1]);
	for (a = 0, Total = 0, c = 0; a <= 5;)
	{
		if (b >= cent[a])
		{
			c = b % cent[a];
			if (c == 0)
			{
				c = b / cent[a];
				Total = Total + c;
				break;
			}
			else if (c < 0)
			{
				printf("0\n");
				break;
			}
			else
			{
				c = b - c;
				b = b - c;
				c = c / cent[a];
				Total = Total + c;
			}
			a++;
		} else
		{
			a++;
		}
	}
	printf("%d\n", Total);
	return (0);
}
