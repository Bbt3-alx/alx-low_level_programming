#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: The head of the lists
 * @index: the index of the node, starting from 0
 * Return: The nth node of a dlistint_t linked list.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;

	current = head;

	for (current = head; current != NULL; current = current->next, index--)
	{
		if (index == 0)
		{
			return (current);
		}
	}

	return (NULL);
}
