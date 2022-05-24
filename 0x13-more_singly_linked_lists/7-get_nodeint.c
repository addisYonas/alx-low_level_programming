#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: head of linked list
 * @index: node index to return
 * Return: node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *s;

	if (head == NULL)
		return (0);

	s = head;

	while (index != 0)
	{
		s = s->next;
		index--;
		if (s == NULL)
			return (0);
	}
	return (s);
}
