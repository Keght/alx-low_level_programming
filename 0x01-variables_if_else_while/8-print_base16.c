#include <stdio.h>

/**
 * main - Entry point
 * Return: 0(success)
 */
int main(void)
{
	char c = '0';

	while (c <= '9')
	{
		putchar(c);
		c++;
	}
	while (c > '9')
	{
		c = 'a';
		while (c <= 'f')
		{
			putchar(c);
			c++;
		}
		break;
	}
	putchar('\n');
	return (0);
}
