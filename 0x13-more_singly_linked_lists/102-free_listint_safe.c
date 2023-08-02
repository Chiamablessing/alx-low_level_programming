#include "lists.h"
/**
 * free_listint_safe - function that free a linked list
 * @h: pointer that points to the first node of linked list
 * Return: returns the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count, len = 0;
	listint_t *tmp, *curri = *h;
	/* create a set to store visted nodes */
	const size_t table_size = 1024;
	const size_t count_mask = table_size - 1;
	const listint_t **count_table = calloc(table_size, sizeof(*count_table));

	if (count_table == NULL)
		exit(98);

	while (curri != NULL)
	{
		count = ((size_t) curri) & count_mask;
		if (count_table[count] == curri)
			break;

		count_table[count] = curri;

		len++;
		tmp = curri;
		curri = curri->next;
		free(tmp);
		*h = NULL;
	}

	free(count_table);
	return (len);
}
