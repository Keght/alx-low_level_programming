#include <stdio.h>

/**
 * main - Entry point
 * Return: 0(success)
 */
int main(void)
{
	int a = '0';

	while (a <= '9')
	{

		putchar(a);
		if (a != '9')
		{
			putchar(',');
			putchar(' ');
			a++;
		} else
		{
			a++;
		}
	}
	putchar('\n');
	return (0);
}
