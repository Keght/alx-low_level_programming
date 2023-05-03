#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints all elements of linked list of list_t.
 * @h: Pointer to the first element in the list
 *
 * Return: number of nodes or [0] (nil) if str == NULL.
 */

size_t print_list(const list_t *h)
{
	int i;

	i = 1; /* Nodes counter */
	if (h == NULL)
		return (i - 1);

	while (h->next != NULL)
	{
		i++;

		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
	}

	if (h->str == NULL)
		printf("[0] (nil)\n");
	else
		printf("[%d] %s\n", h->len, h->str);

	return (i);
}
