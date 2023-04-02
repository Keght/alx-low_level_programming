#include <stdio.h>

/**
 * main - Entry point of program
 * we are printing a 2 digit(a and b) number with a different to b,
 * and be combination ab and ba take same hence printing smallest of two.
 * @void: no parameter
 *
 * Return: return 0 for success
 */

int main(void)
{
	int a;
	int b;
	int c;
	int d;

	for (a = 48; a <= 57; a++)
	{
		for (b = 49; (b > a) && (b <= 57); b++)
		{
			c = b + 1;
			d = a + 1;
			putchar(a);
			putchar(b);
			if (d <= 57 && c <= 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
