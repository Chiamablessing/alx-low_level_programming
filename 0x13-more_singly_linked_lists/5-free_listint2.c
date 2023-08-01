#include "lists.h"

/**
 * free_listint2 - free a listint_t list and set head to NULL
 * @head: pointer to pointer to the head of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (*head == NULL)
		return;

	while (*head != NULL)
	{
		temp = (*head);
		(*head) = (*head)->next;
		free(temp);
	}

	*head = NULL;
}
