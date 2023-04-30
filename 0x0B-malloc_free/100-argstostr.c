#include <stdlib.h>

char *alo_store(int ac, char **av, int a);

/**
 * argstostr - concatenates all the arguments of program
 * @ac: Number of arguments received
 * @av: Array of the arguments passed to the program
 *
 * Return: NULL if ac == 0 or av == NULL or program fails.
 * Else provide a pointer to a new string formed.
 */

char *argstostr(int ac, char **av)
{
	char *ptr;
	int i;
	int j;
	int a;

	/* Check if ac and av are varied */
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	/* Count number of Total number of passed characters */
	a = 0;
	for (j = 0; j < ac; j++)
	{
		ptr = *av;
		i = 0;
		while (*ptr != '\0')
		{
			i++;
			ptr++;
		}
		a += i;
		av++;
	}
	av = av - ac;

	return (alo_store(ac, av, a));
}

/**
 * alo_store - Allocates memory as required and stores appropriate
 * value from each arguments characterwise
 * @ac: number of arguments
 * @av: array of arguments
 * @a: Total number of characters of all arguments
 *
 * Return: NULL if allocation fails or else a Pointer to the string.
 */

char *alo_store(int ac, char **av, int a)
{
	int i;
	int j;
	char *ptr;

	/* Allocate the memory to allacate all chars (args, \n and \0) */
	ptr = (char *)malloc((a + ac + 1) * sizeof(char));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	/* Store value to the allocated memory on the heap */
	for (j = 0; j < ac; j++)
	{
		for (i = 0; ; i++)
		{
			if (av[j][i] == '\0')
			{
				*ptr = '\n';
				ptr++;
				break;
			}
			*ptr = av[j][i];
			ptr++;
		}
	}
	ptr = ptr - (ac + a);
	return (ptr);
}
