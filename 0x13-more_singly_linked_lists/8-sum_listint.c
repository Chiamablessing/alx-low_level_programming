#include "lists.h"

/**
 * sum_listint - sum of all the data (n) of a listint_t linked list
 * @head: pointer to the first node of the linked list
 *
 * Return: if the list is empty, return 0
 */
int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum = 0;

	while (temp != NULL)
	{
		sum += (int) temp->n;
		temp = temp->next;
	}
	return (sum);
}
