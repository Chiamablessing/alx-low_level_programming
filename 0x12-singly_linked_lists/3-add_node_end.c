#include "lists.h"
/**
 * add_node_end - adds a new node to the end of the list
 * @head: a pointer to a node pointer that points to another
 * node in the list
 *
 * @str: the string value to be added to the node value
 *
 * Return: returns pointer to the new element in the node
 * otherwise null if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end_node, *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);

	}
	new_node->len = strlen(str);
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;

	}
	else
	{
		end_node = *head;
		while (end_node->next != NULL)
			end_node = end_node->next;
		end_node->next = new_node;

	}
	return (new_node);

}
