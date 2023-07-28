#include "lists.h"
/**
 * list_len - gets the number of nodes in a linked list
 * @h: reprsents a node in the list to be counted
 * Return: returns he number of elements in the linked list
 *
 */
size_t list_len(const list_t *h)
{
	size_t elements  = 0;

	while (h)
	{
		h = h->next;
		elements++;
	}
	return (elements);
}
