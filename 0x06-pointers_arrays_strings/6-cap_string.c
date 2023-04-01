#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: gets character to convert
 *
 * Return: character
 */

char *cap_string(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A') && (str[i] <= 'Z'))
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
