#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Free the memory allocated to the list_t list.
 * @head: The pointer to the first element of the list.
 */

void free_list(list_t *head)
{
	list_t *current;
	list_t *temp;

	current = head;
	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp->str);
		free(temp);
	}
}
