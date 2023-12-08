#include "lists.h"

/**
 * print_dlistint - print all element of a dlistint_i list
 * @h: The head of the list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp;
	int nb_node = 0;

	temp = h;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		nb_node++;
		temp = temp->next;
	}

	return (nb_node);
}
