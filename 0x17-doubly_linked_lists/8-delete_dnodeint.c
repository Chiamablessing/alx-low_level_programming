#include "lists.h"
/**
 *delete_dnodeint_at_index - function that deletes a node of
 *				a linked list at a given index
 *@head: pointer to the first node of the linked list
 *@index: index of the node to be deleted from the linked list
 *Return: returns a pointer to tha linked list and NLL on error
 *
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}
	while (current && i < index)
	{
		current = current->next;
		i++;
	}
	if (current == NULL)
		return (-1);
	if (current->prev)
		current->prev->next = current->next;
	if (current->next)
		current->next->prev = current->prev;
	free(current);
	return (1);
}
