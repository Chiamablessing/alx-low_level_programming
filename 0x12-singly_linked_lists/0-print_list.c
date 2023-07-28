#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all  the elements of a list_t list
 * @h: linked list to be printed
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int number_of_node = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		if (current->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%lu] %s\n", current->len, current->str);
		number_of_node++;
		current = current->next;
	}

	return (number_of_node);
}
