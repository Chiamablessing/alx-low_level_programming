#include "lists.h"
/**
 * pop_listint -  a function that deletes the head
 * node of a listint_t linked list
 * @head: pointer to the first node of the list
 * Return: returns the head node’s data (n).
 * if the linked list is empty return 0
 *
 */
int pop_listint(listint_t **head)
{
	listint_t *val;
	int n;

	if (*head == NULL)
		return (0);
	val  = *head;

	n = val->n;
	(*head) = (*head)->next;
	free(val);
	return (n);
}
