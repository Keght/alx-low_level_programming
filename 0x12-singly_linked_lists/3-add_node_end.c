#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: Pointer to pointer that points to the list_t list.
 * @str: String to add to the list at the end.
 *
 * Return: Address of new element or NULL if failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i; /* String Character Counter */
	list_t *new;
	list_t *temp;

	/* Allocate memory for the new node */
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	/* Count number of elements in the str string. */
	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	str = str - i;
	/* Set struct elements to appropriate value */
	if (*head == NULL)
	{
		new->str = strdup(str);
		new->len = i;
		new->next = *head;
		*head = new;
	} else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		new->str = strdup(str);
		new->len = i;
		new->next = temp->next;
		temp->next = new;
	}

	return (*head);
}
