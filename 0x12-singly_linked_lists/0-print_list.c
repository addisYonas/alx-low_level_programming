#include "lists.h"

/**
 * print_list -print all the elements of list
 * @h: header
 * Return - number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t num_nodes = 0;
	
	const list_t *j = h;
	
	while(h != NULL)
	{
		printf("[%d] %s\n", j->len, j->str != NULL ? j->str : "(nil)");
		j = j->next;
		num_nodes++;
	}
	return (num_nodes);
}
