#include "lists.h"
/**
 * insert_nodeint_at_index - a function that inserts a new node
 * at a given position.
 * @head: a pointer pointig to the first node of the linked list
 * @idx: the index of the list where the new node should be added.
 * Index starts at 0
 * @n: value of the node
 * Return: returns the address of the new node, or NULL if it failedL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *temp, *new = malloc(sizeof(listint_t));

	if (new == NULL || (*head) == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = (*head);
		(*head) = new;
		return (new);
	}

	temp = (*head);

	while (temp != NULL && i < (idx - 1))
	{
		temp = temp->next;
		i++;
	}
	if (temp == NULL)
		 return (NULL);

		new->next = temp->next;
		temp->next = new;
	
	return (new);
}
