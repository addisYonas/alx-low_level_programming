#include "lists.h"
#include <string.h>

/**
 * add_node_end - add new node at end
 * @head: point to the head
 * @str: the string to put into it
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *end;
	unsigned int i;

	if (!(head && str))
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	for (i = 0; str[i]; i++)
	{}
	new_node->len = i;
	new_node->next = NULL;

	if (!*head)
	{
		*head = new_node;
		return (new_node);
	}
	end = *head;
	while (end->next)
	{
		end = end->next;
	}
	end->next = new_node;

	return (new_node);
}
