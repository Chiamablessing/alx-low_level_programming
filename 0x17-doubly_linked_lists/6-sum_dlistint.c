#include "lists.h"
/**
 *sum_dlistint - function that sums up all the values of all
 *		node in a linked list
 *@head: pointer to tha first node of a linked list
 *Return: returns the sum of all the node values in a linked list
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int s = 0;

	while (current)
	{
		s += current->n;
		current = current->next;
	}
	return (s);
}
