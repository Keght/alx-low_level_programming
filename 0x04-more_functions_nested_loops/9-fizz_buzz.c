#include <stdio.h>

/**
 * main - print fizz_buzz and numbers
 * @void: no parameter
 *
 * Return: 0(success)
 */

int main(void)
{
	int a;

	a = 1;
	while (a <= 100)
	{
		if (a % 15 == 0)
			printf("FizzBuzz ");
		else if (a % 3 == 0)
			printf("Fizz ");
		else if (a % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", a);
		a++;
	}
	printf("\n");
	return (0);
}
