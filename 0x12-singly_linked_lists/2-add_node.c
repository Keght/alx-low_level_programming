#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: Pointer to the first element of the list.
 * @str: String to be stored in the new node
 *
 * Return: Pointer to the new element or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	int i; /* String Character Counter */
	list_t *new;

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
	new->str = strdup(str);
	new->len = i;
	new->next = *head;
	*head = new;

	return (*head);
}
