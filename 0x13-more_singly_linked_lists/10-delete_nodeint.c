#include "lists.h"

/**
 * delete_nodeint_at_index - delete the nth node of a listint_t list
 * @head: pointer to pointer to the head of the linked list
 * @index: index position to be deleted.
 *
 * Return: 1 if successful otherwise -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *prev = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	temp = *head;

	while (temp != NULL && i < index)
	{
		prev = temp;
		temp = temp->next;
		i++;
	}
	if (temp == NULL)
		return (-1);

	if (index == 0)
	{
		(*head) = (*head)->next;
		free(temp);
		return (1);
	}
	prev->next = temp->next;
	free(temp);
	return (1);
}
