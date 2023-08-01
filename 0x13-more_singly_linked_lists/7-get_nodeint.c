#include "lists.h"
/**
 * get_nodeint_at_index - a function that returns the
 * nth node of a listint_t linked list.
 * @head: pointer to the head of the linked list.
 * @index: position where the node will be starting
 * Return: returns the newly added node address.
 * if the node does not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}
	if (i == index)
		return (temp);
	return (NULL);
}
