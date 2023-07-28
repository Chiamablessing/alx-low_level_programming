#include "lists.h"

/**
 * print_list - prints all  the elements of a list_t list
 * @h: linked list to be printed
 *
 * Return: the number of nodes otherwise null.
 */
size_t print_list(const list_t *h)
{
	int first_node = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		first_node++;
		h = h->next;
	}

	return (first_node);
}
