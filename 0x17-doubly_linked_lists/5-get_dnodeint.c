#include "lists.h"

/**
 * get_dnodeint_at_index - return the nth node of a dlistint_t linked list
 * @head: points to the head of the list
 * @index: the index of the node, starting from 0
 * Return: the nth node of a linked list, or NULL if the node doesn't exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	if (index == 0)
		return (head);

	current = head;
	while (current != NULL)
	{
		if (i == index)
			return (current);
		current = current->next;
		i++;
	}
	return (NULL);
}
