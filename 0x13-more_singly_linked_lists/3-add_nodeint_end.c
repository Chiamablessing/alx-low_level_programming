#include "lists.h"
/**
 * add_nodeint_end - adds a node at the end of the listint_t list
 * @head: pointer to the first node in the list
 * @n: value of the node
 * Return: the address of the new element and NULL on error
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end = (listint_t *)*head;
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		(*head) = new;
		return (new);
	}
	while (end->next)
	{
		end = end->next;
	}
	end->next = new;
	new = end;
	return (new);
}
