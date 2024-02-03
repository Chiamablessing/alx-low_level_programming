#include "lists.h"
/**
 *add_dnodeint_end - function that adds a new node to the end
 *			of a linked list
 *@head: pointer to the first node of a linked list
 *@n: value to be held by the the new node which is to be
 *	inerted to the linked list
 *Return: returnsa pointer to the node on success and NULL
 *	on error
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current = *head;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		while (current->next)
		{
			current = current->next;
		}
		current->next = new_node;
		new_node->prev = current;
	}
	return (new_node);
}
