#include "lists.h"
/**
 * find_listint_loop - a function that finds the loop in a linked list.
 * @head: points to the first node in a linked list
 * Return: return the address of the node where the loop
 * tarts, or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *fast = head, *slow = head;

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (fast == slow)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (slow);
		}
	}
	return (NULL);
}
