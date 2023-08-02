#include "lists.h"

/**
 * print_listint_safe - a function that prints a listint_t linked list
 * @head: pointer to head of the node in linked list
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count, len = 0;
	/* create a set to store visted nodes */
	const size_t table_size = 1024;
	const size_t count_mask = table_size - 1;
	const listint_t **count_table = calloc(table_size, sizeof(*count_table));

	if (count_table == NULL)
		exit(98);

	while (head)
	{
		/* check if the node has been visited before */
		count = ((size_t) head) & count_mask;
		if (count_table[count] == head)
		{
			printf("-> [%p] %d\n", (void *) head, head->n);
			break;
		}

		/* add the node to the hash table */
		count_table[count] = head;

		printf("[%p] %d\n", (void *) head, head->n);
		len++;

		head = head->next;
	}

	/* clean up */
	free(count_table);
	return (len);
}
