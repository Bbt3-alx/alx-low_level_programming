#include "lists.h"

/**
 * dlistint_len -  returns the number of elements in a linked dlistint_t list.
 * @h: Points to the head of the list
 * Return: The number of elements in a linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current;
	int nb_node = 0;

	current = h;
	while (current != NULL)
	{
		nb_node++;
		current = current->next;
	}
	return (nb_node);
}
