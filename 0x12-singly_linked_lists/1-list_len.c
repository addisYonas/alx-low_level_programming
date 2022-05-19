#include "lists.h"

/**
 * list_len - return number of elements in a linked
 * @h: header
 * Return:number of linked list
 */

size_t list_len(const list_t *h)
{
	size_t num_elements;
	const list_t *j = h;

	for (num_elements = 0; j != NULL; num_elements++)
	{
		j = j->next;
	}
	return (num_elements);
}
