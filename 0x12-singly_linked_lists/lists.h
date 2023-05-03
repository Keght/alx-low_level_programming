#ifndef LISTS_T_H
#define LISTS_T_H
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;
#endif

#ifndef PRINT_LIST_H
#define PRINT_LIST_H
size_t print_list(const list_t *h);
#endif

#ifndef LIST_LEN_H
#define LIST_LEN_H
size_t list_len(const list_t *h);
#endif

#ifndef ADD_NODE_H
#define ADD_NODE_H
list_t *add_node(list_t **head, const char *str);
#endif

#ifndef ADD_NODE_END_H
#define ADD_NODE_END_H
list_t *add_node_end(list_t **head, const char *str);
#endif

#ifndef FREE_LIST_H
#define FREE_LIST_H
void free_list(list_t *head);
#endif
