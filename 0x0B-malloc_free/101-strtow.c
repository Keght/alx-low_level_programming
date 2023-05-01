#include <stdlib.h>

char **alo_store(char *ptr, char **strings);

/**
 * strtow - Calculate the number of words in the string
 * Allocate the memory to store the pointer to those words
 * Call the function alo_store to allocate memory for each word
 * @str: The string to cut into words
 *
 * Return: NULL if ac == 0 or av == NULL or program fails.
 * Else provide a pointer to a new string formed.
 */

char **strtow(char *str)
{
	char **strings;
	int j;
	int i;

	j = 0; /* word counter */
	i = 0; /* character counter */
	while ((*str) != '\0')
	{
		if ((*str) == ' ')
		{
			i += 1;
			str++;
		}

		while ((*str) != ' ')
		{
			i += 1;
			str++;
			if ((*str) == ' ' || (*str) == '\0')
			{
				j++;
				break;
			}
		}
	}

	str = str - i;

	strings = (char **)malloc((j + 1) * sizeof(char *));
	if (strings == NULL)
	{
		free(strings);
		return (NULL);
	}

	return (alo_store(str, strings));
}

/**
 * alo_store - Alocate memory to pointer to each character of each word
 * Then store each character to the allocated space
 * @ptr: string itself
 * @strings: Memory allocated to pointer to words
 *
 * Return: NULL if fail or Pointer to the array of words of the string.
 */

char **alo_store(char *ptr, char **strings)
{
	int i;
	int j;
	int a;

	j = 0;
	while ((*ptr) != '\0')
	{
		i = 0;

		if ((*ptr) == ' ')
		{
			ptr++;
		}
		else
		{
			/* Get the word */
			while ((*ptr) != ' ')
			{
				ptr++;
				i++;
				if ((*ptr) == ' ' || (*ptr) == '\0')
				{
					break;
				}
			}
			a = i;

			/* Allocate memory */
			strings[j] = (char *)malloc((i + 1) * sizeof(char));
			if (strings[j] == NULL)
			{
				for (i = 0; i < j; i++)
					free(strings[i]);
				free(strings);
				return (NULL);
			}

			/* Store there data */
			ptr = ptr - a;
			for (i = 0; i < a; i++)
			{
				strings[j][i] = *ptr;
				ptr++;
			}
			j++;
		}
	}
	return (strings);
}
