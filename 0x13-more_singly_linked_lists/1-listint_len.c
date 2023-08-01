#include "lists.h"
/**
 * listint_len - prints the number of elements in a listint_t list
 * @h: pointer to the fisrt node in the ilst
 * Return: returns the number of nodes in the list
 */
size_t listint_len(const listint_t *h)
{
	listint_t *t = (listint_t *)h;
	int len = 0;

	if (h == NULL)
		return (len);
	while (t)
	{
		len++;
		t = t->next;
	}
	return (len);
}
