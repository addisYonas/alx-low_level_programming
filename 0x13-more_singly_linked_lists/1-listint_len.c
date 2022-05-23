#include "lists.h"
#include <stdio.h>

/**
 * listint_len - returns the number of elements in a linked list `listint_t`.
 * @h: linked list
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t element = 0;
	const listint_t *s = h;

	while (s != NULL)
	{
		s = s->next;
		element++;
	}
	return (element);
}
