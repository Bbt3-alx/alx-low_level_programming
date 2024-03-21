#include "lists.h"

/**
 * print_dlistint - print all the element of a dlistint_t list
 * @h: Pointer to the head of the list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t  nb_node = 0;

	current = h;
	while (current != NULL)
	{
		nb_node++;
		printf("%i\n", current->n);
		current = current->next;
	}
	return (nb_node);
}
