#include "lists.h"
/**
 * add_node - a pointer function that add a new node
 * to the beginning of the list
 *
 * @head: a pointer pointing to the node pointer
 * which points to the next node in the list
 *
 * @str: a string constant which will be copied
 * into the str member of the node value
 *
 * Return: returns null on error otherwise pointer to
 * the new node on success
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = (*head);
	(*head) = new_node;


	return (*head);
}
