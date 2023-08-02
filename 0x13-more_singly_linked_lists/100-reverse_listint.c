#include "lists.h"
/**
 * reverse_listint - a function that reverses a linked list
 * @head: pointer that points to the first node in the linked list
 * Return: returns the new head of the list
 *
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *temp = NULL;

	if (*head == NULL)
		return (NULL);
	while (*head)
	{
		temp = (*head)->next;
		(*head)->next = prev;
		prev = (*head);
		(*head) = temp;
	}
	(*head) = prev;
	return (*head);
}
