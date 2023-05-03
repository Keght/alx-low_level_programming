#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 * list_len - Returns number of elements in linked list_t list.
 * @h: Pointer to the first element in the list.
 *
 * Return: number of nodes or elements in the list.
 */

size_t list_len(const list_t *h)
{
	int i;

	i = 1; /* Nodes counter */
	if (h == NULL)
		return (i - 1);

	while (h->next != NULL)
	{
		i++;
		h = h->next;
	}

	return (i);
}
